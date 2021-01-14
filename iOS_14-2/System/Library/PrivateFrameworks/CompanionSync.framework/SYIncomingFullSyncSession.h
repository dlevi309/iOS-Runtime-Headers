/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/SYSession.h>

@protocol OS_os_activity, OS_dispatch_source;
@class NSObject;

@interface SYIncomingFullSyncSession : SYSession {

	NSObject*<OS_os_activity> _sessionActivity;
	unsigned _state;
	NSObject*<OS_dispatch_source> _stateUpdateSource;
	BOOL canRestart;
	BOOL canRollback;

}

@property (nonatomic,readonly) NSObject*<OS_os_activity> sessionActivity;              //@synthesize sessionActivity=_sessionActivity - In the implementation block
-(void)start:(/*^block*/id)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(unsigned long long)protocolVersion;
-(id)initWithService:(id)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(unsigned)state;
-(BOOL)isSending;
-(BOOL)isResetSync;
-(NSObject*<OS_os_activity>)sessionActivity;
-(void)_sendEndSessionResponse:(id)arg1 ;
-(void)_continueProcessing;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_setStateQuietly:(unsigned)arg1 ;
-(void)_sessionComplete;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_handleBatchChunk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleEndSync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_notifyErrorAndShutdown;
-(void)_sessionEnded;
-(void)_cancelSession;
@end

