/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/SYSession.h>

@protocol OS_os_activity, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface SYOutgoingSyncAllObjectsSession : SYSession {

	NSObject*<OS_os_activity> _sessionActivity;
	long long _state;
	BOOL _errorIsLocal;
	NSObject*<OS_dispatch_source> _stateUpdateSource;
	NSObject*<OS_dispatch_source> _sessionTimer;
	double _sessionStartTime;
	NSMutableArray* _changesToSend;
	BOOL _cancelled;
	BOOL canRestart;
	BOOL canRollback;

}
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)wasCancelled;
-(unsigned long long)protocolVersion;
-(id)initWithService:(id)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(BOOL)isResetSync;
-(BOOL)isSending;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_setStateQuietly:(long long)arg1 ;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_installTimers;
-(double)remainingSessionTime;
-(BOOL)_handleBatchSyncEndResponse:(id)arg1 error:(id*)arg2 ;
-(void)_sendChanges;
-(void)_sessionCompleteWithError:(id)arg1 ;
-(void)_fetchChanges;
-(void)_sessionFailed;
@end

