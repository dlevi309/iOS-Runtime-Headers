/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFTreeObserver;
@class NSArray, NSMutableArray, NSIndexPath;

@interface WFTreeNode : NSObject {

	id _representedObject;
	WFTreeNode* _parentNode;
	id<WFTreeObserver> _observer;
	NSArray* _flattenedDescendents;
	NSMutableArray* _mutableChildNodes;

}

@property (nonatomic,readonly) NSMutableArray * mutableChildNodes;              //@synthesize mutableChildNodes=_mutableChildNodes - In the implementation block
@property (nonatomic,retain) id representedObject;                              //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath; 
@property (getter=isLeaf,nonatomic,readonly) BOOL leaf; 
@property (nonatomic,copy) NSArray * childNodes; 
@property (nonatomic,__weak,readonly) WFTreeNode * parentNode;                  //@synthesize parentNode=_parentNode - In the implementation block
@property (assign,nonatomic,__weak) id<WFTreeObserver> observer;                //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSArray * flattenedDescendents;                  //@synthesize flattenedDescendents=_flattenedDescendents - In the implementation block
-(id)init;
-(id)debugDescription;
-(id<WFTreeObserver>)observer;
-(NSIndexPath *)indexPath;
-(WFTreeNode *)parentNode;
-(void)setParentNode:(WFTreeNode *)arg1 ;
-(void)setObserver:(id<WFTreeObserver>)arg1 ;
-(void)addNode:(id)arg1 ;
-(BOOL)isLeaf;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
-(NSArray *)childNodes;
-(void)setChildNodes:(NSArray *)arg1 ;
-(NSMutableArray *)mutableChildNodes;
-(id)initWithRepresentedObject:(id)arg1 ;
-(void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeNodeAtIndex:(unsigned long long)arg1 ;
-(void)moveNodeFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)childDescendentsDidChange:(id)arg1 oldValue:(id)arg2 changeSource:(id)arg3 ;
-(void)setFlattenedDescendents:(id)arg1 changeSource:(id)arg2 ;
-(id)descendentNodeAtRelativeIndexPath:(id)arg1 ;
-(unsigned long long)enumerateWithBlock:(/*^block*/id)arg1 currentLevel:(unsigned long long)arg2 ;
-(void)enumerateDescendentsWithBlock:(/*^block*/id)arg1 ;
-(id)debugDescriptionAtDepth:(unsigned long long)arg1 ;
-(id)paddedStringAtDepth:(unsigned long long)arg1 ;
-(NSArray *)flattenedDescendents;
@end

