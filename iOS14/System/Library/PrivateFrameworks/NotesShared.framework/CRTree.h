/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CRTreeNode *)root;
-(void)computeChildren;
-(void)moveNode:(id)arg1 toParent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)insertNode:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)init;
-(void)setDocument:(CRDocument *)arg1 ;
-(id)insertNodeWithValue:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(unsigned long long)insertIndexForNode:(id)arg1 childIndex:(unsigned long long)arg2 ;
-(void)setNodeTree:(id)arg1 insertAtIndex:(unsigned long long)arg2 ;
-(void)invalidateChildren;
-(void)removeNode:(id)arg1 ;
-(long long)count;
-(void)mergeWith:(id)arg1 ;
-(CRDocument *)document;
-(id)initWithCRCoder:(id)arg1 ;
-(CROrderedSet *)nodes;
@end

