/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXVideoAdStateProviding <NSObject>
@property (setter=onPlay:,nonatomic,copy) id onPlayBlock; 
@property (setter=onPause:,nonatomic,copy) id onPauseBlock; 
@property (setter=onResume:,nonatomic,copy) id onResumeBlock; 
@property (setter=onFail:,nonatomic,copy) id onFailBlock; 
@property (setter=onFinish:,nonatomic,copy) id onFinishBlock; 
@property (setter=onLearnMore:,nonatomic,copy) id onLearnMoreBlock; 
@property (setter=onSkip:,nonatomic,copy) id onSkipBlock; 
@required
-(void)onPlay:(/*^block*/id)arg1;
-(void)onFail:(/*^block*/id)arg1;
-(void)onSkip:(/*^block*/id)arg1;
-(void)onPause:(/*^block*/id)arg1;
-(id)onPauseBlock;
-(id)onFinishBlock;
-(id)onFailBlock;
-(id)onSkipBlock;
-(id)onLearnMoreBlock;
-(id)onPlayBlock;
-(id)onResumeBlock;
-(void)onResume:(/*^block*/id)arg1;
-(void)onFinish:(/*^block*/id)arg1;
-(void)onLearnMore:(/*^block*/id)arg1;

@end

