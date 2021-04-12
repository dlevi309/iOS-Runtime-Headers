/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class CFXClip, NSURL, NSData;

@interface CFXMediaItem : NSObject {

	BOOL _initializedWithoutSettingAllProperties;
	BOOL _adjustmentsDataWasSet;
	CFXClip* _clip;
	NSURL* _adjustedAssetURL;
	NSURL* _originalAssetURL;
	long long _type;
	long long _cameraMode;
	NSURL* _metadataURL;
	long long _cameraPosition;

}

@property (assign,nonatomic) BOOL initializedWithoutSettingAllProperties;              //@synthesize initializedWithoutSettingAllProperties=_initializedWithoutSettingAllProperties - In the implementation block
@property (assign,nonatomic) BOOL adjustmentsDataWasSet;                               //@synthesize adjustmentsDataWasSet=_adjustmentsDataWasSet - In the implementation block
@property (nonatomic,readonly) long long cameraMode;                                   //@synthesize cameraMode=_cameraMode - In the implementation block
@property (nonatomic,readonly) NSURL * metadataURL;                                    //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,readonly) long long cameraPosition;                               //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,readonly) CFXClip * clip;                                         //@synthesize clip=_clip - In the implementation block
@property (nonatomic,copy) NSData * adjustmentsData; 
@property (nonatomic,copy) NSURL * adjustedAssetURL;                                   //@synthesize adjustedAssetURL=_adjustedAssetURL - In the implementation block
@property (nonatomic,copy) NSURL * originalAssetURL;                                   //@synthesize originalAssetURL=_originalAssetURL - In the implementation block
@property (assign,nonatomic) long long type;                                           //@synthesize type=_type - In the implementation block
-(CFXClip *)clip;
-(long long)cameraPosition;
-(id)init;
-(NSURL *)metadataURL;
-(void)setType:(long long)arg1 ;
-(NSData *)adjustmentsData;
-(void)setAdjustmentsData:(NSData *)arg1 ;
-(long long)type;
-(void)setOriginalAssetURL:(NSURL *)arg1 ;
-(NSURL *)originalAssetURL;
-(long long)cameraMode;
-(NSURL *)adjustedAssetURL;
-(void)setAdjustedAssetURL:(NSURL *)arg1 ;
-(void)CFX_updateCameraPositionForPhotoType;
-(void)setAdjustmentsDataWasSet:(BOOL)arg1 ;
-(void)createClipForMediaType:(long long)arg1 assetURL:(id)arg2 cameraMode:(long long)arg3 effectStack:(id)arg4 ;
-(BOOL)initializedWithoutSettingAllProperties;
-(BOOL)adjustmentsDataWasSet;
-(id)initWithCameraMode:(long long)arg1 clip:(id)arg2 assetMediaURL:(id)arg3 assetMetadataURL:(id)arg4 cameraPosition:(long long)arg5 ;
-(id)initWithType:(long long)arg1 originalAssetURL:(id)arg2 adjustmentsData:(id)arg3 ;
-(void)setInitializedWithoutSettingAllProperties:(BOOL)arg1 ;
@end

