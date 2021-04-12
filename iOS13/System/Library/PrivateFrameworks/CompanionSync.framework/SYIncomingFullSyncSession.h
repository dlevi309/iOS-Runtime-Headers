/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/SYSession.h>

@protocol OS_os_activity, OS_dispatch_source;
@class NSObject;

@interface SYIncomingFullSyncSession : SYSession {

	NSObject*<OS_os_activity> _sessionActivity;
	long long _state;
	NSObject*<OS_dispatch_source> _stateUpdateSource;
	BOOL canRestart;
	BOOL canRollback;

}

@property (nonatomic,readonly) NSObject*<OS_os_activity> sessionActivity;              //@synthesize sessionActivity=_sessionActivity - In the implementation block
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(unsigned long long)protocolVersion;
-(id)initWithService:(id)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(NSObject*<OS_os_activity>)sessionActivity;
-(void)_sendEndSessionResponse:(id)arg1 ;
-(void)_continueProcessing;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_setStateQuietly:(long long)arg1 ;
-(void)_sessionComplete;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_handleBatchChunk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleEndSync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_notifyErrorAndShutdown;
-(void)_sessionEnded;
-(void)_cancelSession;
@end

