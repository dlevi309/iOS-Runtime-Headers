/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UICollectionLayoutSectionGeometryTranslator, NSArray, _UIRTree, _UIOrderedRangeIndexer, NSDictionary;

@interface _UICollectionLayoutSolutionState : NSObject {

	_UICollectionLayoutSectionGeometryTranslator* _sectionGeometryTranslator;
	NSArray* _bookmarks;
	_UIRTree* _geometricIndexer;
	_UIOrderedRangeIndexer* _itemRangeIndexer;
	NSDictionary* _auxillaryRangeIndexerKindDict;

}

@property (nonatomic,readonly) NSArray * bookmarks;                                                                   //@synthesize bookmarks=_bookmarks - In the implementation block
@property (nonatomic,readonly) _UIRTree * geometricIndexer;                                                           //@synthesize geometricIndexer=_geometricIndexer - In the implementation block
@property (nonatomic,readonly) _UIOrderedRangeIndexer * itemRangeIndexer;                                             //@synthesize itemRangeIndexer=_itemRangeIndexer - In the implementation block
@property (nonatomic,readonly) NSDictionary * auxillaryRangeIndexerKindDict;                                          //@synthesize auxillaryRangeIndexerKindDict=_auxillaryRangeIndexerKindDict - In the implementation block
@property (nonatomic,readonly) _UICollectionLayoutSectionGeometryTranslator * sectionGeometryTranslator;              //@synthesize sectionGeometryTranslator=_sectionGeometryTranslator - In the implementation block
-(id)description;
-(_UICollectionLayoutSectionGeometryTranslator *)sectionGeometryTranslator;
-(_UIRTree *)geometricIndexer;
-(NSArray *)bookmarks;
-(_UIOrderedRangeIndexer *)itemRangeIndexer;
-(NSDictionary *)auxillaryRangeIndexerKindDict;
-(id)initWithGeometryTranslator:(id)arg1 bookmarks:(id)arg2 geometricIndexer:(id)arg3 itemRangeIndexer:(id)arg4 auxillaryRangeIndexerDict:(id)arg5 ;
-(id)copyWithGeometryConverter:(id)arg1 ;
@end

