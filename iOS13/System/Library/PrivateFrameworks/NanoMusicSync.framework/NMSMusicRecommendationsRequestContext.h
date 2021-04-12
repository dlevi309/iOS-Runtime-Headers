/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSMutableOrderedSet, NSMapTable, MPModelForYouRecommendationsResponse, MPModelResponse, NSArray, NSSet, NMSMutableMediaSyncInfo, NSOrderedSet;

@interface NMSMusicRecommendationsRequestContext : NSObject {

	NSMutableOrderedSet* _heavyRotationModelObjects;
	NSMutableOrderedSet* _personalMixesModelObjects;
	NSMapTable* _modelObjectSectionMap;
	MPModelForYouRecommendationsResponse* _forYouResponse;
	MPModelResponse* _lookupResponse;
	NSArray* _importedObjects;

}

@property (nonatomic,retain) MPModelForYouRecommendationsResponse * forYouResponse;                       //@synthesize forYouResponse=_forYouResponse - In the implementation block
@property (nonatomic,retain) MPModelResponse * lookupResponse;                                            //@synthesize lookupResponse=_lookupResponse - In the implementation block
@property (nonatomic,retain) NSArray * importedObjects;                                                   //@synthesize importedObjects=_importedObjects - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfHeavyRotationModelObjects; 
@property (nonatomic,readonly) unsigned long long minimumNumberOfHeavyRotationModelObjects; 
@property (nonatomic,readonly) NSSet * modelObjects; 
@property (nonatomic,readonly) NMSMutableMediaSyncInfo * importedStoreContainerItemMappings; 
@property (nonatomic,readonly) NSOrderedSet * recommendations; 
-(NSSet *)modelObjects;
-(NSOrderedSet *)recommendations;
-(void)setForYouResponse:(MPModelForYouRecommendationsResponse *)arg1 ;
-(void)setLookupResponse:(MPModelResponse *)arg1 ;
-(MPModelResponse *)lookupResponse;
-(void)setImportedObjects:(NSArray *)arg1 ;
-(MPModelForYouRecommendationsResponse *)forYouResponse;
-(NMSMutableMediaSyncInfo *)importedStoreContainerItemMappings;
-(void)_processResponsesIfNeeded;
-(unsigned long long)numberOfHeavyRotationModelObjects;
-(unsigned long long)minimumNumberOfHeavyRotationModelObjects;
-(NSArray *)importedObjects;
@end

