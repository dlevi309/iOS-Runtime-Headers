/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class FigCaptureStillImageSettings;

@interface AVCapturePrepareBracketRequest : NSObject {

	/*^block*/id _completionBlock;
	FigCaptureStillImageSettings* _settings;

}

@property (readonly) FigCaptureStillImageSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (readonly) id completionBlock;                                   //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)prepareBracketRequestWithCompletionBlock:(/*^block*/id)arg1 settings:(id)arg2 ;
-(void)dealloc;
-(id)completionBlock;
-(FigCaptureStillImageSettings *)settings;
-(id)_initWithCompletionBlock:(/*^block*/id)arg1 settings:(id)arg2 ;
@end

