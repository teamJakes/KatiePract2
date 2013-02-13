#import <Foundation/Foundation.h>
#import "Student.h"
#import "Professor.h"

typedef Person ListItemType;

@interface Node : NSObject {
    Node *next;
    ListItemType data;
}

//properties
@property (nonatomic, retain) Node *next;
@property (nonatomic, retain) ListItemType data;

/* Method constructor
 * parameters:  none
 * returns:	none
 * precondition: none
 * postcondition: next value is null
 * Algorithm: sets next value of the node to null
 */
- (id) init;

/* Method setData
 * parameters: newData -- the student item to be held by the node.  Must be of type ListItemType
 * returns:	none
 * precondition: none
 * postcondition: none
 * Algorithm: sets data of node to data passed in
 */
- (void) setData: (Node *) newData;

/* Method setNext
 * parameters: newNext -- pointer to the next node in the list
 * precondition: none
 * postcondition: current node now points to a different node
 * Algorithm: next value of node points at new node
 */
- (void) setNext: (Node *) newNext;

/* Method getData
 * parameters: none
 * returns:	the object of type student that the node holds
 * precondition: none
 * postcondition: student object is returned
 * Algorithm: returns student object held by node
 */
- (ListItemType) getData;

/* Method getNext
 * parameters: none
 * returns:	the pointer of the node pointing to the next node
 * precondition: none
 * postcondition: pointer pointing to next node is returned
 * Algorithm: returns next value, which holds the pointer pointing to the next node
 */
- (Node *) getNext;

@end