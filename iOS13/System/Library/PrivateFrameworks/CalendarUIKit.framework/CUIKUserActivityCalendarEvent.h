/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(unsigned long long)view;
-(id)initWithEvent:(id)arg1 view:(unsigned long long)arg2 ;
-(void)updateActivity:(id)arg1 ;
-(id)initWithEvent:(id)arg1 view:(unsigned long long)arg2 forceLocal:(BOOL)arg3 ;
-(id)eventFromStore:(id)arg1 ;
@end

