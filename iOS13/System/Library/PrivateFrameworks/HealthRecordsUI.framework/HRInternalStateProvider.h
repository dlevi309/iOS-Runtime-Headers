/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <libobjc.A.dylib/WDMedicalRecordCountProviderObserver.h>
#import <libobjc.A.dylib/HKConceptStoreObserver.h>
#import <libobjc.A.dylib/HKHealthRecordsStoreIngestionStateListener.h>

@interface HRInternalStateProvider : NSObject <WDMedicalRecordCountProviderObserver, HKConceptStoreObserver, HKHealthRecordsStoreIngestionStateListener> {

	 conceptStore;
	 healthRecordsStore;
	 recordCountProvider;
	 healthExperienceStore;
	 loadState;
	 changeHandler;
	 isObserving;

}
-(void)medicalRecordCountProvider:(id)arg1 didUpdateCountForSampleTypes:(id)arg2 ;
-(void)medicalRecordCountProvider:(id)arg1 didUpdateCountForCategories:(id)arg2 ;
-(void)medicalRecordCountProviderDidLoadInitialCounts:(id)arg1 ;
-(void)medicalRecordCountProviderDidUpdateAllRecordsCount:(id)arg1 ;
-(void)conceptStore:(id)arg1 indexManagerDidChangeState:(unsigned long long)arg2 ;
-(void)healthRecordsStore:(id)arg1 ingestionStateDidUpdateTo:(long long)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithProfile:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)fetchJSONWithCompletion:(/*^block*/id)arg1 ;
@end

