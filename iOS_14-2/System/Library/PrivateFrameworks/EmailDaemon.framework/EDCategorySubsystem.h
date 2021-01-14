/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EDInteractionLogger, EDPETInteractionEventLog, EDDifferentialPrivacyReporter;

@interface EDCategorySubsystem : NSObject {

	EDInteractionLogger* _interactionLogger;
	EDPETInteractionEventLog* _petLog;
	EDDifferentialPrivacyReporter* _differentialPrivacyReporter;

}

@property (nonatomic,readonly) EDPETInteractionEventLog * petLog;                                        //@synthesize petLog=_petLog - In the implementation block
@property (nonatomic,readonly) EDDifferentialPrivacyReporter * differentialPrivacyReporter;              //@synthesize differentialPrivacyReporter=_differentialPrivacyReporter - In the implementation block
@property (nonatomic,readonly) EDInteractionLogger * interactionLogger;                                  //@synthesize interactionLogger=_interactionLogger - In the implementation block
-(EDInteractionLogger *)interactionLogger;
-(void)scheduleRecurringActivity;
-(EDPETInteractionEventLog *)petLog;
-(void)_schedulePETSubmissionActivityForLog:(id)arg1 ;
-(id)initWithPersistence:(id)arg1 userProfileProvider:(id)arg2 vipManager:(id)arg3 sourceApplicationBundleIdentifier:(id)arg4 ;
-(EDDifferentialPrivacyReporter *)differentialPrivacyReporter;
@end

