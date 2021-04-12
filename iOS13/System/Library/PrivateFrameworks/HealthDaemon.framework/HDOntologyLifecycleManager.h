/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDHealthOntologyManagerObserver.h>
#import <libobjc.A.dylib/HDHealthRecordsAccountEventObserver.h>

@protocol HDOntologyTester;
@class HDProfile, HDOntologyAssetManager, HDHealthOntologyManager, HDConceptIndexManager, HDHealthRecordsNotificationManager, HDHealthOntologyConfiguration, NSSet, NSString;

@interface HDOntologyLifecycleManager : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDHealthOntologyManagerObserver, HDHealthRecordsAccountEventObserver> {

	os_unfair_lock_s _ivarLock;
	BOOL _ready;
	HDProfile* _profile;
	HDOntologyAssetManager* _assetManager;
	HDHealthOntologyManager* _ontologyManager;
	HDConceptIndexManager* _indexManager;
	HDHealthRecordsNotificationManager* _notificationManager;
	HDHealthOntologyConfiguration* _ontologyConfiguration;
	id<HDOntologyTester> _ontologyTester;
	HDHealthOntologyConfiguration* _unitTesting_ontologyConfigurationOverride;

}

@property (nonatomic,retain) HDOntologyAssetManager * assetManager;                                                  //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) HDHealthOntologyManager * ontologyManager;                                              //@synthesize ontologyManager=_ontologyManager - In the implementation block
@property (nonatomic,copy) HDHealthOntologyConfiguration * ontologyConfiguration;                                    //@synthesize ontologyConfiguration=_ontologyConfiguration - In the implementation block
@property (assign,getter=isReady,nonatomic) BOOL ready;                                                              //@synthesize ready=_ready - In the implementation block
@property (assign,nonatomic,__weak) id<HDOntologyTester> ontologyTester;                                             //@synthesize ontologyTester=_ontologyTester - In the implementation block
@property (nonatomic,retain) HDHealthOntologyConfiguration * unitTesting_ontologyConfigurationOverride;              //@synthesize unitTesting_ontologyConfigurationOverride=_unitTesting_ontologyConfigurationOverride - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                                           //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDConceptIndexManager * indexManager;                                                 //@synthesize indexManager=_indexManager - In the implementation block
@property (nonatomic,readonly) HDHealthRecordsNotificationManager * notificationManager;                             //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allSupportedCountryCodes; 
@property (nonatomic,copy,readonly) NSSet * improveHealthRecordsGatedAnalyticsEnabledCountryCodes; 
@property (nonatomic,copy,readonly) NSSet * optInDataCollectionEnabledCountryCodes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isReady;
-(HDProfile *)profile;
-(id)initWithProfile:(id)arg1 ;
-(HDOntologyAssetManager *)assetManager;
-(HDHealthRecordsNotificationManager *)notificationManager;
-(void)setReady:(BOOL)arg1 ;
-(void)invalidateAndWait;
-(void)setAssetManager:(HDOntologyAssetManager *)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(HDConceptIndexManager *)indexManager;
-(void)obliterateWithReason:(id)arg1 ;
-(HDHealthOntologyManager *)ontologyManager;
-(void)ontologyManagerReferenceOntologyWillUpdate:(id)arg1 ;
-(void)ontologyManagerReferenceOntologyFinishedUpdate:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)ontologyManagerReferenceOntologyCreated:(id)arg1 ;
-(id)ontologyConfigurationForCountryCode:(id)arg1 ;
-(BOOL)isCountryCodeSupported:(id)arg1 ;
-(HDHealthOntologyConfiguration *)ontologyConfiguration;
-(void)_disableAllManagers;
-(void)_enableAllManagers;
-(void)_evaluateManagerState;
-(id<HDOntologyTester>)ontologyTester;
-(void)profileExtension:(id)arg1 accountEventOccurred:(unsigned long long)arg2 ;
-(BOOL)isCountrySupported:(id)arg1 ;
-(NSSet *)allSupportedCountryCodes;
-(NSSet *)improveHealthRecordsGatedAnalyticsEnabledCountryCodes;
-(NSSet *)optInDataCollectionEnabledCountryCodes;
-(void)setOntologyTester:(id<HDOntologyTester>)arg1 ;
-(void)setOntologyManager:(HDHealthOntologyManager *)arg1 ;
-(void)setOntologyConfiguration:(HDHealthOntologyConfiguration *)arg1 ;
-(HDHealthOntologyConfiguration *)unitTesting_ontologyConfigurationOverride;
-(void)setUnitTesting_ontologyConfigurationOverride:(HDHealthOntologyConfiguration *)arg1 ;
@end

