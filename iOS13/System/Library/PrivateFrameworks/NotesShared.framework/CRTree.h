/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <ReminderKit/CRObject.h>

@class CROrderedSet, CRTreeNode, CRDocument;

@interface CRTree : CRObject

@property (nonatomic,readonly) CROrderedSet * nodes; 
@property (nonatomic,readonly) CRTreeNode * root; 
@property (nonatomic,readonly) CRDocument * document; 
@property (nonatomic,readonly) long long count; 
+(id)CRProperties;
-(id)init;
-(long long)count;
-(CRTreeNode *)root;
-(CROrderedSet *)nodes;
-(void)removeNode:(id)arg1 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(CRDocument *)document;
-(id)initWithCRCoder:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(void)invalidateChildren;
-(void)computeChildren;
-(void)moveNode:(id)arg1 toParent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)insertNode:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)insertNodeWithValue:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(unsigned long long)insertIndexForNode:(id)arg1 childIndex:(unsigned long long)arg2 ;
-(void)setNodeTree:(id)arg1 insertAtIndex:(unsigned long long)arg2 ;
@end

