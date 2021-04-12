/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPModelForYouRecommendationMusicKitItemBuilder, NSDateFormatter, NSDictionary, MPPropertySet, MPMutableSectionedCollection;

@interface MPModelForYouRecommendationMusicKitGroupBuilder : NSObject {

	SCD_Struct_MP57 _requestedGroupProperties;
	MPModelForYouRecommendationMusicKitItemBuilder* _itemBuilder;
	NSDateFormatter* _lastUpdatedDateFormatter;
	NSDictionary* _storeBagDictionary;
	MPPropertySet* _requestedGroupPropertySet;
	MPPropertySet* _requestedItemPropertySet;
	NSDictionary* _storeItemMetadataResults;
	MPMutableSectionedCollection* _flatSectionedItems;

}

@property (nonatomic,readonly) MPPropertySet * requestedGroupPropertySet;                      //@synthesize requestedGroupPropertySet=_requestedGroupPropertySet - In the implementation block
@property (nonatomic,readonly) MPPropertySet * requestedItemPropertySet;                       //@synthesize requestedItemPropertySet=_requestedItemPropertySet - In the implementation block
@property (nonatomic,readonly) NSDictionary * storeItemMetadataResults;                        //@synthesize storeItemMetadataResults=_storeItemMetadataResults - In the implementation block
@property (nonatomic,readonly) MPMutableSectionedCollection * flatSectionedItems;              //@synthesize flatSectionedItems=_flatSectionedItems - In the implementation block
+(id)allSupportedItemProperties;
+(id)allSupportedGroupProperties;
-(id)initWithRequestedGroupPropertySet:(id)arg1 requestedItemPropertySet:(id)arg2 storeItemMetadataResults:(id)arg3 flatSectionedItems:(id)arg4 storeBagDictionary:(id)arg5 ;
-(void)initializeRequestedGroupProperties;
-(id)modelObjectForRecentlyPlayedArray:(id)arg1 userIdentity:(id)arg2 ;
-(id)modelObjectForRecommendationDictionary:(id)arg1 userIdentity:(id)arg2 ;
-(MPPropertySet *)requestedGroupPropertySet;
-(MPPropertySet *)requestedItemPropertySet;
-(NSDictionary *)storeItemMetadataResults;
-(MPMutableSectionedCollection *)flatSectionedItems;
@end

