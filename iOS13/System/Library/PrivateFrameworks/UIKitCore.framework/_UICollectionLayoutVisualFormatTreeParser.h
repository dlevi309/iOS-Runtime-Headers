/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UICollectionLayoutVisualTreeNode, NSArray;

@interface _UICollectionLayoutVisualFormatTreeParser : NSObject {

	_UICollectionLayoutVisualTreeNode* _root;
	NSArray* _visualFormats;

}

@property (nonatomic,copy) NSArray * visualFormats;                                 //@synthesize visualFormats=_visualFormats - In the implementation block
@property (nonatomic,retain) _UICollectionLayoutVisualTreeNode * root;              //@synthesize root=_root - In the implementation block
+(id)treeParserWithVisualFormats:(id)arg1 ;
-(id)description;
-(_UICollectionLayoutVisualTreeNode *)root;
-(void)setRoot:(_UICollectionLayoutVisualTreeNode *)arg1 ;
-(NSArray *)visualFormats;
-(void)setVisualFormats:(NSArray *)arg1 ;
-(id)_parse;
-(id)initWithVisualFormats:(id)arg1 ;
-(void)_visitChildrenOfNodeDepthFirst:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_nodeForParser:(id)arg1 withParserDict:(id)arg2 size:(id)arg3 ;
-(id)_normalizeFractionsOfLayoutVFLItemsForItems:(id)arg1 ;
-(void)enumerateTreeNodesDepthFirstUsingBlock:(/*^block*/id)arg1 ;
@end

