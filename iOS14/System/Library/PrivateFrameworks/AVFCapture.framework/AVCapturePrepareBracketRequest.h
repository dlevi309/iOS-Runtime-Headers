/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@class FigCaptureStillImageSettings;

@interface AVCapturePrepareBracketRequest : NSObject {

	/*^block*/id _completionBlock;
	FigCaptureStillImageSettings* _settings;

}

@property (readonly) FigCaptureStillImageSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (readonly) id completionBlock;                                   //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)prepareBracketRequestWithCompletionBlock:(/*^block*/id)arg1 settings:(id)arg2 ;
-(id)completionBlock;
-(FigCaptureStillImageSettings *)settings;
-(id)_initWithCompletionBlock:(/*^block*/id)arg1 settings:(id)arg2 ;
-(void)dealloc;
@end

