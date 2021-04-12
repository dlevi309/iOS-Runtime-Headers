/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)specifiers;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)significantTimeChange:(id)arg1 ;
-(void)datePickerChanged:(id)arg1 ;
-(void)localeChanged:(id)arg1 ;
-(void)dealloc;
-(id)currentTimeString;
-(void)newCarrierNotification;
-(void)effectiveSettingsChanged:(id)arg1 ;
-(void)loadTimeZoneController:(id)arg1 ;
-(void)setTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)timePickerSpecifier;
-(PSGWallClockMinuteTimer *)minuteTimer;
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
-(void)setAutomaticTimeFooter;
-(id)currentDateString;
-(id)valueForTime:(id)arg1 ;
-(BOOL)shouldDisplayTimezoneSpinner;
-(id)makeTimePickerSpecifier;
-(id)is24HourTime:(id)arg1 ;
-(void)reloadTimezone;
-(void)setTimeZoneValue:(id)arg1 specifier:(id)arg2 ;
-(void)setUseAutomaticTime:(id)arg1 specifier:(id)arg2 ;
-(id)isShowingDateInStatusBar:(id)arg1 ;
-(void)setShowDateInStatusBar:(id)arg1 specifier:(id)arg2 ;
-(id)isShowingAMPMInStatusBar:(id)arg1 ;
-(void)setShowAMPMInStatusBar:(id)arg1 specifier:(id)arg2 ;
-(void)set24HourTime:(id)arg1 specifier:(id)arg2 ;
-(id)timeZoneValue:(id)arg1 ;
@end

