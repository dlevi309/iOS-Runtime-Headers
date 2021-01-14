/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UICollectionLayoutVisualTreeNode *)root;
-(id)_parse;
-(void)setRoot:(_UICollectionLayoutVisualTreeNode *)arg1 ;
-(void)_visitChildrenOfNodeDepthFirst:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_normalizeFractionsOfLayoutVFLItemsForItems:(id)arg1 ;
-(id)description;
-(void)enumerateTreeNodesDepthFirstUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)visualFormats;
-(void)setVisualFormats:(NSArray *)arg1 ;
-(id)initWithVisualFormats:(id)arg1 ;
-(id)_nodeForParser:(id)arg1 withParserDict:(id)arg2 size:(id)arg3 ;
@end

