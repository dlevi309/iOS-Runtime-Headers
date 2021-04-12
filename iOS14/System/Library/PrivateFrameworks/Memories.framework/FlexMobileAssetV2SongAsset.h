/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/FlexCloudSongAsset.h>

@class MAAsset;

@interface FlexMobileAssetV2SongAsset : FlexCloudSongAsset {

	MAAsset* _mobileAsset;

}

@property (readonly) MAAsset * mobileAsset;              //@synthesize mobileAsset=_mobileAsset - In the implementation block
-(MAAsset *)mobileAsset;
-(unsigned long long)assetStatus;
-(long long)contentVersionForAssetLocation:(unsigned long long)arg1 ;
-(BOOL)contentUpdateAvaliable;
-(id)_metadataForAssetWithNewestContentVersion;
-(id)initWithAssetID:(id)arg1 asset:(id)arg2 localURL:(id)arg3 cloudManager:(id)arg4 contentVersion:(long long)arg5 compatibilityVersion:(long long)arg6 ;
-(long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1 ;
@end

