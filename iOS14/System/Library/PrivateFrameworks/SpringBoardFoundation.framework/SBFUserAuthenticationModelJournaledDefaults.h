/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic) id<SBFUserAuthenticationModelDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (getter=isTemporarilyBlocked,nonatomic,readonly) BOOL temporarilyBlocked; 
@property (getter=isPermanentlyBlocked,nonatomic,readonly) BOOL permanentlyBlocked; 
@property (nonatomic,readonly) double timeUntilUnblockedSinceReferenceDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_journaledDefaultsAndTypes;
-(id)init;
-(id<SBFUserAuthenticationModelDelegate>)delegate;
-(void)clearBlockedState;
-(double)timeUntilUnblockedSinceReferenceDate;
-(void)notePasscodeUnlockSucceeded;
-(void)setDelegate:(id<SBFUserAuthenticationModelDelegate>)arg1 ;
-(void)_loadLockControllerDefaultsJournalIfNecessary;
-(id)_initWithJournalPath:(id)arg1 securityDefaults:(id)arg2 profileConnection:(id)arg3 ;
-(void)_persistentStateQueue_loadLockState;
-(void)_persistentStateQueue_beginSpeculativeFailureCharge;
-(void)_persistentStateQueue_cancelSpeculativeFailureCharge;
-(void)_persistentStateQueue_unlockSucceeded;
-(void)_persistentStateQueue_unlockFailedWithError:(id)arg1 ;
-(void)_persistentStateQueue_clearBlockedState;
-(void)_evaluatePendingWipe;
-(void)notePasscodeEntryCancelled;
-(void)_persistentStateQueue_evaluatePendingWipe;
-(id)updateLockControllerDefaultsWithBlock:(/*^block*/id)arg1 journaled:(BOOL)arg2 ;
-(void)_loadLockControllerDefaults:(id)arg1 ;
-(void)synchronize;
-(id)_copyLockControllerDefaults;
-(void)_updateLockControllerDefaultsJournal;
-(void)test_reloadState;
-(void)notePasscodeEntryBegan;
-(void)performPasswordTest:(/*^block*/id)arg1 ;
-(void)notePasscodeUnlockFailedWithError:(id)arg1 ;
-(BOOL)isPermanentlyBlocked;
-(BOOL)_isDeviceWipePreferenceEnabled;
-(BOOL)isTemporarilyBlocked;
@end

