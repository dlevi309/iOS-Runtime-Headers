/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPFieldTreeNode.h>

@interface TSPFieldTreeNodeWithChildren : TSPFieldTreeNode {

	map<int, TSPFieldTreeNode *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, TSPFieldTreeNode *> > >* _children;

}
-(void)saveToArchiver:(id)arg1 message:(Message*)arg2 ;
-(id)childNodeForFieldNumber:(int)arg1 ;
-(BOOL)addChildNode:(id)arg1 forFieldNumber:(int)arg2 ;
@end

