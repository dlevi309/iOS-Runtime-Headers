/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPStoreModelPlaybackPositionBuilder, MPPropertySet, MPStoreModelStoreAssetBuilder;

@interface MPModelStorePlatformMetadataGenericObjectBuilder : NSObject {

	MPStoreModelPlaybackPositionBuilder* _playbackPositionBuilder;
	MPPropertySet* _storeAssetProperties;
	MPStoreModelStoreAssetBuilder* _storeAssetBuilder;
	SCD_Struct_MP74 _requestedSongProperties;
	MPPropertySet* _requestedProperties;

}

@property (nonatomic,copy,readonly) MPPropertySet * requestedProperties;              //@synthesize requestedProperties=_requestedProperties - In the implementation block
-(id)initWithRequestedProperties:(id)arg1 ;
-(id)genericObjectForStorePlatformMetadata:(id)arg1 userIdentity:(id)arg2 ;
-(MPPropertySet *)requestedProperties;
@end

