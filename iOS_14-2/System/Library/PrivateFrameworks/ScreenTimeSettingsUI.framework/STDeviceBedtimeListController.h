/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/STUIDateTimePickerCellDelegate.h>

@protocol STDeviceBedtimeListControllerDelegate, STRootViewModelCoordinator;
@class STDeviceBedtime, STUIUser, NSArray, PSSpecifier, NSString;

@interface STDeviceBedtimeListController : PSListController <STUIDateTimePickerCellDelegate> {

	BOOL _canAskForMoreTime;
	id<STDeviceBedtimeListControllerDelegate> _delegate;
	id<STRootViewModelCoordinator> _coordinator;
	STDeviceBedtime* _bedtime;
	STUIUser* _affectedUser;
	NSArray* _orderedWeekdayIndexes;
	NSArray* _orderedLocalizedWeekdayNames;
	PSSpecifier* _deviceBedtimeSpecifier;
	PSSpecifier* _informativeTextGroupSpecifier;
	PSSpecifier* _everyDaySpecifier;
	PSSpecifier* _customizeDaysSpecifier;
	PSSpecifier* _startTimeSpecifier;
	PSSpecifier* _endTimeSpecifier;
	PSSpecifier* _startTimePickerSpecifier;
	PSSpecifier* _endTimePickerSpecifier;
	NSArray* _weekdaySpecifiers;
	PSSpecifier* _selectedTimeSpecifier;
	PSSpecifier* _atBedtimeGroupSpecifier;
	PSSpecifier* _atBedtimeSpecifier;

}

@property (readonly) NSArray * orderedWeekdayIndexes;                                                //@synthesize orderedWeekdayIndexes=_orderedWeekdayIndexes - In the implementation block
@property (readonly) NSArray * orderedLocalizedWeekdayNames;                                         //@synthesize orderedLocalizedWeekdayNames=_orderedLocalizedWeekdayNames - In the implementation block
@property (nonatomic,retain) PSSpecifier * deviceBedtimeSpecifier;                                   //@synthesize deviceBedtimeSpecifier=_deviceBedtimeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * informativeTextGroupSpecifier;                            //@synthesize informativeTextGroupSpecifier=_informativeTextGroupSpecifier - In the implementation block
@property (retain) PSSpecifier * everyDaySpecifier;                                                  //@synthesize everyDaySpecifier=_everyDaySpecifier - In the implementation block
@property (retain) PSSpecifier * customizeDaysSpecifier;                                             //@synthesize customizeDaysSpecifier=_customizeDaysSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * startTimeSpecifier;                                       //@synthesize startTimeSpecifier=_startTimeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * endTimeSpecifier;                                         //@synthesize endTimeSpecifier=_endTimeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * startTimePickerSpecifier;                                 //@synthesize startTimePickerSpecifier=_startTimePickerSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * endTimePickerSpecifier;                                   //@synthesize endTimePickerSpecifier=_endTimePickerSpecifier - In the implementation block
@property (retain) NSArray * weekdaySpecifiers;                                                      //@synthesize weekdaySpecifiers=_weekdaySpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * selectedTimeSpecifier;                                    //@synthesize selectedTimeSpecifier=_selectedTimeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * atBedtimeGroupSpecifier;                                  //@synthesize atBedtimeGroupSpecifier=_atBedtimeGroupSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * atBedtimeSpecifier;                                       //@synthesize atBedtimeSpecifier=_atBedtimeSpecifier - In the implementation block
@property (assign,nonatomic,__weak) id<STDeviceBedtimeListControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<STRootViewModelCoordinator> coordinator;                             //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,copy) STDeviceBedtime * bedtime;                                                //@synthesize bedtime=_bedtime - In the implementation block
@property (nonatomic,retain) STUIUser * affectedUser;                                                //@synthesize affectedUser=_affectedUser - In the implementation block
@property (assign,nonatomic) BOOL canAskForMoreTime;                                                 //@synthesize canAskForMoreTime=_canAskForMoreTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)setCoordinator:(id<STRootViewModelCoordinator>)arg1 ;
-(id<STDeviceBedtimeListControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(STDeviceBedtime *)bedtime;
-(void)setBedtime:(STDeviceBedtime *)arg1 ;
-(void)setDelegate:(id<STDeviceBedtimeListControllerDelegate>)arg1 ;
-(void)willResignActive;
-(void)datePickerChanged:(id)arg1 ;
-(id)datePickerForSpecifier:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(id<STRootViewModelCoordinator>)coordinator;
-(NSArray *)weekdaySpecifiers;
-(void)setWeekdaySpecifiers:(NSArray *)arg1 ;
-(void)setSelectedTimeSpecifier:(PSSpecifier *)arg1 ;
-(id)timeFooterText;
-(void)setCustomizeDaysSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)customizeDaysSpecifier;
-(PSSpecifier *)selectedTimeSpecifier;
-(PSSpecifier *)informativeTextGroupSpecifier;
-(void)setInformativeTextGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)setDeviceBedtimeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)deviceBedtimeSpecifier;
-(void)setAffectedUser:(STUIUser *)arg1 ;
-(void)setCanAskForMoreTime:(BOOL)arg1 ;
-(void)_didEndEditingDailySchedule:(id)arg1 ;
-(PSSpecifier *)startTimeSpecifier;
-(PSSpecifier *)startTimePickerSpecifier;
-(PSSpecifier *)endTimeSpecifier;
-(PSSpecifier *)endTimePickerSpecifier;
-(void)_showOrHidePickerSpecifierForSpecifier:(id)arg1 ;
-(void)_didFinishEditingBedtime;
-(PSSpecifier *)everyDaySpecifier;
-(void)setDeviceBedtimeEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)deviceBedtimeEnabled:(id)arg1 ;
-(void)setEveryDaySpecifier:(PSSpecifier *)arg1 ;
-(id)_simpleStartTime:(id)arg1 ;
-(void)setStartTimeSpecifier:(PSSpecifier *)arg1 ;
-(id)_simpleEndTime:(id)arg1 ;
-(void)setEndTimeSpecifier:(PSSpecifier *)arg1 ;
-(NSArray *)orderedLocalizedWeekdayNames;
-(id)_customScheduleTime:(id)arg1 ;
-(void)_showCustomizeDailyScheduleListController:(id)arg1 ;
-(void)setStartTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(void)setEndTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(BOOL)canAskForMoreTime;
-(id)atDowntimeFooterText;
-(void)setAtBedtimeGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)atBedtimeGroupSpecifier;
-(void)setAskForMoreTime:(id)arg1 specifier:(id)arg2 ;
-(id)askForMoreTime:(id)arg1 ;
-(void)setAtBedtimeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)atBedtimeSpecifier;
-(NSArray *)orderedWeekdayIndexes;
-(STUIUser *)affectedUser;
@end

