/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVContainerSyncTaskGroup.h>

@class NSSet;

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {

	NSSet* _notificationTypeNamesToFetch;

}

@property (nonatomic,retain) NSSet * notificationTypeNamesToFetch;              //@synthesize notificationTypeNamesToFetch=_notificationTypeNamesToFetch - In the implementation block
-(id)copyGetTaskWithURL:(id)arg1 ;
-(BOOL)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2 ;
-(id)copyAdditionalResourcePropertiesToFetch;
-(NSSet *)notificationTypeNamesToFetch;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5 ;
-(void)setNotificationTypeNamesToFetch:(NSSet *)arg1 ;
@end

