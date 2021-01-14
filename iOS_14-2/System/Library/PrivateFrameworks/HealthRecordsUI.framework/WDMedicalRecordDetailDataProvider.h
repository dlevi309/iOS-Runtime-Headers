/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@protocol WDMedicalRecordDetailDataProviderDelegate, OS_dispatch_queue;
@class HKHealthRecordsStore, HKConceptStore, HKMedicalRecord, NSMutableDictionary, NSObject;

@interface WDMedicalRecordDetailDataProvider : NSObject {

	HKHealthRecordsStore* _healthRecordsStore;
	HKConceptStore* _conceptStore;
	HKMedicalRecord* _medicalRecord;
	id<WDMedicalRecordDetailDataProviderDelegate> _delegate;
	NSMutableDictionary* _displayItemsBySection;
	NSMutableDictionary* _sectionTitles;
	NSObject*<OS_dispatch_queue> _resourceQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,retain) HKHealthRecordsStore * healthRecordsStore;                                  //@synthesize healthRecordsStore=_healthRecordsStore - In the implementation block
@property (nonatomic,retain) HKConceptStore * conceptStore;                                              //@synthesize conceptStore=_conceptStore - In the implementation block
@property (nonatomic,retain) HKMedicalRecord * medicalRecord;                                            //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (assign,nonatomic,__weak) id<WDMedicalRecordDetailDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * displayItemsBySection;                                //@synthesize displayItemsBySection=_displayItemsBySection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionTitles;                                        //@synthesize sectionTitles=_sectionTitles - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resourceQueue;                                 //@synthesize resourceQueue=_resourceQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                                   //@synthesize clientQueue=_clientQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id<WDMedicalRecordDetailDataProviderDelegate>)delegate;
-(void)setResourceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HKMedicalRecord *)medicalRecord;
-(void)setMedicalRecord:(HKMedicalRecord *)arg1 ;
-(long long)numberOfSections;
-(id)initWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 medicalRecord:(id)arg3 delegate:(id)arg4 ;
-(id)displayItemForSection:(long long)arg1 row:(long long)arg2 ;
-(long long)sectionFHIRSourceData;
-(long long)numberOfRowsForSection:(long long)arg1 ;
-(HKHealthRecordsStore *)healthRecordsStore;
-(void)setDelegate:(id<WDMedicalRecordDetailDataProviderDelegate>)arg1 ;
-(NSMutableDictionary *)sectionTitles;
-(id)titleForSection:(long long)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(void)_rqueue_recomputeDisplayItems;
-(NSMutableDictionary *)displayItemsBySection;
-(void)_updatePlacementForDisplayItems:(id)arg1 ;
-(id)displayItemsForSection:(long long)arg1 ;
-(void)setConceptStore:(HKConceptStore *)arg1 ;
-(void)setSectionTitles:(NSMutableDictionary *)arg1 ;
-(void)setDisplayItemsBySection:(NSMutableDictionary *)arg1 ;
-(void)setHealthRecordsStore:(HKHealthRecordsStore *)arg1 ;
-(HKConceptStore *)conceptStore;
@end

