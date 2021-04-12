/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIsFloating:(BOOL)arg1 ;
-(BOOL)isFloating;
-(BOOL)isAllDay;
-(void)setResourceURL:(NSURL *)arg1 ;
-(void)setIsAllDay:(BOOL)arg1 ;
-(id)additionalHeaderValues;
-(id)url;
-(id)httpMethod;
-(id)description;
-(void)setPreviousETag:(NSString *)arg1 ;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(id)updatedETag;
-(id)updatedScheduleTag;
-(NSURL *)resourceURL;
-(NSString *)uidForCreatedSeries;
-(id)requestBody;
-(void)setRecurrenceDate:(NSDate *)arg1 ;
-(NSDate *)recurrenceDate;
-(NSString *)previousETag;
-(id)_recurrenceDateString;
-(id)urlWithQuery;
-(NSString *)previousScheduleTag;
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

