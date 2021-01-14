/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/STUIDateTimePickerCellDelegate.h>

@protocol STCustomizeDaysListControllerDelegate;
@class NSDictionary, PSSpecifier, NSString;

@interface STCustomizeDaysListController : PSListController <STUIDateTimePickerCellDelegate> {

	id<STCustomizeDaysListControllerDelegate> _delegate;
	NSDictionary* _timeByDay;
	PSSpecifier* _timePickerSpecifier;
	PSSpecifier* _selectedDaySpecifier;

}

@property (nonatomic,retain) PSSpecifier * timePickerSpecifier;                                      //@synthesize timePickerSpecifier=_timePickerSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * selectedDaySpecifier;                                     //@synthesize selectedDaySpecifier=_selectedDaySpecifier - In the implementation block
@property (assign,nonatomic,__weak) id<STCustomizeDaysListControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * timeByDay;                                                 //@synthesize timeByDay=_timeByDay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id<STCustomizeDaysListControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setDelegate:(id<STCustomizeDaysListControllerDelegate>)arg1 ;
-(void)datePickerChanged:(id)arg1 ;
-(id)datePickerForSpecifier:(id)arg1 ;
-(void)setTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)timePickerSpecifier;
-(NSDictionary *)timeByDay;
-(void)setTimeByDay:(NSDictionary *)arg1 ;
-(void)setSelectedDaySpecifier:(PSSpecifier *)arg1 ;
-(id)_localizedDayNames;
-(id)budgetTime:(id)arg1 ;
-(PSSpecifier *)selectedDaySpecifier;
-(void)_showOrHidePickerSpecifierForSpecifier:(id)arg1 ;
-(id)_localizedDayOrder;
@end

