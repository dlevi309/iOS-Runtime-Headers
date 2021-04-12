/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/SYIncomingFullSyncSession.h>

@class NSMutableArray;

@interface SYIncomingSyncAllObjectsSession : SYIncomingFullSyncSession {

	NSMutableArray* _allObjectsAsData;
	/*^block*/id _completion;
	BOOL canRestart;
	BOOL canRollback;

}
-(id)initWithService:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendEndSessionResponse:(id)arg1 ;
-(void)_continueProcessing;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
@end

