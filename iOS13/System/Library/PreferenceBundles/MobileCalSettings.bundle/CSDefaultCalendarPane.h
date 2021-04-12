/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
*/

#import <MobileCalSettings/MobileCalSettings-Structs.h>
#import <Preferences/PSEditingPane.h>

@class EKEventStore, EKCalendarChooser;

@interface CSDefaultCalendarPane : PSEditingPane {

	EKEventStore* _store;
	EKCalendarChooser* _chooser;
	BOOL _dontSetDefaultCalendar;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)childViewControllerForHostingViewController;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(id)preferenceValue;
-(void)_updateCheckedCalendarForSource:(id)arg1 ;
-(BOOL)drawLabel;
@end

