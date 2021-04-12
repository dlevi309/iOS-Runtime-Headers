/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/ExpertSystemHandlerCore.h>

@class ArbitratorExpertSystemState, NSArray, SystemSettingsRelay, AnalyticsWorkspace, DiagnosticCaseUsageAnalytics;

@interface ArbitratorExpertSystemHandler : ExpertSystemHandlerCore {

	ArbitratorExpertSystemState* currentState;
	NSArray* states;
	id flowAnalyticsObserver;
	SystemSettingsRelay* settingsRelay;
	unsigned administrativeState;
	AnalyticsWorkspace* arbitratorWorkspace;
	DiagnosticCaseUsageAnalytics* caseUsageSpace;
	BOOL _initializationComplete;
	BOOL _observingSetupAssistantFinished;
	id _foregroundStateObserver;
	unsigned long long _externalStepper;

}

@property (assign) unsigned long long externalStepper;              //@synthesize externalStepper=_externalStepper - In the implementation block
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
+(id)internalStateDictionary;
+(BOOL)disableResourceNotifyDampening;
+(void)setInitializeAsHelper:(BOOL)arg1 ;
+(void)resetAllForCustomerBuilds;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)resetAll;
-(void)_dumpState;
-(BOOL)noteSymptom:(id)arg1 ;
-(void)_administrativeDisable;
-(void)_administrativeEnable;
-(id)internalStateDictionary;
-(void)_completeInitialization:(BOOL)arg1 ;
-(void)_purgeDiagnosticCaseUsage;
-(BOOL)_initializeWorkspace;
-(void)_scheduleMaintenanceActivity;
-(void)handleResourceNotifyOfType:(unsigned long long)arg1 event:(id)arg2 ;
-(void)triggerABCSnapshotWithSignature:(id)arg1 events:(id)arg2 uuid:(id)arg3 ;
-(BOOL)shouldGenerateReportForSignature:(id)arg1 trigger:(unsigned long long)arg2 ;
-(id)_retrieveReportRecordForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 ;
-(void)recordReportForSignature:(id)arg1 aggregateReport:(id)arg2 specificReport:(id)arg3 ;
-(void)_removeAllReportRecords;
-(void)_saveReportRecord:(id)arg1 ;
-(id)_reportRecordKeyForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 ;
-(void)_addReportRecordWithKey:(id)arg1 count:(long long)arg2 lastSeen:(double)arg3 ;
-(long long)_removeAllDiagnosticCaseUsageFor:(id)arg1 ;
-(void)scheduleABCNotificationForCarrierSeedUser;
-(void)alertCarrierSeedUserAboutABC;
-(void)removeSetupAssistantFinishedObserver;
-(BOOL)_arbitratorReady;
-(void)resetDiagnosticCaseUsage;
-(void)_removeReportRecordForKey:(id)arg1 ;
-(void)observeSetupAssistantFinished;
-(BOOL)requireUserNotification;
-(void)setupAssistantFinished;
-(unsigned long long)externalStepper;
-(void)setExternalStepper:(unsigned long long)arg1 ;
@end

