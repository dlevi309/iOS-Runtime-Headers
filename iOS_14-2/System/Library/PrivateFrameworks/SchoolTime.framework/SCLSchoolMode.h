/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/SCLSchoolModeXPCClientDelegate.h>

@class SCLSchoolModeXPCClient, SCLSchoolModeConfiguration, NSString, SCLState, SCLScheduleSettings;

@interface SCLSchoolMode : NSObject <SCLSchoolModeXPCClientDelegate> {

	SCLSchoolModeXPCClient* _xpcClient;
	SCLSchoolModeConfiguration* _configuration;
	os_unfair_lock_s _lock;
	unsigned long long _resumeState;

}

@property (assign) unsigned long long resumeState;                                  //@synthesize resumeState=_resumeState - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,readonly) SCLState * state; 
@property (nonatomic,readonly) SCLScheduleSettings * scheduleSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)delegate;
-(void)dumpState;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(SCLState *)state;
-(NSString *)identifier;
-(BOOL)isLoaded;
-(id)initWithIdentifier:(id)arg1 ;
-(void)resume;
-(void)dealloc;
-(SCLScheduleSettings *)scheduleSettings;
-(void)setActive:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchRecentUnlockHistoryItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)addUnlockHistoryItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteHistoryWithCompletion:(/*^block*/id)arg1 ;
-(void)noteSignificantUserInteraction;
-(void)triggerRemoteSync;
-(void)client:(id)arg1 didUpdateToState:(id)arg2 fromState:(id)arg3 ;
-(void)client:(id)arg1 didLoadScheduleSettings:(id)arg2 ;
-(void)client:(id)arg1 didUpdateScheduleSettings:(id)arg2 ;
-(void)clientDidChangeUnlockHistory:(id)arg1 ;
-(void)applyScheduleSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 pairingID:(id)arg2 delegate:(id)arg3 ;
-(unsigned long long)resumeState;
-(void)setResumeState:(unsigned long long)arg1 ;
-(void)_assertQueueIfReady;
@end

