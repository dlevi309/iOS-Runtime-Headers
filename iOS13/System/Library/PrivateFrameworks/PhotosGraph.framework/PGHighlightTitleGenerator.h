/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGEventEnrichment;
@class PHAssetCollection, PHAsset, PGTitleTuple;

@interface PGHighlightTitleGenerator : NSObject {

	BOOL _createVerboseTitle;
	id<PGEventEnrichment> _collection;
	PHAssetCollection* _curatedAssetCollection;
	PHAsset* _keyAsset;
	PGTitleTuple* _titleTuple;

}

@property (nonatomic,retain) id<PGEventEnrichment> collection;                        //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) PHAssetCollection * curatedAssetCollection;              //@synthesize curatedAssetCollection=_curatedAssetCollection - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                                      //@synthesize keyAsset=_keyAsset - In the implementation block
@property (assign,nonatomic) BOOL createVerboseTitle;                                 //@synthesize createVerboseTitle=_createVerboseTitle - In the implementation block
@property (nonatomic,retain) PGTitleTuple * titleTuple;                               //@synthesize titleTuple=_titleTuple - In the implementation block
+(BOOL)collectionContainsAppleEvent:(id)arg1 ;
+(id)commonMeaningLabelForTitleUsingMomentNodes:(id)arg1 ;
+(id)meaningLabelsSortedByPriority;
-(id<PGEventEnrichment>)collection;
-(PHAsset *)keyAsset;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(void)setCollection:(id<PGEventEnrichment>)arg1 ;
-(PHAssetCollection *)curatedAssetCollection;
-(id)initWithCollection:(id)arg1 curatedAssetCollection:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(BOOL)arg4 ;
-(PGTitleTuple *)titleTuple;
-(void)_generateTitleTuples;
-(void)setCuratedAssetCollection:(PHAssetCollection *)arg1 ;
-(void)setTitleTuple:(PGTitleTuple *)arg1 ;
-(BOOL)createVerboseTitle;
-(void)setCreateVerboseTitle:(BOOL)arg1 ;
@end

