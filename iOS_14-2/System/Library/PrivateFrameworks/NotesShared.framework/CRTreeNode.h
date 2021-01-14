/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <ReminderKit/CRObject.h>

@class CRTree, NSArray, CRWeakReference;

@interface CRTreeNode : CRObject {

	CRTree* _tree;
	NSArray* _children;

}

@property (assign,nonatomic,__weak) CRTree * tree;                     //@synthesize tree=_tree - In the implementation block
@property (assign,nonatomic,__weak) CRTreeNode * parent; 
@property (nonatomic,retain) CRWeakReference * parentRef; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) NSArray * children;                       //@synthesize children=_children - In the implementation block
+(id)CRProperties;
-(NSArray *)children;
-(id)parentReference;
-(id)initWithValue:(id)arg1 parent:(id)arg2 tree:(id)arg3 ;
-(CRTreeNode *)parent;
-(CRTree *)tree;
-(BOOL)isLoopNode;
-(id)insertNodeWithValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeNode:(id)arg1 ;
-(void)setParent:(CRTreeNode *)arg1 ;
-(void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isInLoop;
-(void)setTree:(CRTree *)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(void)moveNode:(id)arg1 toIndex:(unsigned long long)arg2 ;
@end

