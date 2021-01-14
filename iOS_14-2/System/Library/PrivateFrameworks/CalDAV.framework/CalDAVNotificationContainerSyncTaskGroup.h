/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVContainerSyncTaskGroup.h>

@class NSSet;

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {

	NSSet* _notificationTypeNamesToFetch;

}

@property (nonatomic,retain) NSSet * notificationTypeNamesToFetch;              //@synthesize notificationTypeNamesToFetch=_notificationTypeNamesToFetch - In the implementation block
-(id)copyAdditionalResourcePropertiesToFetch;
-(id)copyGetTaskWithURL:(id)arg1 ;
-(BOOL)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2 ;
-(NSSet *)notificationTypeNamesToFetch;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5 ;
-(void)setNotificationTypeNamesToFetch:(NSSet *)arg1 ;
@end

