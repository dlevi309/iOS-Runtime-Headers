/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXVideoAdStateProviding.h>
#import <libobjc.A.dylib/SXVideoAdStateReporting.h>

@class NFStateMachine, NSString;

@interface SXVideoAdStateManager : NSObject <SXVideoAdStateProviding, SXVideoAdStateReporting> {

	/*^block*/id onPlayBlock;
	/*^block*/id onPauseBlock;
	/*^block*/id onResumeBlock;
	/*^block*/id onFinishBlock;
	/*^block*/id onFailBlock;
	/*^block*/id onLearnMoreBlock;
	/*^block*/id onSkipBlock;
	NFStateMachine* _stateMachine;

}

@property (nonatomic,readonly) NFStateMachine * stateMachine;                    //@synthesize stateMachine=_stateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onPlay:,nonatomic,copy) id onPlayBlock; 
@property (setter=onPause:,nonatomic,copy) id onPauseBlock; 
@property (setter=onResume:,nonatomic,copy) id onResumeBlock; 
@property (setter=onFail:,nonatomic,copy) id onFailBlock; 
@property (setter=onFinish:,nonatomic,copy) id onFinishBlock; 
@property (setter=onLearnMore:,nonatomic,copy) id onLearnMoreBlock; 
@property (setter=onSkip:,nonatomic,copy) id onSkipBlock; 
-(id)init;
-(void)failWithError:(id)arg1 ;
-(void)pause;
-(void)resume;
-(void)finish;
-(void)play;
-(NFStateMachine *)stateMachine;
-(void)learnMore;
-(void)onPlay:(/*^block*/id)arg1 ;
-(void)onPause:(/*^block*/id)arg1 ;
-(void)onResume:(/*^block*/id)arg1 ;
-(void)onFail:(/*^block*/id)arg1 ;
-(void)onFinish:(/*^block*/id)arg1 ;
-(void)onLearnMore:(/*^block*/id)arg1 ;
-(void)onSkip:(/*^block*/id)arg1 ;
-(void)skip;
-(id)onPauseBlock;
-(id)onFinishBlock;
-(id)onFailBlock;
-(id)onSkipBlock;
-(id)onLearnMoreBlock;
-(id)onPlayBlock;
-(id)onResumeBlock;
@end

