/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/


@protocol CalDAVCalendarPropertyRefreshDelegate <CoreDAVTaskGroupDelegate>
@optional
-(void)calendarRefreshFoundUpdatedContainerWithIgnoredEntityType:(id)arg1;
-(BOOL)calendarRefreshShouldRetryMkCalendarForPrincipal:(id)arg1 calendar:(id)arg2 error:(id)arg3;
-(void)calendarRefreshFoundUpdatedSpecialContainer:(id)arg1;
-(void)calendarRefreshFoundDeletedContainerURL:(id)arg1;

@required
-(void)calendarRefreshForPrincipal:(id)arg1 completedWithNewCTags:(id)arg2 newSyncTokens:(id)arg3 calendarHomeSyncToken:(id)arg4 updatedCalendars:(id)arg5 error:(id)arg6;

@end

