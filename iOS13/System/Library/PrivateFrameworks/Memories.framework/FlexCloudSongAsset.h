/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/FMSongAsset.h>

@class FlexCloudManager;

@interface FlexCloudSongAsset : FMSongAsset {

	FlexCloudManager* _cloudManager;

}

@property (readonly) FlexCloudManager * cloudManager;              //@synthesize cloudManager=_cloudManager - In the implementation block
-(void)cancelDownload;
-(unsigned long long)assetStatus;
-(void)requestDownload;
-(long long)contentVersionForAssetLocation:(unsigned long long)arg1 ;
-(BOOL)contentUpdateAvaliable;
-(void)purgeLocalCache;
-(void)requestDownloadWithOptions:(id)arg1 ;
-(id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 cloudManager:(id)arg4 contentVersion:(long long)arg5 compatibilityVersion:(long long)arg6 ;
-(FlexCloudManager *)cloudManager;
-(long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1 ;
-(BOOL)isCloudBacked;
@end

