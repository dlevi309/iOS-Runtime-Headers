/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

