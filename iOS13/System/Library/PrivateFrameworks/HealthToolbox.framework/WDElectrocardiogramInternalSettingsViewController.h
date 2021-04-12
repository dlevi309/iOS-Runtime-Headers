/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>

@class NSArray, HKHostingAreaLayoutView, UIPickerView, NPSManager, HKHealthStore, HKHeartRhythmAvailability, NSString;

@interface WDElectrocardiogramInternalSettingsViewController : HKTableViewController <UIPickerViewDelegate, UIPickerViewDataSource> {

	BOOL _deletingSamples;
	NSArray* _allDemoResults;
	HKHostingAreaLayoutView* _pickerInputView;
	UIPickerView* _resultPicker;
	NPSManager* _syncManager;
	NSArray* _demoResultKeys;
	HKHealthStore* _healthStore;
	HKHeartRhythmAvailability* _heartRhythmAvailability;

}

@property (nonatomic,readonly) NPSManager * syncManager;                                         //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,retain) NSArray * demoResultKeys;                                           //@synthesize demoResultKeys=_demoResultKeys - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                                      //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKHeartRhythmAvailability * heartRhythmAvailability;              //@synthesize heartRhythmAvailability=_heartRhythmAvailability - In the implementation block
@property (nonatomic,readonly) NSArray * allDemoResults;                                         //@synthesize allDemoResults=_allDemoResults - In the implementation block
@property (nonatomic,readonly) UIPickerView * resultPicker;                                      //@synthesize resultPicker=_resultPicker - In the implementation block
@property (nonatomic,readonly) HKHostingAreaLayoutView * pickerInputView;                        //@synthesize pickerInputView=_pickerInputView - In the implementation block
@property (assign,getter=isDeletingSamples,nonatomic) BOOL deletingSamples;                      //@synthesize deletingSamples=_deletingSamples - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKHealthStore *)healthStore;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(NPSManager *)syncManager;
-(id)initWithHealthStore:(id)arg1 ;
-(HKHeartRhythmAvailability *)heartRhythmAvailability;
-(void)keyboardDidDismiss:(id)arg1 ;
-(UIPickerView *)resultPicker;
-(void)updateCellIndexNumberLabels;
-(NSArray *)demoResultKeys;
-(HKHostingAreaLayoutView *)pickerInputView;
-(id)_buttonCellForTableView:(id)arg1 ;
-(BOOL)isDeletingSamples;
-(void)setDemoResultKeys:(NSArray *)arg1 ;
-(NSArray *)allDemoResults;
-(void)setDeletingSamples:(BOOL)arg1 ;
-(void)clearCellIndexNumberLabels;
@end

