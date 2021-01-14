/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAsset:(PHAsset *)arg1 ;
-(id)info;
-(id)init;
-(PHAsset *)asset;
-(id)description;
-(void)setMasterFingerprint:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)assetIdentifier;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSString *)masterFingerprint;
-(id)initWithAssetIdentifier:(id)arg1 ;
-(id)initWithInfo:(id)arg1 delegate:(id)arg2 ;
-(void)checkIfAssetIsMissing;
-(void)setAssetLocalURL:(NSURL *)arg1 ;
-(NSURL *)assetLocalURL;
-(void)fetchAssetForce:(BOOL)arg1 ;
-(void)setAdjustedFingerprint:(NSString *)arg1 ;
-(NSString *)adjustedFingerprint;
-(void)reloadAsset;
@end

