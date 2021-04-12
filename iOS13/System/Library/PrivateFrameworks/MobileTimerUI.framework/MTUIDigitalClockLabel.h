/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <MobileTimerUI/MTUIDateLabel.h>

@class NSCalendar, NSDate;

@interface MTUIDigitalClockLabel : MTUIDateLabel {

	NSCalendar* _calendar;
	NSDate* _baseDate;
	long long _hour;
	long long _minute;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)setHour:(long long)arg1 minute:(long long)arg2 ;
-(void)significantTimeChange:(id)arg1 ;
-(void)refreshUI;
-(void)resetFontSizes;
-(void)forceSetHour:(long long)arg1 minute:(long long)arg2 ;
-(void)setTimeLabelText:(id)arg1 ;
@end

