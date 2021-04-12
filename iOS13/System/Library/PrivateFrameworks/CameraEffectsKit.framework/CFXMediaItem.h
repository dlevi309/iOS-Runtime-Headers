/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class JTClip, NSURL, NSData;

@interface CFXMediaItem : NSObject {

	BOOL _initializedWithoutSettingAllProperties;
	BOOL _adjustmentsDataWasSet;
	JTClip* _clip;
	NSURL* _adjustedAssetURL;
	NSURL* _originalAssetURL;
	long long _type;
	long long _cameraMode;

}

@property (assign,nonatomic) BOOL initializedWithoutSettingAllProperties;              //@synthesize initializedWithoutSettingAllProperties=_initializedWithoutSettingAllProperties - In the implementation block
@property (assign,nonatomic) BOOL adjustmentsDataWasSet;                               //@synthesize adjustmentsDataWasSet=_adjustmentsDataWasSet - In the implementation block
@property (nonatomic,readonly) long long cameraMode;                                   //@synthesize cameraMode=_cameraMode - In the implementation block
@property (nonatomic,readonly) JTClip * clip;                                          //@synthesize clip=_clip - In the implementation block
@property (nonatomic,copy) NSData * adjustmentsData; 
@property (nonatomic,copy) NSURL * adjustedAssetURL;                                   //@synthesize adjustedAssetURL=_adjustedAssetURL - In the implementation block
@property (nonatomic,copy) NSURL * originalAssetURL;                                   //@synthesize originalAssetURL=_originalAssetURL - In the implementation block
@property (assign,nonatomic) long long type;                                           //@synthesize type=_type - In the implementation block
-(id)init;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(JTClip *)clip;
-(NSURL *)originalAssetURL;
-(void)setOriginalAssetURL:(NSURL *)arg1 ;
-(long long)cameraMode;
-(NSData *)adjustmentsData;
-(void)setAdjustmentsData:(NSData *)arg1 ;
-(NSURL *)adjustedAssetURL;
-(void)setAdjustedAssetURL:(NSURL *)arg1 ;
-(void)setAdjustmentsDataWasSet:(BOOL)arg1 ;
-(void)createClipForMediaType:(long long)arg1 assetURL:(id)arg2 cameraMode:(long long)arg3 effectStack:(id)arg4 ;
-(BOOL)initializedWithoutSettingAllProperties;
-(BOOL)adjustmentsDataWasSet;
-(id)initWithCameraMode:(long long)arg1 clip:(id)arg2 originalAssetURL:(id)arg3 ;
-(id)initWithType:(long long)arg1 originalAssetURL:(id)arg2 adjustmentsData:(id)arg3 ;
-(void)setInitializedWithoutSettingAllProperties:(BOOL)arg1 ;
@end

