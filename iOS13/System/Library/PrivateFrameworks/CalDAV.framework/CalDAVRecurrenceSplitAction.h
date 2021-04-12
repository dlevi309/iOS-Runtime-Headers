/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/


@class NSURL, NSDate, NSString;

@interface CalDAVRecurrenceSplitAction : NSObject {

	BOOL _isFloating;
	BOOL _isAllDay;
	NSURL* _resourceURL;
	NSDate* _recurrenceDate;
	NSString* _uidForCreatedSeries;

}

@property (nonatomic,readonly) NSURL * resourceURL;                         //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,readonly) NSDate * recurrenceDate;                     //@synthesize recurrenceDate=_recurrenceDate - In the implementation block
@property (nonatomic,readonly) NSString * uidForCreatedSeries;              //@synthesize uidForCreatedSeries=_uidForCreatedSeries - In the implementation block
@property (nonatomic,readonly) BOOL isFloating;                             //@synthesize isFloating=_isFloating - In the implementation block
@property (nonatomic,readonly) BOOL isAllDay;                               //@synthesize isAllDay=_isAllDay - In the implementation block
-(NSURL *)resourceURL;
-(BOOL)isFloating;
-(BOOL)isAllDay;
-(NSDate *)recurrenceDate;
-(id)initWithResourceURL:(id)arg1 recurrenceDate:(id)arg2 uidForCreatedSeries:(id)arg3 floating:(BOOL)arg4 allday:(BOOL)arg5 ;
-(NSString *)uidForCreatedSeries;
@end

