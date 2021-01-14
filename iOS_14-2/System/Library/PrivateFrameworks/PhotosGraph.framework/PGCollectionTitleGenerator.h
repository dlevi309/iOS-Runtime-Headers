/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGEventEnrichment;
@class PGTitleTuple, PHAsset, PHAssetCollection, NSSet;

@interface PGCollectionTitleGenerator : NSObject {

	BOOL _forDiagnostics;
	id<PGEventEnrichment> _collection;
	PGTitleTuple* _titleTuple;
	PHAsset* _keyAsset;
	PHAssetCollection* _curatedAssetCollection;
	NSSet* _whitelistedMeaningLabels;

}

@property (nonatomic,retain) id<PGEventEnrichment> collection;                        //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                                      //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) PHAssetCollection * curatedAssetCollection;              //@synthesize curatedAssetCollection=_curatedAssetCollection - In the implementation block
@property (nonatomic,retain) NSSet * whitelistedMeaningLabels;                        //@synthesize whitelistedMeaningLabels=_whitelistedMeaningLabels - In the implementation block
@property (nonatomic,retain) PGTitleTuple * titleTuple;                               //@synthesize titleTuple=_titleTuple - In the implementation block
@property (assign,nonatomic) BOOL forDiagnostics;                                     //@synthesize forDiagnostics=_forDiagnostics - In the implementation block
-(id<PGEventEnrichment>)collection;
-(PHAsset *)keyAsset;
-(void)setCollection:(id<PGEventEnrichment>)arg1 ;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(id)initWithCollection:(id)arg1 ;
-(PGTitleTuple *)titleTuple;
-(void)_generateTitleTuples;
-(PHAssetCollection *)curatedAssetCollection;
-(void)setCuratedAssetCollection:(PHAssetCollection *)arg1 ;
-(void)setTitleTuple:(PGTitleTuple *)arg1 ;
-(id)initWithCollection:(id)arg1 whitelistedMeaningLabels:(id)arg2 ;
-(id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 ;
-(id)_meaningLabelForTitle;
-(id)_sortedMeaningLabels;
-(BOOL)forDiagnostics;
-(void)setForDiagnostics:(BOOL)arg1 ;
-(NSSet *)whitelistedMeaningLabels;
-(void)setWhitelistedMeaningLabels:(NSSet *)arg1 ;
@end

