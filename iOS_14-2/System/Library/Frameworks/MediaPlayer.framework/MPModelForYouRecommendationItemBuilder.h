/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelStoreBrowseContentItemBuilder, MPModelForYouRecommendationGroupBuilder, MPPropertySet, NSDictionary, MPMutableSectionedCollection;

@interface MPModelForYouRecommendationItemBuilder : NSObject {

	SCD_Struct_MP64 _requestedItemProperties;
	MPModelStoreBrowseContentItemBuilder* _contentItemBuilder;
	MPModelForYouRecommendationGroupBuilder* _subgroupBuilder;
	MPPropertySet* _requestedPropertySet;
	NSDictionary* _storeItemMetadataResults;
	MPMutableSectionedCollection* _flatSectionedItems;

}

@property (nonatomic,readonly) MPPropertySet * requestedPropertySet;                           //@synthesize requestedPropertySet=_requestedPropertySet - In the implementation block
@property (nonatomic,readonly) NSDictionary * storeItemMetadataResults;                        //@synthesize storeItemMetadataResults=_storeItemMetadataResults - In the implementation block
@property (nonatomic,readonly) MPMutableSectionedCollection * flatSectionedItems;              //@synthesize flatSectionedItems=_flatSectionedItems - In the implementation block
+(id)allSupportedProperties;
-(id)modelObjectForRecommendationChildDictionary:(id)arg1 parentGroup:(id)arg2 subgroupsAccumulator:(id)arg3 userIdentity:(id)arg4 ;
-(id)initWithRequestedPropertySet:(id)arg1 storeItemMetadataResults:(id)arg2 flatSectionedItems:(id)arg3 ;
-(MPPropertySet *)requestedPropertySet;
-(MPMutableSectionedCollection *)flatSectionedItems;
-(NSDictionary *)storeItemMetadataResults;
@end

