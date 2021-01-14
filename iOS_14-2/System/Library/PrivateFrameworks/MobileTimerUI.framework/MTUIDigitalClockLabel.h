/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)forceSetHour:(long long)arg1 minute:(long long)arg2 ;
-(BOOL)setHour:(long long)arg1 minute:(long long)arg2 ;
-(void)significantTimeChange:(id)arg1 ;
-(void)refreshUI;
-(void)setTimeLabelText:(id)arg1 ;
-(void)resetFontSizes;
@end

