/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CRTreeNode *)parent;
-(void)setParent:(CRTreeNode *)arg1 ;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(void)removeNode:(id)arg1 ;
-(void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)moveNode:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(id)parentReference;
-(CRTree *)tree;
-(BOOL)isInLoop;
-(id)initWithValue:(id)arg1 parent:(id)arg2 tree:(id)arg3 ;
-(BOOL)isLoopNode;
-(id)insertNodeWithValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setTree:(CRTree *)arg1 ;
@end

