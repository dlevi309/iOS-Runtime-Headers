/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

