/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFUserAuthenticationModel.h>

@protocol OS_dispatch_queue, SBFUserAuthenticationModelDelegate;
@class MCProfileConnection, SBSecurityDefaults, NSString, NSObject, NSDictionary;

@interface SBFUserAuthenticationModelJournaledDefaults : NSObject <SBFUserAuthenticationModel> {

	MCProfileConnection* _profileConnection;
	SBSecurityDefaults* _securityDefaults;
	NSString* _journalPath;
	NSObject*<OS_dispatch_queue> _persistentStateQueue;
	BOOL _speculativePasscodeFailureChargeOutstanding;
	NSDictionary* _originalDefaultsForRollback;
	BOOL _pendingWipe;
	BOOL _permanentlyBlocked;
	double _unblockTime;
	id<SBFUserAuthenticationModelDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SBFUserAuthenticationModelDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (getter=isTemporarilyBlocked,nonatomic,readonly) BOOL temporarilyBlocked; 
@property (getter=isPermanentlyBlocked,nonatomic,readonly) BOOL permanentlyBlocked; 
@property (nonatomic,readonly) double timeUntilUnblockedSinceReferenceDate; 
+(id)_journaledDefaultsAndTypes;
-(id)init;
-(void)synchronize;
-(id<SBFUserAuthenticationModelDelegate>)delegate;
-(void)setDelegate:(id<SBFUserAuthenticationModelDelegate>)arg1 ;
-(void)notePasscodeEntryBegan;
-(void)notePasscodeEntryCancelled;
-(void)notePasscodeUnlockSucceeded;
-(void)notePasscodeUnlockFailedWithError:(id)arg1 ;
-(void)performPasswordTest:(/*^block*/id)arg1 ;
-(BOOL)isTemporarilyBlocked;
-(double)timeUntilUnblockedSinceReferenceDate;
-(BOOL)isPermanentlyBlocked;
-(void)clearBlockedState;
-(BOOL)_isDeviceWipePreferenceEnabled;
-(id)_initWithJournalPath:(id)arg1 securityDefaults:(id)arg2 profileConnection:(id)arg3 ;
-(void)_loadLockControllerDefaultsJournalIfNecessary;
-(void)_persistentStateQueue_loadLockState;
-(void)_persistentStateQueue_beginSpeculativeFailureCharge;
-(void)_persistentStateQueue_cancelSpeculativeFailureCharge;
-(void)_persistentStateQueue_unlockSucceeded;
-(void)_persistentStateQueue_unlockFailedWithError:(id)arg1 ;
-(void)_persistentStateQueue_clearBlockedState;
-(void)_evaluatePendingWipe;
-(void)_persistentStateQueue_evaluatePendingWipe;
-(id)updateLockControllerDefaultsWithBlock:(/*^block*/id)arg1 journaled:(BOOL)arg2 ;
-(void)_loadLockControllerDefaults:(id)arg1 ;
-(id)_copyLockControllerDefaults;
-(void)_updateLockControllerDefaultsJournal;
-(void)test_reloadState;
@end

