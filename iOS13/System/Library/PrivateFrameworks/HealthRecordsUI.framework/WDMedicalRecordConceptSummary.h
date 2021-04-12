/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <libobjc.A.dylib/WDMedicalRecordSummarizable.h>

@protocol WDMedicalRecordSummaryDelegate, OS_dispatch_queue;
@class HKHealthRecordsStore, HKConceptStore, NSMutableOrderedSet, NSArray, NSObject, NSString;

@interface WDMedicalRecordConceptSummary : NSObject <WDMedicalRecordSummarizable> {

	BOOL _dirty;
	id<WDMedicalRecordSummaryDelegate> _delegate;
	HKHealthRecordsStore* _healthRecordsStore;
	HKConceptStore* _conceptStore;
	NSMutableOrderedSet* _allRecords;
	NSArray* _allDisplayItems;
	NSObject*<OS_dispatch_queue> _summaryQueue;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}

@property (assign,nonatomic,__weak) id<WDMedicalRecordSummaryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HKHealthRecordsStore * healthRecordsStore;                       //@synthesize healthRecordsStore=_healthRecordsStore - In the implementation block
@property (nonatomic,retain) HKConceptStore * conceptStore;                                   //@synthesize conceptStore=_conceptStore - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * allRecords;                                //@synthesize allRecords=_allRecords - In the implementation block
@property (nonatomic,retain) NSArray * allDisplayItems;                                       //@synthesize allDisplayItems=_allDisplayItems - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> summaryQueue;                       //@synthesize summaryQueue=_summaryQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resourceQueue;                      //@synthesize resourceQueue=_resourceQueue - In the implementation block
@property (assign,nonatomic) BOOL dirty;                                                      //@synthesize dirty=_dirty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * displayItems; 
@property (nonatomic,copy,readonly) NSString * summarySortString; 
-(void)setDirty:(BOOL)arg1 ;
-(id<WDMedicalRecordSummaryDelegate>)delegate;
-(void)setDelegate:(id<WDMedicalRecordSummaryDelegate>)arg1 ;
-(NSArray *)displayItems;
-(BOOL)dirty;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(HKConceptStore *)conceptStore;
-(NSMutableOrderedSet *)allRecords;
-(id)initWithProfile:(id)arg1 delegate:(id)arg2 ;
-(void)recomputeIfNeeded;
-(HKHealthRecordsStore *)healthRecordsStore;
-(void)setHealthRecordsStore:(HKHealthRecordsStore *)arg1 ;
-(void)addMedicalRecord:(id)arg1 ;
-(NSString *)summarySortString;
-(void)setResourceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConceptStore:(HKConceptStore *)arg1 ;
-(void)_rqueue_setNeedsCompute;
-(void)_rqueue_recomputeIfNeeded;
-(NSObject*<OS_dispatch_queue>)summaryQueue;
-(void)setAllDisplayItems:(NSArray *)arg1 ;
-(void)showTruncatedRecords;
-(void)setNeedsRecompute;
-(void)setAllRecords:(NSMutableOrderedSet *)arg1 ;
-(NSArray *)allDisplayItems;
-(void)setSummaryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_displayItemsForRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_displayItemsForObservation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_displayItemsForGenericMedicalRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updatePlacementForDisplayItems:(id)arg1 ofRecord:(id)arg2 ;
@end

