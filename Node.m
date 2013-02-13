#import "Node.h"

@implementation Node

@synthesize next, data;

<#methods#>
- (id) init {
    if (self = [super init]) {
        next = NULL;
        //data
        return (self);
    }
    return nil;
}

- (void) setData: (Node *) newData {
    data = newData;
}

- (void) setNext: (Node *) newNext {
    next = newNext;
}

- (ListItemType) getData {
    return data;
}

- (Node *) getNext {
    return next;
}

@end