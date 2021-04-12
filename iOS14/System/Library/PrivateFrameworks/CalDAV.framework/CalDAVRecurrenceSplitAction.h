/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isFloating;
-(BOOL)isAllDay;
-(NSURL *)resourceURL;
-(id)initWithResourceURL:(id)arg1 recurrenceDate:(id)arg2 uidForCreatedSeries:(id)arg3 floating:(BOOL)arg4 allday:(BOOL)arg5 ;
-(NSString *)uidForCreatedSeries;
-(NSDate *)recurrenceDate;
@end

