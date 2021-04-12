/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelStoreBrowseContentItemBuilder, MPModelForYouRecommendationMusicKitGroupBuilder, NSDictionary, MPPropertySet, MPMutableSectionedCollection;

@interface MPModelForYouRecommendationMusicKitItemBuilder : NSObject {

	SCD_Struct_MP71 _requestedItemProperties;
	MPModelStoreBrowseContentItemBuilder* _contentItemBuilder;
	MPModelForYouRecommendationMusicKitGroupBuilder* _subgroupBuilder;
	NSDictionary* _storeBagDictionary;
	MPPropertySet* _requestedPropertySet;
	NSDictionary* _storeItemMetadataResults;
	MPMutableSectionedCollection* _flatSectionedItems;

}

@property (nonatomic,readonly) MPPropertySet * requestedPropertySet;                           //@synthesize requestedPropertySet=_requestedPropertySet - In the implementation block
@property (nonatomic,readonly) NSDictionary * storeItemMetadataResults;                        //@synthesize storeItemMetadataResults=_storeItemMetadataResults - In the implementation block
@property (nonatomic,readonly) MPMutableSectionedCollection * flatSectionedItems;              //@synthesize flatSectionedItems=_flatSectionedItems - In the implementation block
+(id)allSupportedProperties;
-(MPPropertySet *)requestedPropertySet;
-(NSDictionary *)storeItemMetadataResults;
-(MPMutableSectionedCollection *)flatSectionedItems;
-(id)initWithRequestedPropertySet:(id)arg1 storeItemMetadataResults:(id)arg2 flatSectionedItems:(id)arg3 storeBagDictionary:(id)arg4 ;
-(id)modelObjectForRecommendationChildDictionary:(id)arg1 parentGroup:(id)arg2 subgroupsAccumulator:(id)arg3 userIdentity:(id)arg4 ;
-(id)storeItemMetadataWithMusicAPIMetadataDictionary:(id)arg1 ;
-(id)convertToStoreItemMetadataDictionary:(id)arg1 ;
@end

