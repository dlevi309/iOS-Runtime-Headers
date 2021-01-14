/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSString, NSDate;

@interface CUIKUserActivityCalendarEvent : CUIKUserActivityWithSource {

	NSString* _title;
	NSString* _externalID;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _location;
	NSString* _relatedUniqueIdentifier;
	unsigned long long _view;

}

@property (nonatomic,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long view;              //@synthesize view=_view - In the implementation block
-(id)initWithEvent:(id)arg1 view:(unsigned long long)arg2 forceLocal:(BOOL)arg3 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)view;
-(id)eventFromStore:(id)arg1 ;
-(id)dictionary;
-(void)updateActivity:(id)arg1 ;
-(id)initWithEvent:(id)arg1 view:(unsigned long long)arg2 ;
-(NSString *)title;
@end

