/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/


@protocol CalDAVCalendarPropertyRefreshDelegate <CoreDAVTaskGroupDelegate>
@optional
-(BOOL)calendarRefreshShouldRetryMkCalendarForPrincipal:(id)arg1 calendar:(id)arg2 error:(id)arg3;
-(void)calendarRefreshFoundUpdatedContainerWithIgnoredEntityType:(id)arg1;
-(void)calendarRefreshFoundUpdatedSpecialContainer:(id)arg1;
-(void)calendarRefreshFoundDeletedContainerURL:(id)arg1;

@required
-(void)calendarRefreshForPrincipal:(id)arg1 completedWithNewCTags:(id)arg2 newSyncTokens:(id)arg3 calendarHomeSyncToken:(id)arg4 updatedCalendars:(id)arg5 error:(id)arg6;

@end

