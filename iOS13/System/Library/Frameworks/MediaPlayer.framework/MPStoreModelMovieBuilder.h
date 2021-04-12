/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPStoreModelPlaybackPositionBuilder, MPStoreModelMovieMediaClipBuilder, MPStoreModelStoreAssetBuilder, MPPropertySet;

@interface MPStoreModelMovieBuilder : MPStoreModelObjectBuilder {

	MPStoreModelPlaybackPositionBuilder* _playbackPositionBuilder;
	MPStoreModelMovieMediaClipBuilder* _mediaClipBuilder;
	MPStoreModelStoreAssetBuilder* _storeAssetBuilder;
	MPPropertySet* _storeAssetProperties;
	SCD_Struct_MP81 _requestedMovieProperties;

}
+(id)allSupportedProperties;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3 ;
@end

