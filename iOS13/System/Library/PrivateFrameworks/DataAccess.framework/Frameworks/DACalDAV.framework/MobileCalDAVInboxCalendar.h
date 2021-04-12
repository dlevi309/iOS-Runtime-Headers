/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

#import <DACalDAV/MobileCalDAVCalendar.h>

@class CalDiagInboxCollectionSync;

@interface MobileCalDAVInboxCalendar : MobileCalDAVCalendar {

	CalDiagInboxCollectionSync* _inboxCollectionSyncDiagnostics;

}

@property (nonatomic,retain) CalDiagInboxCollectionSync * inboxCollectionSyncDiagnostics;              //@synthesize inboxCollectionSyncDiagnostics=_inboxCollectionSyncDiagnostics - In the implementation block
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 principal:(id)arg3 title:(id)arg4 ;
-(BOOL)shouldCalendarBeHidden;
-(BOOL)isScheduleInbox;
-(id)etagsForItemURLs:(id)arg1 ;
-(BOOL)updateResourcesFromServer:(id)arg1 ;
-(BOOL)deleteResourcesAtURLs:(id)arg1 ;
-(id)allItemURLs;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(void*)_copyEventActionWithURL:(id)arg1 ;
-(void)setETag:(id)arg1 forInvitationAtURL:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(CalDiagInboxCollectionSync *)inboxCollectionSyncDiagnostics;
-(BOOL)_removeInvitationWithURL:(id)arg1 ;
-(void)setInboxCollectionSyncDiagnostics:(CalDiagInboxCollectionSync *)arg1 ;
@end

