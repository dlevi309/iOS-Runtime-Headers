/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDAnalyticsSubmissionCoordinatorDelegate.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, HDProfile, NSString;

@interface HDMedicalIDDataManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDHealthDaemonReadyObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	HDProfile* _profile;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) HDProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(BOOL)obliterateMedicalIDDataWithReason:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateMedicalIDWithLocalData:(id)arg1 error:(id*)arg2 ;
-(void)badgeHealthAppForEmergencyContactConsolidationWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchMedicalIDIfSetUpWithError:(id*)arg1 ;
-(id)_fetchMedicalIDDataFromDiskWithError:(id*)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)unitTest_persistMedicalIDData:(id)arg1 ;
-(BOOL)deleteMedicalIDDataWithError:(id*)arg1 ;
-(id)fetchMedicalIDDataIfSetUpOrCreateDefaultWithError:(id*)arg1 ;
-(void)_setAllowedToMessageSOSContactsIfApplicableForMedicalID:(id)arg1 ;
-(void)_triggerSyncForSuccessfulMedicalIDUpdate;
-(BOOL)_isDateSavedEarlierForMedicalID:(id)arg1 originalMedicalID:(id)arg2 ;
-(void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_unarchiveMedicalIDDataWithRawData:(id)arg1 error:(id*)arg2 ;
-(id)_medicalIDURL;
-(BOOL)_migrateMedicalIDLocationIfNecessary:(id*)arg1 ;
-(HDProfile *)profile;
-(id)medicalIDEmergencyContactsWithError:(id*)arg1 ;
-(id)unitTest_medicalIDData;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_updateShowMedicalIdOnWatch:(BOOL)arg1 ;
-(id)fetchMedicalIDWithError:(id*)arg1 ;
-(id)_medicalIDURLWithDirectoryPath:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)_persistMedicalIDDataFileToDisk:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateMedicalIDWithSyncedData:(id)arg1 provenance:(id)arg2 error:(id*)arg3 ;
-(BOOL)_persistMedicalIDData:(id)arg1 originalData:(id)arg2 provenance:(id)arg3 error:(id*)arg4 ;
-(void)_badgeHealthAppForEmergencyContactConsolidationWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)medicalIDClinicalContactsWithError:(id*)arg1 ;
@end

