/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <libobjc.A.dylib/HKSampleTypeUpdateControllerObserver.h>

@protocol OS_dispatch_queue;
@class NSNumber, HKHealthStore, HKSampleTypeUpdateController, NSMutableDictionary, NSArray, NSHashTable, NSObject, NSString;

@interface WDMedicalRecordCountProvider : NSObject <HKSampleTypeUpdateControllerObserver> {

	BOOL _hasLoaded;
	NSNumber* _allRecordsCount;
	HKHealthStore* _healthStore;
	/*^block*/id _unitTesting_allObserversReadyCallback;
	HKSampleTypeUpdateController* _updateController;
	NSMutableDictionary* _countByCategory;
	NSMutableDictionary* _countBySampleType;
	NSArray* _supportedCategories;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _countingQueue;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                  //@synthesize healthStore=_healthStore - In the implementation block
@property (assign,nonatomic) BOOL hasLoaded;                                               //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (nonatomic,retain) HKSampleTypeUpdateController * updateController;              //@synthesize updateController=_updateController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * countByCategory;                        //@synthesize countByCategory=_countByCategory - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * countBySampleType;                      //@synthesize countBySampleType=_countBySampleType - In the implementation block
@property (nonatomic,retain) NSNumber * allRecordsCount;                                   //@synthesize allRecordsCount=_allRecordsCount - In the implementation block
@property (nonatomic,retain) NSArray * supportedCategories;                                //@synthesize supportedCategories=_supportedCategories - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                      //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                     //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> countingQueue;                   //@synthesize countingQueue=_countingQueue - In the implementation block
@property (nonatomic,copy) id unitTesting_allObserversReadyCallback;                       //@synthesize unitTesting_allObserversReadyCallback=_unitTesting_allObserversReadyCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)hasLoaded;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)countByCategory;
-(NSArray *)supportedCategories;
-(void)_loadInitialCounts;
-(HKSampleTypeUpdateController *)updateController;
-(id)initWithHealthStore:(id)arg1 updateController:(id)arg2 ;
-(NSMutableDictionary *)countBySampleType;
-(NSObject*<OS_dispatch_queue>)countingQueue;
-(void)_sampleCountForSampleTypes:(id)arg1 predicate:(id)arg2 healthStore:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_callAllObserversReadyCallbackIfNecessary;
-(void)_queue_incorporateAndNotifyObserversWithCategoryCounts:(id)arg1 sampleTypeCounts:(id)arg2 ;
-(void)loadCountOfSamplesForCategories:(id)arg1 additionalSampleTypes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_areAllObserverQueriesRunning;
-(void)_queue_updateAllCategoryRecordCount;
-(void)_setupSampleUpdateObserver;
-(BOOL)_includeCategoryInAllRecordCount:(id)arg1 ;
-(void)setAllRecordsCount:(NSNumber *)arg1 ;
-(void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2 ;
-(id)numberOfRecordsForCategory:(id)arg1 ;
-(id)numberOfRecordsForSampleType:(id)arg1 ;
-(id)CDASampleCount;
-(NSNumber *)allRecordsCount;
-(id)unitTesting_allObserversReadyCallback;
-(void)setUnitTesting_allObserversReadyCallback:(id)arg1 ;
-(void)setUpdateController:(HKSampleTypeUpdateController *)arg1 ;
-(void)setCountByCategory:(NSMutableDictionary *)arg1 ;
-(void)setCountBySampleType:(NSMutableDictionary *)arg1 ;
-(void)setSupportedCategories:(NSArray *)arg1 ;
-(void)setCountingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

