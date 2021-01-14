/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (setter=onPlay:,nonatomic,copy) id onPlayBlock; 
@property (setter=onPause:,nonatomic,copy) id onPauseBlock; 
@property (setter=onResume:,nonatomic,copy) id onResumeBlock; 
@property (setter=onFail:,nonatomic,copy) id onFailBlock; 
@property (setter=onFinish:,nonatomic,copy) id onFinishBlock; 
@property (setter=onLearnMore:,nonatomic,copy) id onLearnMoreBlock; 
@property (setter=onSkip:,nonatomic,copy) id onSkipBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finish;
-(id)init;
-(void)pause;
-(void)learnMore;
-(void)play;
-(void)skip;
-(NFStateMachine *)stateMachine;
-(void)onPlay:(/*^block*/id)arg1 ;
-(void)onFail:(/*^block*/id)arg1 ;
-(void)onSkip:(/*^block*/id)arg1 ;
-(void)onPause:(/*^block*/id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)resume;
-(id)onPauseBlock;
-(id)onFinishBlock;
-(id)onFailBlock;
-(id)onSkipBlock;
-(id)onLearnMoreBlock;
-(id)onPlayBlock;
-(id)onResumeBlock;
-(void)onResume:(/*^block*/id)arg1 ;
-(void)onFinish:(/*^block*/id)arg1 ;
-(void)onLearnMore:(/*^block*/id)arg1 ;
@end

