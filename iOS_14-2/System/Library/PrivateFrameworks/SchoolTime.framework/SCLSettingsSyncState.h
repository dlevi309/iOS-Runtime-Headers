/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/


@class SCLSettingsSyncStateMachine;

@interface SCLSettingsSyncState : NSObject {

	unsigned long long _status;
	SCLSettingsSyncStateMachine* _stateMachine;

}

@property (nonatomic,readonly) unsigned long long status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic,__weak) SCLSettingsSyncStateMachine * stateMachine;              //@synthesize stateMachine=_stateMachine - In the implementation block
-(void)willExitWithNextState:(id)arg1 ;
-(void)setStateMachine:(SCLSettingsSyncStateMachine *)arg1 ;
-(void)didEnterWithPreviousState:(id)arg1 ;
-(SCLSettingsSyncStateMachine *)stateMachine;
-(void)significantUserInteractionOccurred;
-(void)xpcActivityStarted;
-(id)initWithStateMachine:(id)arg1 ;
-(unsigned long long)status;
-(void)settingsDidChange;
-(void)commitSettings;
-(void)enqueueFailedWithError:(id)arg1 ;
-(void)didEnqueueMessage:(id)arg1 ;
-(void)message:(id)arg1 failedWithError:(id)arg2 ;
-(void)messageDidSend:(id)arg1 ;
-(void)messageWasDelivered:(id)arg1 ;
-(void)message:(id)arg1 didFailToAcknowledgeWithError:(id)arg2 ;
@end

