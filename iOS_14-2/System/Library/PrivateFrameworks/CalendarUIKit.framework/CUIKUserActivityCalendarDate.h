/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSDate;

@interface CUIKUserActivityCalendarDate : CUIKUserActivity {

	NSDate* _date;
	unsigned long long _view;

}

@property (nonatomic,readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) BOOL isTomorrow; 
-(BOOL)isTomorrow;
-(id)initWithDate:(id)arg1 view:(unsigned long long)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithDate:(id)arg1 view:(unsigned long long)arg2 calendar:(id)arg3 ;
-(unsigned long long)view;
-(id)dictionary;
-(void)updateActivity:(id)arg1 ;
-(NSDate *)date;
@end

