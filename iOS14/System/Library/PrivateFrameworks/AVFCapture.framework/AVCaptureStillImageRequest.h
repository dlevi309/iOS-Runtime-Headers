/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@class AVCaptureBracketedStillImageSettings;

@interface AVCaptureStillImageRequest : NSObject {

	/*^block*/id _sbufCompletionBlock;
	/*^block*/id _iosurfaceCompletionBlock;
	/*^block*/id _bracketedCaptureCompletionBlock;
	long long _settingsID;
	unsigned _shutterSoundID;
	AVCaptureBracketedStillImageSettings* _bracketedSettings;

}

@property (copy) id sbufCompletionBlock;                                                  //@synthesize sbufCompletionBlock=_sbufCompletionBlock - In the implementation block
@property (copy) id iosurfaceCompletionBlock;                                             //@synthesize iosurfaceCompletionBlock=_iosurfaceCompletionBlock - In the implementation block
@property (copy) id bracketedCaptureCompletionBlock;                                      //@synthesize bracketedCaptureCompletionBlock=_bracketedCaptureCompletionBlock - In the implementation block
@property (assign) long long settingsID;                                                  //@synthesize settingsID=_settingsID - In the implementation block
@property (assign) unsigned shutterSoundID;                                               //@synthesize shutterSoundID=_shutterSoundID - In the implementation block
@property (retain) AVCaptureBracketedStillImageSettings * bracketedSettings;              //@synthesize bracketedSettings=_bracketedSettings - In the implementation block
+(id)request;
-(void)setSettingsID:(long long)arg1 ;
-(id)sbufCompletionBlock;
-(void)setSbufCompletionBlock:(id)arg1 ;
-(id)iosurfaceCompletionBlock;
-(void)setIosurfaceCompletionBlock:(id)arg1 ;
-(id)bracketedCaptureCompletionBlock;
-(void)setBracketedCaptureCompletionBlock:(id)arg1 ;
-(unsigned)shutterSoundID;
-(void)setShutterSoundID:(unsigned)arg1 ;
-(void)setBracketedSettings:(AVCaptureBracketedStillImageSettings *)arg1 ;
-(long long)settingsID;
-(AVCaptureBracketedStillImageSettings *)bracketedSettings;
-(void)dealloc;
@end

