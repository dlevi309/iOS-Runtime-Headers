/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/SYIncomingFullSyncSession.h>

@protocol OS_dispatch_source;
@class NSObject, NSMutableIndexSet, NSMutableArray;

@interface SYIncomingBatchSyncSession : SYIncomingFullSyncSession {

	NSObject*<OS_dispatch_source> _sessionTimer;
	NSMutableIndexSet* _receivedBatchIndices;
	BOOL _hasReceivedEndSync;
	/*^block*/id _completion;
	os_unfair_lock_s _queueLock;
	NSMutableArray* _incomingBatchQueue;
	BOOL canRestart;
	BOOL canRollback;

}
-(id)initWithService:(id)arg1 ;
-(void)_sendEndSessionResponse:(id)arg1 ;
-(void)_continueProcessing;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_handleBatchChunk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleEndSync:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

