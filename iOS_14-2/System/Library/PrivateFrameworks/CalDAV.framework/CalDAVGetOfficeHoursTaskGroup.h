/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPropFindTaskDelegate.h>

@class ICSDocument, NSURL, CoreDAVPropFindTask, NSString;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {

	ICSDocument* _calendarAvailability;
	NSURL* _inboxURL;
	CoreDAVPropFindTask* _fetchTask;

}

@property (nonatomic,retain) NSURL * inboxURL;                                   //@synthesize inboxURL=_inboxURL - In the implementation block
@property (nonatomic,retain) CoreDAVPropFindTask * fetchTask;                    //@synthesize fetchTask=_fetchTask - In the implementation block
@property (nonatomic,retain) ICSDocument * calendarAvailability;                 //@synthesize calendarAvailability=_calendarAvailability - In the implementation block
@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_finishWithError:(id)arg1 ;
-(NSURL *)inboxURL;
-(void)setInboxURL:(NSURL *)arg1 ;
-(void)startTaskGroup;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)setFetchTask:(CoreDAVPropFindTask *)arg1 ;
-(CoreDAVPropFindTask *)fetchTask;
-(void)setCalendarAvailability:(ICSDocument *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 taskManager:(id)arg3 ;
-(ICSDocument *)calendarAvailability;
@end

