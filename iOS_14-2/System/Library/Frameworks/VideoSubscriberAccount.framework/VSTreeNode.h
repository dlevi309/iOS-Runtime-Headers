/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)children;
-(id)init;
-(NSIndexPath *)indexPath;
-(BOOL)isLeaf;
-(id)initWithRepresentedObject:(id)arg1 ;
-(void)setParentNode:(VSTreeNode *)arg1 ;
-(VSTreeNode *)parentNode;
-(NSArray *)childNodes;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(id)representedObject;
-(NSMutableArray *)mutableChildNodes;
-(void)insertChildNodes:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeChildNodesAtIndexes:(id)arg1 ;
-(id)descendantNodeAtIndexPath:(id)arg1 ;
-(id)_descendantNodesAtDepth:(unsigned long long)arg1 ;
-(void)enumerateDescendantsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

