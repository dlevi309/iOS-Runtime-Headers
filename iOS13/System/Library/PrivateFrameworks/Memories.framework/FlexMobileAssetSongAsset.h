/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/FlexCloudSongAsset.h>

@class NSString;

@interface FlexMobileAssetSongAsset : FlexCloudSongAsset {

	NSString* _mobileAssetTypeIdentifier;
	NSString* _mobileAssetPropertyType;

}

@property (readonly) NSString * mobileAssetTypeIdentifier;              //@synthesize mobileAssetTypeIdentifier=_mobileAssetTypeIdentifier - In the implementation block
@property (readonly) NSString * mobileAssetPropertyType;                //@synthesize mobileAssetPropertyType=_mobileAssetPropertyType - In the implementation block
-(long long)contentVersionForAssetLocation:(unsigned long long)arg1 ;
-(BOOL)contentUpdateAvaliable;
-(long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1 ;
-(NSString *)mobileAssetPropertyType;
-(NSString *)mobileAssetTypeIdentifier;
-(id)_assetCachedMetadata;
-(id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 cloudManager:(id)arg4 mobileAssetTypeIdentifier:(id)arg5 mobileAssetPropertyType:(id)arg6 contentVersion:(long long)arg7 compatibilityVersion:(long long)arg8 ;
@end

