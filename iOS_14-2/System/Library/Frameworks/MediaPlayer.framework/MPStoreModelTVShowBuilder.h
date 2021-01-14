/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPStoreModelStoreAssetBuilder, MPPropertySet;

@interface MPStoreModelTVShowBuilder : MPStoreModelObjectBuilder {

	MPStoreModelStoreAssetBuilder* _storeAssetBuilder;
	MPPropertySet* _storeAssetProperties;
	SCD_Struct_MP15 _requestedTVShowProperties;

}
+(id)allSupportedProperties;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3 ;
@end

