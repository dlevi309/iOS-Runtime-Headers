/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSMutableArray, NSIndexPath, NSArray;

@interface VSTreeNode : NSObject {

	id _representedObject;
	VSTreeNode* _parentNode;
	NSMutableArray* _children;

}

@property (assign,nonatomic,__weak) VSTreeNode * parentNode;                    //@synthesize parentNode=_parentNode - In the implementation block
@property (nonatomic,retain) NSMutableArray * children;                         //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) id representedObject;                            //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * indexPath; 
@property (getter=isLeaf,nonatomic,readonly) BOOL leaf; 
@property (nonatomic,copy,readonly) NSArray * childNodes; 
@property (nonatomic,readonly) NSMutableArray * mutableChildNodes; 
+(id)treeNodeWithRepresentedObject:(id)arg1 ;
+(id)keyPathsForValuesAffectingIndexPath;
+(id)keyPathsForValuesAffectingLeaf;
-(id)init;
-(NSIndexPath *)indexPath;
-(VSTreeNode *)parentNode;
-(void)setParentNode:(VSTreeNode *)arg1 ;
-(BOOL)isLeaf;
-(NSMutableArray *)children;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(id)representedObject;
-(NSArray *)childNodes;
-(NSMutableArray *)mutableChildNodes;
-(id)initWithRepresentedObject:(id)arg1 ;
-(void)insertChildNodes:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeChildNodesAtIndexes:(id)arg1 ;
-(id)descendantNodeAtIndexPath:(id)arg1 ;
-(id)_descendantNodesAtDepth:(unsigned long long)arg1 ;
-(void)enumerateDescendantsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

