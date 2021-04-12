/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSURL, NSDate, NSString, CoreDAVResponseItem;

@interface CalDAVPostCalendarItemRecurrenceSplitTask : CoreDAVPropertyFindBaseTask {

	BOOL _isFloating;
	BOOL _isAllDay;
	NSURL* _resourceURL;
	NSDate* _recurrenceDate;
	NSString* _uidForCreatedSeries;
	NSString* _previousScheduleTag;
	NSString* _previousETag;
	NSURL* _postURLWithQuery;
	CoreDAVResponseItem* _updatedResponseItem;
	CoreDAVResponseItem* _createdResponseItem;

}

@property (nonatomic,retain) NSURL * postURLWithQuery;                               //@synthesize postURLWithQuery=_postURLWithQuery - In the implementation block
@property (nonatomic,retain) CoreDAVResponseItem * updatedResponseItem;              //@synthesize updatedResponseItem=_updatedResponseItem - In the implementation block
@property (nonatomic,retain) CoreDAVResponseItem * createdResponseItem;              //@synthesize createdResponseItem=_createdResponseItem - In the implementation block
@property (nonatomic,retain) NSURL * resourceURL;                                    //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,retain) NSDate * recurrenceDate;                                //@synthesize recurrenceDate=_recurrenceDate - In the implementation block
@property (nonatomic,retain) NSString * uidForCreatedSeries;                         //@synthesize uidForCreatedSeries=_uidForCreatedSeries - In the implementation block
@property (nonatomic,retain) NSString * previousScheduleTag;                         //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
@property (nonatomic,retain) NSString * previousETag;                                //@synthesize previousETag=_previousETag - In the implementation block
@property (assign,nonatomic) BOOL isFloating;                                        //@synthesize isFloating=_isFloating - In the implementation block
@property (assign,nonatomic) BOOL isAllDay;                                          //@synthesize isAllDay=_isAllDay - In the implementation block
-(id)description;
-(NSURL *)resourceURL;
-(id)url;
-(void)setResourceURL:(NSURL *)arg1 ;
-(BOOL)isFloating;
-(void)setIsFloating:(BOOL)arg1 ;
-(BOOL)isAllDay;
-(id)httpMethod;
-(NSDate *)recurrenceDate;
-(id)requestBody;
-(void)setIsAllDay:(BOOL)arg1 ;
-(id)additionalHeaderValues;
-(NSString *)uidForCreatedSeries;
-(void)setPreviousETag:(NSString *)arg1 ;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(id)updatedETag;
-(id)updatedScheduleTag;
-(void)setRecurrenceDate:(NSDate *)arg1 ;
-(id)_recurrenceDateString;
-(id)urlWithQuery;
-(NSString *)previousScheduleTag;
-(NSString *)previousETag;
-(void)_updateBothResponseItems;
-(id)_dataForItem:(id)arg1 ;
-(CoreDAVResponseItem *)updatedResponseItem;
-(id)_etagForItem:(id)arg1 ;
-(id)_scheduleTagForItem:(id)arg1 ;
-(id)_documentForItem:(id)arg1 ;
-(CoreDAVResponseItem *)createdResponseItem;
-(id)initWithResourceURL:(id)arg1 recurrenceDate:(id)arg2 floating:(BOOL)arg3 allday:(BOOL)arg4 ;
-(id)updatedICSDocument;
-(id)createdURL;
-(id)createdETag;
-(id)createdScheduleTag;
-(id)createdICSDocument;
-(id)createdICSData;
-(void)setUidForCreatedSeries:(NSString *)arg1 ;
-(NSURL *)postURLWithQuery;
-(void)setPostURLWithQuery:(NSURL *)arg1 ;
-(void)setUpdatedResponseItem:(CoreDAVResponseItem *)arg1 ;
-(void)setCreatedResponseItem:(CoreDAVResponseItem *)arg1 ;
@end

