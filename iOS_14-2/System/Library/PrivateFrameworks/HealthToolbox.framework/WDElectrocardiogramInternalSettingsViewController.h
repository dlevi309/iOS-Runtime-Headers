/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <libobjc.A.dylib/HRElectrocardiogramOnboardingManagerDelegate.h>

@class NSArray, HKHostingAreaLayoutView, UIPickerView, NPSManager, HKHealthStore, HKDateCache, HKHeartRhythmAvailability, HRElectrocardiogramOnboardingManager, NSString;

@interface WDElectrocardiogramInternalSettingsViewController : HKTableViewController <UIPickerViewDelegate, UIPickerViewDataSource, HRElectrocardiogramOnboardingManagerDelegate> {

	BOOL _deletingSamples;
	NSArray* _allDemoResults;
	HKHostingAreaLayoutView* _pickerInputView;
	UIPickerView* _resultPicker;
	NSArray* _allAlgorithmVersions;
	HKHostingAreaLayoutView* _algorithmVersionPickerInputView;
	UIPickerView* _algorithmVersionPicker;
	NPSManager* _syncManager;
	NSArray* _demoResultKeys;
	HKHealthStore* _healthStore;
	HKDateCache* _dateCache;
	HKHeartRhythmAvailability* _heartRhythmAvailability;
	HRElectrocardiogramOnboardingManager* _onboardingManager;

}

@property (nonatomic,readonly) NPSManager * syncManager;                                             //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,retain) NSArray * demoResultKeys;                                               //@synthesize demoResultKeys=_demoResultKeys - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                                          //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKDateCache * dateCache;                                              //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,readonly) HKHeartRhythmAvailability * heartRhythmAvailability;                  //@synthesize heartRhythmAvailability=_heartRhythmAvailability - In the implementation block
@property (nonatomic,retain) HRElectrocardiogramOnboardingManager * onboardingManager;               //@synthesize onboardingManager=_onboardingManager - In the implementation block
@property (nonatomic,readonly) NSArray * allDemoResults;                                             //@synthesize allDemoResults=_allDemoResults - In the implementation block
@property (nonatomic,readonly) UIPickerView * resultPicker;                                          //@synthesize resultPicker=_resultPicker - In the implementation block
@property (nonatomic,readonly) HKHostingAreaLayoutView * pickerInputView;                            //@synthesize pickerInputView=_pickerInputView - In the implementation block
@property (nonatomic,readonly) NSArray * allAlgorithmVersions;                                       //@synthesize allAlgorithmVersions=_allAlgorithmVersions - In the implementation block
@property (nonatomic,retain) UIPickerView * algorithmVersionPicker;                                  //@synthesize algorithmVersionPicker=_algorithmVersionPicker - In the implementation block
@property (nonatomic,retain) HKHostingAreaLayoutView * algorithmVersionPickerInputView;              //@synthesize algorithmVersionPickerInputView=_algorithmVersionPickerInputView - In the implementation block
@property (assign,getter=isDeletingSamples,nonatomic) BOOL deletingSamples;                          //@synthesize deletingSamples=_deletingSamples - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKHealthStore *)healthStore;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(HKDateCache *)dateCache;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(NPSManager *)syncManager;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(HRElectrocardiogramOnboardingManager *)onboardingManager;
-(id)_buttonCellForTableView:(id)arg1 ;
-(BOOL)isDeletingSamples;
-(void)setDeletingSamples:(BOOL)arg1 ;
-(void)setOnboardingManager:(HRElectrocardiogramOnboardingManager *)arg1 ;
-(HKHeartRhythmAvailability *)heartRhythmAvailability;
-(void)didCompleteOnboarding;
-(void)didDismissOnboarding;
-(id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 ;
-(void)didTapOnElectrocardiogram:(id)arg1 ;
-(void)setAlgorithmVersionPicker:(UIPickerView *)arg1 ;
-(UIPickerView *)algorithmVersionPicker;
-(unsigned long long)_overrideAlgorithmVersion;
-(void)setAlgorithmVersionPickerInputView:(HKHostingAreaLayoutView *)arg1 ;
-(void)keyboardDidDismiss:(id)arg1 ;
-(UIPickerView *)resultPicker;
-(void)updateCellIndexNumberLabels;
-(NSArray *)demoResultKeys;
-(HKHostingAreaLayoutView *)algorithmVersionPickerInputView;
-(HKHostingAreaLayoutView *)pickerInputView;
-(id)_styleValue1CellForTableView:(id)arg1 inputView:(id)arg2 ;
-(NSArray *)allAlgorithmVersions;
-(void)setDemoResultKeys:(NSArray *)arg1 ;
-(NSArray *)allDemoResults;
-(void)_saveOverrideAlgorithmVersion:(long long)arg1 ;
-(id)_versionForAlgorithmVersionText:(id)arg1 ;
-(void)clearCellIndexNumberLabels;
@end

