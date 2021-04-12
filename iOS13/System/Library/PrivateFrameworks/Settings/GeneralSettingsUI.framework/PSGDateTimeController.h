/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <GeneralSettingsUI/GeneralSettingsUI-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSDateTimePickerCellDelegate.h>

@class NSIndexPath, NSTimer, PSSpecifier, PSGWallClockMinuteTimer;

@interface PSGDateTimeController : PSListController <PSDateTimePickerCellDelegate> {

	NSIndexPath* _setDateAndTimeIndexPath;
	NSTimer* _timer;
	BOOL _localeForces24HourTime;
	CFDateFormatterRef _dateFormatter;
	CFDateFormatterRef _timeFormatter;
	PSSpecifier* _timeZoneSpecifier;
	PSSpecifier* _timePickerSpecifier;
	PSSpecifier* _currentTimeSpecifier;
	PSGWallClockMinuteTimer* _minuteTimer;
	PSSpecifier* _ampmToggleSpecifier;

}

@property (nonatomic,retain) PSGWallClockMinuteTimer * minuteTimer;              //@synthesize minuteTimer=_minuteTimer - In the implementation block
@property (nonatomic,retain) PSSpecifier * ampmToggleSpecifier;                  //@synthesize ampmToggleSpecifier=_ampmToggleSpecifier - In the implementation block
@property (retain) PSSpecifier * timeZoneSpecifier;                              //@synthesize timeZoneSpecifier=_timeZoneSpecifier - In the implementation block
@property (retain) PSSpecifier * timePickerSpecifier;                            //@synthesize timePickerSpecifier=_timePickerSpecifier - In the implementation block
@property (retain) PSSpecifier * currentTimeSpecifier;                           //@synthesize currentTimeSpecifier=_currentTimeSpecifier - In the implementation block
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)datePickerChanged:(id)arg1 ;
-(void)localeChanged:(id)arg1 ;
-(void)effectiveSettingsChanged:(id)arg1 ;
-(void)newCarrierNotification;
-(PSGWallClockMinuteTimer *)minuteTimer;
-(void)significantTimeChange:(id)arg1 ;
-(void)_createDateTimeFormatters;
-(void)_updateCurrentTime;
-(void)setMinuteTimer:(PSGWallClockMinuteTimer *)arg1 ;
-(void)setTimeZoneSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)timeZoneSpecifier;
-(void)setAmpmToggleSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)ampmToggleSpecifier;
-(id)useAutomaticTime:(id)arg1 ;
-(void)_setSpecifier:(id)arg1 valueEnabled:(BOOL)arg2 ;
-(PSSpecifier *)currentTimeSpecifier;
-(id)makeCurrentTimeSpecifier;
-(void)setCurrentTimeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)timePickerSpecifier;
-(void)setAutomaticTimeFooter;
-(id)currentDateString;
-(id)valueForTime:(id)arg1 ;
-(BOOL)shouldDisplayTimezoneSpinner;
-(id)makeTimePickerSpecifier;
-(void)setTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(id)is24HourTime:(id)arg1 ;
-(void)reloadTimezone;
-(id)currentTimeString;
-(void)setTimeZoneValue:(id)arg1 specifier:(id)arg2 ;
-(void)setUseAutomaticTime:(id)arg1 specifier:(id)arg2 ;
-(id)isShowingDateInStatusBar:(id)arg1 ;
-(void)setShowDateInStatusBar:(id)arg1 specifier:(id)arg2 ;
-(id)isShowingAMPMInStatusBar:(id)arg1 ;
-(void)setShowAMPMInStatusBar:(id)arg1 specifier:(id)arg2 ;
-(void)set24HourTime:(id)arg1 specifier:(id)arg2 ;
-(id)timeZoneValue:(id)arg1 ;
-(void)loadTimeZoneController:(id)arg1 ;
@end

