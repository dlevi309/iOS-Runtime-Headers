/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPStoreModelPlaybackPositionBuilder, MPPropertySet, MPStoreModelStoreAssetBuilder;

@interface MPModelStorePlatformMetadataGenericObjectBuilder : NSObject {

	MPStoreModelPlaybackPositionBuilder* _playbackPositionBuilder;
	MPPropertySet* _storeAssetProperties;
	MPStoreModelStoreAssetBuilder* _storeAssetBuilder;
	SCD_Struct_MP76 _requestedSongProperties;
	MPPropertySet* _requestedProperties;

}

@property (nonatomic,copy,readonly) MPPropertySet * requestedProperties;              //@synthesize requestedProperties=_requestedProperties - In the implementation block
-(id)initWithRequestedProperties:(id)arg1 ;
-(id)genericObjectForStorePlatformMetadata:(id)arg1 userIdentity:(id)arg2 ;
-(MPPropertySet *)requestedProperties;
@end

