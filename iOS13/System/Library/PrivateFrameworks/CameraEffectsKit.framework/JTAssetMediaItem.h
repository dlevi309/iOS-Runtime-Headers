/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTLocalAssetMediaItem.h>

@class PHAsset, NSString, NSURL;

@interface JTAssetMediaItem : JTLocalAssetMediaItem {

	PHAsset* _asset;
	NSString* _assetIdentifier;
	NSString* _masterFingerprint;
	NSString* _adjustedFingerprint;
	NSURL* _assetLocalURL;

}

@property (nonatomic,copy) NSString * assetIdentifier;                  //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,copy) NSString * masterFingerprint;                //@synthesize masterFingerprint=_masterFingerprint - In the implementation block
@property (nonatomic,copy) NSString * adjustedFingerprint;              //@synthesize adjustedFingerprint=_adjustedFingerprint - In the implementation block
@property (nonatomic,retain) PHAsset * asset;                           //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSURL * assetLocalURL;                     //@synthesize assetLocalURL=_assetLocalURL - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)info;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(void)cancelDownload;
-(void)setMasterFingerprint:(NSString *)arg1 ;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(NSString *)assetIdentifier;
-(NSString *)masterFingerprint;
-(id)initWithAssetIdentifier:(id)arg1 ;
-(id)initWithInfo:(id)arg1 delegate:(id)arg2 ;
-(NSURL *)assetLocalURL;
-(void)setAssetLocalURL:(NSURL *)arg1 ;
-(void)checkIfAssetIsMissing;
-(void)fetchAssetForce:(BOOL)arg1 ;
-(void)setAdjustedFingerprint:(NSString *)arg1 ;
-(NSString *)adjustedFingerprint;
-(void)downloadAssetsWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reloadAsset;
@end

