/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)flashMode;
-(void)setFlashMode:(NSNumber *)arg1 ;
-(NSNumber *)torchMode;
-(void)setTorchMode:(NSNumber *)arg1 ;
-(NSNumber *)captureDevice;
-(void)setCaptureDevice:(NSNumber *)arg1 ;
-(id)initWithLaunchOptions:(id)arg1 ;
-(void)setCaptureMode:(NSNumber *)arg1 ;
-(NSNumber *)videoConfiguration;
-(BOOL)hasOverrides;
-(NSNumber *)captureMode;
-(NSNumber *)wantsQRCodes;
-(NSNumber *)aspectRatioCrop;
-(void)setAspectRatioCrop:(NSNumber *)arg1 ;
-(void)setVideoConfiguration:(NSNumber *)arg1 ;
-(id)initWithOverrides:(id)arg1 ;
-(void)setWantsQRCodes:(NSNumber *)arg1 ;
-(id)initWithShortcutItem:(id)arg1 ;
-(id)initWithConfigurationURL:(id)arg1 ;
@end

