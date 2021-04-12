/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@class SiriTestingContext;

@interface SASTestingInputController : NSObject {

	SiriTestingContext* _preloadedTestingInput;

}

@property (nonatomic,readonly) SiriTestingContext * preloadedTestingInput;              //@synthesize preloadedTestingInput=_preloadedTestingInput - In the implementation block
-(id)init;
-(void)dealloc;
-(id)dequeuePreloadedTestingContext;
-(void)_registerForTestingNotifications;
-(void)_testingStringsDidChange:(id)arg1 ;
-(void)_testingAudioInputPathsDidChange:(id)arg1 ;
-(SiriTestingContext *)preloadedTestingInput;
@end

