/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol HKQuantitySeriesDataProviderDelegate;
@class HKDisplayTypeController, HKUnitPreferenceController, HKHealthStore, HKQuantitySample, NSMutableArray, HKQuantitySeriesSampleEditor, NSString;

@interface HKQuantitySeriesDataProvider : NSObject <UITableViewDataSource, UITableViewDelegate> {

	BOOL _hasSubsamplesToRemove;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitController;
	id<HKQuantitySeriesDataProviderDelegate> _delegate;
	HKHealthStore* _healthStore;
	HKQuantitySample* _parentSample;
	NSMutableArray* _quantities;
	HKQuantitySeriesSampleEditor* _editor;

}

@property (nonatomic,retain) HKQuantitySample * parentSample;                                //@synthesize parentSample=_parentSample - In the implementation block
@property (nonatomic,retain) NSMutableArray * quantities;                                    //@synthesize quantities=_quantities - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                    //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKQuantitySeriesSampleEditor * editor;                          //@synthesize editor=_editor - In the implementation block
@property (assign,nonatomic) BOOL hasSubsamplesToRemove;                                     //@synthesize hasSubsamplesToRemove=_hasSubsamplesToRemove - In the implementation block
@property (nonatomic,retain) HKDisplayTypeController * displayTypeController;                //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitController;                    //@synthesize unitController=_unitController - In the implementation block
@property (nonatomic,retain) id<HKQuantitySeriesDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HKQuantitySeriesDataProviderDelegate>)delegate;
-(void)setDelegate:(id<HKQuantitySeriesDataProviderDelegate>)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(HKQuantitySeriesSampleEditor *)editor;
-(void)setEditor:(HKQuantitySeriesSampleEditor *)arg1 ;
-(NSMutableArray *)quantities;
-(HKUnitPreferenceController *)unitController;
-(HKDisplayTypeController *)displayTypeController;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(id)initWithSample:(id)arg1 healthStore:(id)arg2 ;
-(void)setDisplayTypeController:(HKDisplayTypeController *)arg1 ;
-(void)queryForSubsamples:(/*^block*/id)arg1 ;
-(void)commitDeletionsIfNeeded;
-(void)setParentSample:(HKQuantitySample *)arg1 ;
-(void)setQuantities:(NSMutableArray *)arg1 ;
-(void)setHasSubsamplesToRemove:(BOOL)arg1 ;
-(HKQuantitySample *)parentSample;
-(id)textForQuantity:(id)arg1 ;
-(void)deleteQuantity:(id)arg1 ;
-(BOOL)hasSubsamplesToRemove;
@end

