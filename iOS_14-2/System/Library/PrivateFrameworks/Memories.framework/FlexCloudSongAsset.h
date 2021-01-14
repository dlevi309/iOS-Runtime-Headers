/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/FMSongAsset.h>

@class FlexCloudManager;

@interface FlexCloudSongAsset : FMSongAsset {

	FlexCloudManager* _cloudManager;

}

@property (__weak,readonly) FlexCloudManager * cloudManager;              //@synthesize cloudManager=_cloudManager - In the implementation block
-(void)cancelDownload;
-(unsigned long long)assetStatus;
-(void)requestDownload;
-(long long)contentVersionForAssetLocation:(unsigned long long)arg1 ;
-(BOOL)contentUpdateAvaliable;
-(void)purgeLocalCache;
-(id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 cloudManager:(id)arg4 contentVersion:(long long)arg5 compatibilityVersion:(long long)arg6 ;
-(FlexCloudManager *)cloudManager;
-(long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1 ;
-(BOOL)isCloudBacked;
-(void)requestDownloadWithOptions:(id)arg1 ;
@end

