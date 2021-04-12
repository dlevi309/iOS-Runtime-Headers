/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HKHealthStore *)healthStore;
-(void)setEditor:(HKQuantitySeriesSampleEditor *)arg1 ;
-(HKUnitPreferenceController *)unitController;
-(id<HKQuantitySeriesDataProviderDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<HKQuantitySeriesDataProviderDelegate>)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(HKQuantitySeriesSampleEditor *)editor;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(HKDisplayTypeController *)displayTypeController;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(NSMutableArray *)quantities;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(void)setDisplayTypeController:(HKDisplayTypeController *)arg1 ;
-(id)initWithSample:(id)arg1 healthStore:(id)arg2 ;
-(void)setParentSample:(HKQuantitySample *)arg1 ;
-(void)setQuantities:(NSMutableArray *)arg1 ;
-(void)setHasSubsamplesToRemove:(BOOL)arg1 ;
-(HKQuantitySample *)parentSample;
-(id)textForQuantity:(id)arg1 ;
-(void)deleteQuantity:(id)arg1 ;
-(BOOL)hasSubsamplesToRemove;
-(void)queryForSubsamples:(/*^block*/id)arg1 ;
-(void)commitDeletionsIfNeeded;
@end

