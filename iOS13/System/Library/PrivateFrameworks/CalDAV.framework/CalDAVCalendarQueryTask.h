/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVPropFindTask.h>

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask {

	BOOL _syncEvents;
	BOOL _syncTodos;
	NSDateComponents* _eventFilterStartDate;
	NSDateComponents* _eventFilterEndDate;

}

@property (assign,nonatomic) BOOL syncEvents;                                      //@synthesize syncEvents=_syncEvents - In the implementation block
@property (assign,nonatomic) BOOL syncTodos;                                       //@synthesize syncTodos=_syncTodos - In the implementation block
@property (nonatomic,retain) NSDateComponents * eventFilterStartDate;              //@synthesize eventFilterStartDate=_eventFilterStartDate - In the implementation block
@property (nonatomic,retain) NSDateComponents * eventFilterEndDate;                //@synthesize eventFilterEndDate=_eventFilterEndDate - In the implementation block
-(id)description;
-(id)httpMethod;
-(id)requestBody;
-(NSDateComponents *)eventFilterStartDate;
-(NSDateComponents *)eventFilterEndDate;
-(void)setSyncEvents:(BOOL)arg1 ;
-(void)setSyncTodos:(BOOL)arg1 ;
-(BOOL)syncTodos;
-(BOOL)syncEvents;
-(void)setEventFilterStartDate:(NSDateComponents *)arg1 ;
-(void)setEventFilterEndDate:(NSDateComponents *)arg1 ;
-(id)_icsDateStringForNSDateComponents:(id)arg1 ;
-(void)_appendTimeRangeFilterToXMLData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)_appendComponentFiltersToXMLData:(id)arg1 ;
@end

