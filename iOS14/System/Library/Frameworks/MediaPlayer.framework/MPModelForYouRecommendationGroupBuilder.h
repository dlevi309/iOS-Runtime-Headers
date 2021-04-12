/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelForYouRecommendationItemBuilder, NSDateFormatter, MPPropertySet, NSDictionary, MPMutableSectionedCollection;

@interface MPModelForYouRecommendationGroupBuilder : NSObject {

	SCD_Struct_MP64 _requestedGroupProperties;
	MPModelForYouRecommendationItemBuilder* _itemBuilder;
	NSDateFormatter* _lastUpdatedDateFormatter;
	MPPropertySet* _requestedGroupPropertySet;
	MPPropertySet* _requestedItemPropertySet;
	NSDictionary* _storeItemMetadataResults;
	MPMutableSectionedCollection* _flatSectionedItems;

}

@property (nonatomic,readonly) MPPropertySet * requestedGroupPropertySet;                      //@synthesize requestedGroupPropertySet=_requestedGroupPropertySet - In the implementation block
@property (nonatomic,readonly) MPPropertySet * requestedItemPropertySet;                       //@synthesize requestedItemPropertySet=_requestedItemPropertySet - In the implementation block
@property (nonatomic,readonly) NSDictionary * storeItemMetadataResults;                        //@synthesize storeItemMetadataResults=_storeItemMetadataResults - In the implementation block
@property (nonatomic,readonly) MPMutableSectionedCollection * flatSectionedItems;              //@synthesize flatSectionedItems=_flatSectionedItems - In the implementation block
+(id)allSupportedGroupProperties;
+(id)allSupportedItemProperties;
-(id)initWithRequestedGroupPropertySet:(id)arg1 requestedItemPropertySet:(id)arg2 storeItemMetadataResults:(id)arg3 flatSectionedItems:(id)arg4 ;
-(MPPropertySet *)requestedGroupPropertySet;
-(id)modelObjectForRecommendationDictionary:(id)arg1 userIdentity:(id)arg2 ;
-(MPPropertySet *)requestedItemPropertySet;
-(MPMutableSectionedCollection *)flatSectionedItems;
-(NSDictionary *)storeItemMetadataResults;
@end

