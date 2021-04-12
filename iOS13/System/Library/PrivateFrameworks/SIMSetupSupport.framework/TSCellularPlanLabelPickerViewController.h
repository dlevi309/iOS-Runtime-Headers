/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class CTCellularPlanItem, CTUserLabel, NSArray, NSIndexPath, NSString;

@interface TSCellularPlanLabelPickerViewController : UITableViewController <UITextFieldDelegate> {

	CTCellularPlanItem* _associatedPlanItem;
	CTUserLabel* _initialLabel;
	NSArray* _predefinedUserLabels;
	NSIndexPath* _chosenLabelIndexPath;
	CTUserLabel* _customLabel;

}

@property (retain) NSIndexPath * chosenLabelIndexPath;                   //@synthesize chosenLabelIndexPath=_chosenLabelIndexPath - In the implementation block
@property (retain) CTUserLabel * customLabel;                            //@synthesize customLabel=_customLabel - In the implementation block
@property (retain) CTCellularPlanItem * associatedPlanItem;              //@synthesize associatedPlanItem=_associatedPlanItem - In the implementation block
@property (retain) CTUserLabel * initialLabel;                           //@synthesize initialLabel=_initialLabel - In the implementation block
@property (readonly) CTUserLabel * chosenLabel; 
@property (retain) NSArray * predefinedUserLabels;                       //@synthesize predefinedUserLabels=_predefinedUserLabels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(CTUserLabel *)customLabel;
-(void)setCustomLabel:(CTUserLabel *)arg1 ;
-(void)_doneButtonTapped;
-(CTUserLabel *)chosenLabel;
-(CTCellularPlanItem *)associatedPlanItem;
-(void)setAssociatedPlanItem:(CTCellularPlanItem *)arg1 ;
-(void)setInitialLabel:(CTUserLabel *)arg1 ;
-(void)setPredefinedUserLabels:(NSArray *)arg1 ;
-(id)customLabelIndexPath;
-(id)customLabelRowValue;
-(CTUserLabel *)initialLabel;
-(NSArray *)predefinedUserLabels;
-(NSIndexPath *)chosenLabelIndexPath;
-(void)setChosenLabelIndexPath:(NSIndexPath *)arg1 ;
@end

