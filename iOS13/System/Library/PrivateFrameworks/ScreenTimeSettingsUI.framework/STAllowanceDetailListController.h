/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/STCustomizeDaysListControllerDelegate.h>
#import <libobjc.A.dylib/STUIDateTimePickerCellDelegate.h>

@protocol STAllowanceDetailListControllerDelegate, STRootViewModelCoordinator;
@class STAllowance, NSObject, PSSpecifier, NSArray, UIColor, NSString;

@interface STAllowanceDetailListController : PSListController <STCustomizeDaysListControllerDelegate, STUIDateTimePickerCellDelegate> {

	BOOL _isSetupController;
	BOOL _useBackButton;
	BOOL _creatingNewAllowance;
	BOOL _didDeleteAllowance;
	id<STAllowanceDetailListControllerDelegate> _delegate;
	STAllowance* _allowance;
	NSObject*<STRootViewModelCoordinator> _coordinator;
	PSSpecifier* _timeGroupSpecifier;
	PSSpecifier* _timeSpecifier;
	PSSpecifier* _timePickerSpecifier;
	PSSpecifier* _customizeDaysSpecifier;
	PSSpecifier* _selectedTimeSpecifier;
	NSArray* _budgetedItemSpecifiers;
	UIColor* _defaultTimeCellDetailTextColor;

}

@property (nonatomic,retain) PSSpecifier * timeGroupSpecifier;                                         //@synthesize timeGroupSpecifier=_timeGroupSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * timeSpecifier;                                              //@synthesize timeSpecifier=_timeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * timePickerSpecifier;                                        //@synthesize timePickerSpecifier=_timePickerSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * customizeDaysSpecifier;                                     //@synthesize customizeDaysSpecifier=_customizeDaysSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * selectedTimeSpecifier;                                      //@synthesize selectedTimeSpecifier=_selectedTimeSpecifier - In the implementation block
@property (nonatomic,retain) NSArray * budgetedItemSpecifiers;                                         //@synthesize budgetedItemSpecifiers=_budgetedItemSpecifiers - In the implementation block
@property (assign) BOOL didDeleteAllowance;                                                            //@synthesize didDeleteAllowance=_didDeleteAllowance - In the implementation block
@property (nonatomic,retain) UIColor * defaultTimeCellDetailTextColor;                                 //@synthesize defaultTimeCellDetailTextColor=_defaultTimeCellDetailTextColor - In the implementation block
@property (readonly) BOOL shouldShowCompatibilityAlert; 
@property (assign,nonatomic,__weak) id<STAllowanceDetailListControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) STAllowance * allowance;                                                    //@synthesize allowance=_allowance - In the implementation block
@property (assign,nonatomic) BOOL isSetupController;                                                   //@synthesize isSetupController=_isSetupController - In the implementation block
@property (assign) BOOL useBackButton;                                                                 //@synthesize useBackButton=_useBackButton - In the implementation block
@property (assign,nonatomic) BOOL creatingNewAllowance;                                                //@synthesize creatingNewAllowance=_creatingNewAllowance - In the implementation block
@property (nonatomic,readonly) NSObject*<STRootViewModelCoordinator> coordinator;                      //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<STAllowanceDetailListControllerDelegate>)delegate;
-(void)setDelegate:(id<STAllowanceDetailListControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willResignActive;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSObject*<STRootViewModelCoordinator>)coordinator;
-(id)initWithCoordinator:(id)arg1 ;
-(STAllowance *)allowance;
-(void)setAllowance:(STAllowance *)arg1 ;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)datePickerChanged:(id)arg1 ;
-(id)datePickerForSpecifier:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(PSSpecifier *)timeSpecifier;
-(void)saveButtonTapped:(id)arg1 ;
-(void)setTimeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)timePickerSpecifier;
-(void)setTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(BOOL)isSetupController;
-(BOOL)useBackButton;
-(void)updateSaveButton;
-(void)showOrHideCustomizeDaysSpecifier;
-(UIColor *)defaultTimeCellDetailTextColor;
-(void)setDefaultTimeCellDetailTextColor:(UIColor *)arg1 ;
-(void)setSelectedTimeSpecifier:(PSSpecifier *)arg1 ;
-(void)_setAllowanceEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_allowanceEnabled:(id)arg1 ;
-(id)timeFooterText;
-(void)setTimeGroupSpecifier:(PSSpecifier *)arg1 ;
-(id)budgetTime;
-(void)showCustomizeDaysController:(id)arg1 ;
-(void)setCustomizeDaysSpecifier:(PSSpecifier *)arg1 ;
-(id)createBudgetedItemSpecifiers;
-(void)setBudgetedItemSpecifiers:(NSArray *)arg1 ;
-(void)confirmDeletion:(id)arg1 ;
-(BOOL)creatingNewAllowance;
-(id)atEndOfLimitFooterText;
-(void)_setAskForMoreTime:(id)arg1 specifier:(id)arg2 ;
-(id)_askForMoreTime:(id)arg1 ;
-(void)_editListButtonPressed:(id)arg1 ;
-(BOOL)hasSetBudgetTimeOrCustomSchedule;
-(void)_showOrHidePickerSpecifierForSpecifier:(id)arg1 highlight:(BOOL)arg2 ;
-(BOOL)didDeleteAllowance;
-(PSSpecifier *)customizeDaysSpecifier;
-(BOOL)hasSetBudgetTime;
-(PSSpecifier *)selectedTimeSpecifier;
-(NSArray *)budgetedItemSpecifiers;
-(void)deleteAllowance:(id)arg1 ;
-(void)setDidDeleteAllowance:(BOOL)arg1 ;
-(id)_categoryDetailText:(id)arg1 ;
-(BOOL)shouldShowCompatibilityAlert;
-(void)customizeDaysListController:(id)arg1 didFinishEditingTimeByDay:(id)arg2 ;
-(void)setIsSetupController:(BOOL)arg1 ;
-(void)setUseBackButton:(BOOL)arg1 ;
-(void)setCreatingNewAllowance:(BOOL)arg1 ;
-(PSSpecifier *)timeGroupSpecifier;
@end

