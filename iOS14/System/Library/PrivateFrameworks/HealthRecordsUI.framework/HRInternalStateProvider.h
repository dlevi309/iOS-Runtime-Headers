/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <libobjc.A.dylib/HKHealthRecordsStoreIngestionStateListener.h>
#import <libobjc.A.dylib/HKConceptStoreObserver.h>

@interface HRInternalStateProvider : NSObject <HKHealthRecordsStoreIngestionStateListener, HKConceptStoreObserver> {

	 conceptStore;
	 healthRecordsStore;
	 healthExperienceStore;
	 recordCounts;
	 sub;
	 loadState;
	 changeHandler;
	 isObserving;

}
-(void)healthRecordsStore:(id)arg1 ingestionStateDidUpdateTo:(long long)arg2 ;
-(void)conceptStore:(id)arg1 indexManagerDidChangeState:(unsigned long long)arg2 ;
-(id)initWithHealthStore:(id)arg1 ;
-(id)init;
-(void)fetchJSONWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)dealloc;
@end

