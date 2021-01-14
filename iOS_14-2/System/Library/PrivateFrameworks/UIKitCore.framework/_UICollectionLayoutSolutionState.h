/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UICollectionLayoutSectionGeometryTranslator *)sectionGeometryTranslator;
-(NSDictionary *)auxillaryRangeIndexerKindDict;
-(id)description;
-(id)initWithGeometryTranslator:(id)arg1 bookmarks:(id)arg2 geometricIndexer:(id)arg3 itemRangeIndexer:(id)arg4 auxillaryRangeIndexerDict:(id)arg5 ;
-(_UIOrderedRangeIndexer *)itemRangeIndexer;
-(id)copyWithGeometryConverter:(id)arg1 ;
-(_UIRTree *)geometricIndexer;
-(NSArray *)bookmarks;
@end

