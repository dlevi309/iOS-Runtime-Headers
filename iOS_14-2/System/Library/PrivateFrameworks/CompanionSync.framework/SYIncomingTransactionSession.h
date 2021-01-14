/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/SYSession.h>

@protocol OS_os_activity;
@class NSObject, SYChangeMessage;

@interface SYIncomingTransactionSession : SYSession {

	NSObject*<OS_os_activity> _sessionActivity;
	SYChangeMessage* _message;
	/*^block*/id _completion;
	BOOL canRestart;
	BOOL canRollback;
	unsigned state;

}
-(void)start:(/*^block*/id)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(unsigned long long)protocolVersion;
-(void)setState:(unsigned)arg1 ;
-(BOOL)wasCancelled;
-(unsigned)state;
-(BOOL)isSending;
-(BOOL)isResetSync;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)didCompleteSession;
-(void)_sendComplete;
-(void)_sendChanges;
-(void)_sendCancelled;
-(id)initWithService:(id)arg1 transaction:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

