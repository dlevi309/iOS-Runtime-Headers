/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

#import <DACalDAV/MobileCalDAVCalendar.h>

@class CalDiagNotificationCollectionSync;

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar {

	CalDiagNotificationCollectionSync* _notificationCollectionSyncDiagnostics;

}

@property (nonatomic,retain) CalDiagNotificationCollectionSync * notificationCollectionSyncDiagnostics;              //@synthesize notificationCollectionSyncDiagnostics=_notificationCollectionSyncDiagnostics - In the implementation block
-(void)clearEventChanges;
-(void)prepareSyncActionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 principal:(id)arg3 title:(id)arg4 ;
-(void*)_copyNotificationWithExternalID:(id)arg1 ;
-(void*)_copyNotificationWithUniqueIdentifier:(id)arg1 inCalendar:(void*)arg2 orStore:(void*)arg3 ;
-(BOOL)_handleInviteNotification:(id)arg1 withResource:(id)arg2 uid:(id)arg3 ;
-(void)_handleInviteReply:(id)arg1 withResource:(id)arg2 owningNotification:(id)arg3 uid:(id)arg4 ;
-(BOOL)_handleResourceChanged:(id)arg1 withResource:(id)arg2 uid:(id)arg3 ;
-(CalDiagNotificationCollectionSync *)notificationCollectionSyncDiagnostics;
-(void*)_copyCalendarForReplyItem:(id)arg1 ;
-(BOOL)setEtag:(id)arg1 forItemAtURL:(id)arg2 ;
-(BOOL)_removeCalendarItemWithURL:(id)arg1 ;
-(BOOL)shouldCalendarBeHidden;
-(BOOL)isNotification;
-(void*)_copyCalItemFromAnyCalendarWithExternalID:(id)arg1 ;
-(void*)_createResourceChange:(id)arg1 withType:(unsigned)arg2 forNotification:(void*)arg3 withRecurrenceID:(id)arg4 ;
-(void*)_createResourceChange:(id)arg1 withType:(unsigned)arg2 forNotification:(void*)arg3 ;
-(id)_changedAttributesFromCalendarChanges:(id)arg1 ;
-(void)setNotificationCollectionSyncDiagnostics:(CalDiagNotificationCollectionSync *)arg1 ;
-(BOOL)setScheduleTag:(id)arg1 forItemAtURL:(id)arg2 ;
-(BOOL)setURL:(id)arg1 forResourceWithUUID:(id)arg2 ;
-(id)etagsForItemURLs:(id)arg1 ;
-(BOOL)updateResourcesFromServer:(id)arg1 ;
-(id)allItemURLs;
-(Class)appSpecificCalendarItemClass;
-(void)prepareMergeSyncActionsWithCompletionBlock:(/*^block*/id)arg1 ;
@end

