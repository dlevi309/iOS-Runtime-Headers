/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class NSNumber;

@interface CAMUserPreferenceOverrides : NSObject {

	NSNumber* _captureMode;
	NSNumber* _captureDevice;
	NSNumber* _videoConfiguration;
	NSNumber* _wantsQRCodes;
	NSNumber* _flashMode;
	NSNumber* _torchMode;
	NSNumber* _aspectRatioCrop;

}

@property (nonatomic,retain) NSNumber * captureMode;                     //@synthesize captureMode=_captureMode - In the implementation block
@property (nonatomic,retain) NSNumber * captureDevice;                   //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,retain) NSNumber * videoConfiguration;              //@synthesize videoConfiguration=_videoConfiguration - In the implementation block
@property (nonatomic,retain) NSNumber * wantsQRCodes;                    //@synthesize wantsQRCodes=_wantsQRCodes - In the implementation block
@property (nonatomic,retain) NSNumber * flashMode;                       //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,retain) NSNumber * torchMode;                       //@synthesize torchMode=_torchMode - In the implementation block
@property (nonatomic,retain) NSNumber * aspectRatioCrop;                 //@synthesize aspectRatioCrop=_aspectRatioCrop - In the implementation block
@property (nonatomic,readonly) BOOL hasOverrides; 
-(void)setFlashMode:(NSNumber *)arg1 ;
-(NSNumber *)flashMode;
-(void)setTorchMode:(NSNumber *)arg1 ;
-(NSNumber *)captureDevice;
-(NSNumber *)captureMode;
-(id)initWithLaunchOptions:(id)arg1 ;
-(NSNumber *)torchMode;
-(void)setAspectRatioCrop:(NSNumber *)arg1 ;
-(NSNumber *)videoConfiguration;
-(void)setCaptureDevice:(NSNumber *)arg1 ;
-(void)setCaptureMode:(NSNumber *)arg1 ;
-(NSNumber *)aspectRatioCrop;
-(BOOL)hasOverrides;
-(NSNumber *)wantsQRCodes;
-(void)setVideoConfiguration:(NSNumber *)arg1 ;
-(id)initWithOverrides:(id)arg1 ;
-(void)setWantsQRCodes:(NSNumber *)arg1 ;
-(id)initWithShortcutItem:(id)arg1 ;
-(id)initWithConfigurationURL:(id)arg1 ;
@end

