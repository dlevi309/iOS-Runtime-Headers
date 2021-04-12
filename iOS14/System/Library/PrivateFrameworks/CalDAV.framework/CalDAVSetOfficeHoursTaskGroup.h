/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPropPatchTaskDelegate.h>

@class NSURL, ICSDocument, NSString;

@interface CalDAVSetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {

	NSURL* _inboxURL;
	ICSDocument* _calendarAvailability;

}

@property (nonatomic,retain) NSURL * inboxURL;                                   //@synthesize inboxURL=_inboxURL - In the implementation block
@property (nonatomic,retain) ICSDocument * calendarAvailability;                 //@synthesize calendarAvailability=_calendarAvailability - In the implementation block
@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)inboxURL;
-(void)setInboxURL:(NSURL *)arg1 ;
-(void)startTaskGroup;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)setCalendarAvailability:(ICSDocument *)arg1 ;
-(ICSDocument *)calendarAvailability;
-(id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 calendarAvailability:(id)arg3 taskManager:(id)arg4 ;
@end

