/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)disableResourceNotifyDampening;
+(void)setInitializeAsHelper:(BOOL)arg1 ;
+(id)configureClass:(id)arg1 ;
+(id)internalStateDictionary;
+(void)resetAllForCustomerBuilds;
-(void)_dumpState;
-(BOOL)noteSymptom:(id)arg1 ;
-(void)_addReportRecordWithKey:(id)arg1 count:(long long)arg2 lastSeen:(double)arg3 ;
-(BOOL)_initializeWorkspace;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setExternalStepper:(unsigned long long)arg1 ;
-(id)init;
-(void)recordReportForSignature:(id)arg1 aggregateReport:(id)arg2 specificReport:(id)arg3 ;
-(void)observeSetupAssistantFinished;
-(void)_removeAllReportRecords;
-(long long)_removeAllDiagnosticCaseUsageFor:(id)arg1 ;
-(void)removeSetupAssistantFinishedObserver;
-(void)_scheduleMaintenanceActivity;
-(void)_completeInitialization:(BOOL)arg1 ;
-(void)_administrativeEnable;
-(void)_purgeDiagnosticCaseUsage;
-(unsigned long long)externalStepper;
-(id)_retrieveReportRecordForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 ;
-(void)_administrativeDisable;
-(void)_removeReportRecordForKey:(id)arg1 ;
-(id)internalStateDictionary;
-(void)handleResourceNotifyOfType:(unsigned long long)arg1 event:(id)arg2 ;
-(BOOL)requireUserNotification;
-(void)triggerABCSnapshotWithSignature:(id)arg1 events:(id)arg2 uuid:(id)arg3 ;
-(void)_saveReportRecord:(id)arg1 ;
-(void)resetDiagnosticCaseUsage;
-(void)setupAssistantFinished;
-(void)resetAll;
-(void)alertCarrierSeedUserAboutABC;
-(id)_reportRecordKeyForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4 ;
-(BOOL)_arbitratorReady;
-(BOOL)shouldGenerateReportForSignature:(id)arg1 trigger:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)scheduleABCNotificationForCarrierSeedUser;
@end

