/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHFetchResult, NSArray, NSDictionary;

@interface PXPhotosDataSourceSectionCache : NSObject {

	PHFetchResult* _collectionListFetchResult;
	NSArray* _assetCollections;
	NSDictionary* _assetCollectionToSection;
	long long _estimatedPhotosCount;
	long long _estimatedVideosCount;
	long long _estimatedOtherCount;
	long long _numberOfEnrichmentStateNotEnrichedAssetCollections;
	long long _numberOfEnrichmentStateAssetMetadataOnlyAssetCollections;
	long long _numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections;
	long long _numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections;
	long long _numberOfEnrichmentStateCompleteAssetCollections;
	long long _estimatedAssetCountWithEnrichmentStateNotEnriched;
	long long _estimatedAssetCountWithEnrichmentStateAssetMetadataOnly;
	long long _estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore;
	long long _estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed;
	long long _estimatedAssetCountWithEnrichmentStateComplete;

}

@property (nonatomic,readonly) PHFetchResult * collectionListFetchResult;                                                     //@synthesize collectionListFetchResult=_collectionListFetchResult - In the implementation block
@property (nonatomic,readonly) NSArray * assetCollections;                                                                    //@synthesize assetCollections=_assetCollections - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetCollectionToSection;                                                       //@synthesize assetCollectionToSection=_assetCollectionToSection - In the implementation block
@property (nonatomic,readonly) long long estimatedPhotosCount;                                                                //@synthesize estimatedPhotosCount=_estimatedPhotosCount - In the implementation block
@property (nonatomic,readonly) long long estimatedVideosCount;                                                                //@synthesize estimatedVideosCount=_estimatedVideosCount - In the implementation block
@property (nonatomic,readonly) long long estimatedOtherCount;                                                                 //@synthesize estimatedOtherCount=_estimatedOtherCount - In the implementation block
@property (nonatomic,readonly) long long numberOfEnrichmentStateNotEnrichedAssetCollections;                                  //@synthesize numberOfEnrichmentStateNotEnrichedAssetCollections=_numberOfEnrichmentStateNotEnrichedAssetCollections - In the implementation block
@property (nonatomic,readonly) long long numberOfEnrichmentStateAssetMetadataOnlyAssetCollections;                            //@synthesize numberOfEnrichmentStateAssetMetadataOnlyAssetCollections=_numberOfEnrichmentStateAssetMetadataOnlyAssetCollections - In the implementation block
@property (nonatomic,readonly) long long numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections;                        //@synthesize numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections=_numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections - In the implementation block
@property (nonatomic,readonly) long long numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections;              //@synthesize numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections=_numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections - In the implementation block
@property (nonatomic,readonly) long long numberOfEnrichmentStateCompleteAssetCollections;                                     //@synthesize numberOfEnrichmentStateCompleteAssetCollections=_numberOfEnrichmentStateCompleteAssetCollections - In the implementation block
@property (nonatomic,readonly) long long estimatedAssetCountWithEnrichmentStateNotEnriched;                                   //@synthesize estimatedAssetCountWithEnrichmentStateNotEnriched=_estimatedAssetCountWithEnrichmentStateNotEnriched - In the implementation block
@property (nonatomic,readonly) long long estimatedAssetCountWithEnrichmentStateAssetMetadataOnly;                             //@synthesize estimatedAssetCountWithEnrichmentStateAssetMetadataOnly=_estimatedAssetCountWithEnrichmentStateAssetMetadataOnly - In the implementation block
@property (nonatomic,readonly) long long estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore;                         //@synthesize estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore=_estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore - In the implementation block
@property (nonatomic,readonly) long long estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed;               //@synthesize estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed=_estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed - In the implementation block
@property (nonatomic,readonly) long long estimatedAssetCountWithEnrichmentStateComplete;                                      //@synthesize estimatedAssetCountWithEnrichmentStateComplete=_estimatedAssetCountWithEnrichmentStateComplete - In the implementation block
-(NSDictionary *)assetCollectionToSection;
-(long long)estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore;
-(long long)estimatedVideosCount;
-(long long)numberOfEnrichmentStateAssetMetadataOnlyAssetCollections;
-(long long)numberOfEnrichmentStateCompleteAssetCollections;
-(long long)estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed;
-(long long)estimatedAssetCountWithEnrichmentStateNotEnriched;
-(id)initWithCollectionListFetchResult:(id)arg1 ;
-(NSArray *)assetCollections;
-(long long)estimatedAssetCountWithEnrichmentStateAssetMetadataOnly;
-(PHFetchResult *)collectionListFetchResult;
-(long long)numberOfEnrichmentStateNotEnrichedAssetCollections;
-(long long)numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections;
-(long long)numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections;
-(long long)estimatedAssetCountWithEnrichmentStateComplete;
-(long long)estimatedOtherCount;
-(long long)estimatedPhotosCount;
@end

