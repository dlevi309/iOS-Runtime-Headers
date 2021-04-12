/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIPlaybackReporter.h>

@class WLKPlaybackReporter, VUIPostPlayConfig;

@interface VUIPlaybackReporterUTS : VUIPlaybackReporter {

	WLKPlaybackReporter* _reporter;
	VUIPostPlayConfig* _postPlayConfig;

}

@property (nonatomic,retain) WLKPlaybackReporter * reporter;                  //@synthesize reporter=_reporter - In the implementation block
@property (nonatomic,retain) VUIPostPlayConfig * postPlayConfig;              //@synthesize postPlayConfig=_postPlayConfig - In the implementation block
+(id)sharedInstance;
-(void)_endSession:(id)arg1 ;
-(WLKPlaybackReporter *)reporter;
-(void)setReporter:(WLKPlaybackReporter *)arg1 ;
-(BOOL)_isTransitionValidForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3 ;
-(BOOL)enforceSinglePlaybackSession;
-(void)_reportForSession:(id)arg1 state:(id)arg2 reason:(id)arg3 ;
-(id)_createSessionForPlayer:(id)arg1 ;
-(VUIPostPlayConfig *)postPlayConfig;
-(void)_reportForPlayer:(id)arg1 playerState:(id)arg2 completionState:(unsigned long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_reportLinearForPlayer:(id)arg1 playerState:(id)arg2 completionState:(unsigned long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_reportVODForPlayer:(id)arg1 playerState:(id)arg2 completionState:(unsigned long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(long long)_wlkPlaybackStateForState:(id)arg1 ;
-(id)_wlkPlaybackRateForState:(id)arg1 player:(id)arg2 ;
-(BOOL)_watchedTimeEnabled;
-(double)_completionFudgeFactor;
-(void)_reportSummary:(id)arg1 sessionID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reportForPlayer:(id)arg1 completionState:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setPostPlayConfig:(VUIPostPlayConfig *)arg1 ;
@end

