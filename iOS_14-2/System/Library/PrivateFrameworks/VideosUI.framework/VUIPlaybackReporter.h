/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSMutableArray;

@interface VUIPlaybackReporter : NSObject {

	BOOL _enforceSinglePlaybackSession;
	NSMutableArray* _sessions;

}

@property (nonatomic,retain) NSMutableArray * sessions;                        //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,readonly) BOOL enforceSinglePlaybackSession;              //@synthesize enforceSinglePlaybackSession=_enforceSinglePlaybackSession - In the implementation block
-(id)init;
-(NSMutableArray *)sessions;
-(void)_registerObservers;
-(void)_removeObservers;
-(void)setSessions:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)_playerStateWillChange:(id)arg1 ;
-(void)_playerCurrentMediaItemWillChange:(id)arg1 ;
-(void)_logWithFormat:(id)arg1 ;
-(void)_handlePlaybackChangeForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3 reason:(id)arg4 ;
-(id)_sessionForPlayer:(id)arg1 ;
-(void)_endSession:(id)arg1 ;
-(BOOL)_isTransitionValidForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3 ;
-(BOOL)enforceSinglePlaybackSession;
-(void)_reportForSession:(id)arg1 state:(id)arg2 reason:(id)arg3 ;
-(void)_endSessions:(id)arg1 ;
-(id)_createSessionForPlayer:(id)arg1 ;
-(void)_beginSession:(id)arg1 ;
@end

