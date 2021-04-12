/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <libobjc.A.dylib/WDMedicalRecordSummarizable.h>

@protocol WDMedicalRecordSummaryDelegate, OS_dispatch_queue;
@class NSArray, NSString, HRProfile, NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, NSObject;

@interface WDMedicalRecordCategorySummary : NSObject <WDMedicalRecordSummarizable> {

	BOOL _showCategoryTitle;
	BOOL _displayingTruncatedRecords;
	BOOL _dirty;
	HRProfile* _profile;
	id<WDMedicalRecordSummaryDelegate> _delegate;
	NSMutableOrderedSet* _allRecords;
	NSMutableOrderedSet* _allStandaloneRecords;
	NSMutableOrderedSet* _panels;
	NSMutableDictionary* _panelsToRecords;
	long long _categoryType;
	NSMutableArray* _allDisplayItems;
	NSMutableArray* _visibleDisplayItems;
	NSMutableArray* _truncatedDisplayItems;
	unsigned long long _truncationDisplayItemOffset;
	long long _truncatedMedicalRecordCount;
	NSObject*<OS_dispatch_queue> _summaryQueue;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}

@property (nonatomic,retain) HRProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) id<WDMedicalRecordSummaryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * allRecords;                                //@synthesize allRecords=_allRecords - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * allStandaloneRecords;                      //@synthesize allStandaloneRecords=_allStandaloneRecords - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * panels;                                    //@synthesize panels=_panels - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * panelsToRecords;                           //@synthesize panelsToRecords=_panelsToRecords - In the implementation block
@property (assign,nonatomic) long long categoryType;                                          //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,retain) NSMutableArray * allDisplayItems;                                //@synthesize allDisplayItems=_allDisplayItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibleDisplayItems;                            //@synthesize visibleDisplayItems=_visibleDisplayItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * truncatedDisplayItems;                          //@synthesize truncatedDisplayItems=_truncatedDisplayItems - In the implementation block
@property (assign,nonatomic) unsigned long long truncationDisplayItemOffset;                  //@synthesize truncationDisplayItemOffset=_truncationDisplayItemOffset - In the implementation block
@property (assign,nonatomic) long long truncatedMedicalRecordCount;                           //@synthesize truncatedMedicalRecordCount=_truncatedMedicalRecordCount - In the implementation block
@property (assign,nonatomic) BOOL showCategoryTitle;                                          //@synthesize showCategoryTitle=_showCategoryTitle - In the implementation block
@property (assign,nonatomic) BOOL displayingTruncatedRecords;                                 //@synthesize displayingTruncatedRecords=_displayingTruncatedRecords - In the implementation block
@property (assign,nonatomic) BOOL dirty;                                                      //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> summaryQueue;                       //@synthesize summaryQueue=_summaryQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resourceQueue;                      //@synthesize resourceQueue=_resourceQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * displayItems; 
@property (nonatomic,copy,readonly) NSString * summarySortString; 
-(void)setDirty:(BOOL)arg1 ;
-(id<WDMedicalRecordSummaryDelegate>)delegate;
-(void)setDelegate:(id<WDMedicalRecordSummaryDelegate>)arg1 ;
-(long long)categoryType;
-(void)setCategoryType:(long long)arg1 ;
-(HRProfile *)profile;
-(void)setProfile:(HRProfile *)arg1 ;
-(NSArray *)displayItems;
-(BOOL)dirty;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(NSMutableOrderedSet *)allRecords;
-(void)recomputeIfNeeded;
-(id)initWithProfile:(id)arg1 categoryType:(long long)arg2 showCategoryTitle:(BOOL)arg3 delegate:(id)arg4 ;
-(void)addMedicalRecord:(id)arg1 ;
-(NSString *)summarySortString;
-(void)setResourceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableOrderedSet *)panels;
-(void)_rqueue_setNeedsCompute;
-(BOOL)displayingTruncatedRecords;
-(void)setDisplayingTruncatedRecords:(BOOL)arg1 ;
-(void)_rqueue_recomputeIfNeeded;
-(void)_rqueue_determinStandaloneRecords;
-(BOOL)showCategoryTitle;
-(NSMutableOrderedSet *)allStandaloneRecords;
-(NSMutableDictionary *)panelsToRecords;
-(NSObject*<OS_dispatch_queue>)summaryQueue;
-(void)_displayItemsForPanel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_displayItemsForRecord:(id)arg1 previous:(id)arg2 next:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setVisibleDisplayItems:(NSMutableArray *)arg1 ;
-(void)setAllDisplayItems:(NSMutableArray *)arg1 ;
-(void)setAllStandaloneRecords:(NSMutableOrderedSet *)arg1 ;
-(void)_displayItemsForObservation:(id)arg1 previous:(id)arg2 next:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_displayItemsForUnknownRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_displayItemsForGenericRecord:(id)arg1 previous:(id)arg2 next:(id)arg3 ;
-(void)showTruncatedRecords;
-(void)setNeedsRecompute;
-(long long)additionalDisplayItemCount;
-(long long)additionalRecordCount;
-(BOOL)_shouldConsiderRecordTruncation:(id)arg1 ;
-(id)_appendixItemForCount:(long long)arg1 ;
-(void)setAllRecords:(NSMutableOrderedSet *)arg1 ;
-(void)setPanels:(NSMutableOrderedSet *)arg1 ;
-(void)setPanelsToRecords:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)allDisplayItems;
-(NSMutableArray *)visibleDisplayItems;
-(NSMutableArray *)truncatedDisplayItems;
-(void)setTruncatedDisplayItems:(NSMutableArray *)arg1 ;
-(unsigned long long)truncationDisplayItemOffset;
-(void)setTruncationDisplayItemOffset:(unsigned long long)arg1 ;
-(long long)truncatedMedicalRecordCount;
-(void)setTruncatedMedicalRecordCount:(long long)arg1 ;
-(void)setShowCategoryTitle:(BOOL)arg1 ;
-(void)setSummaryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

