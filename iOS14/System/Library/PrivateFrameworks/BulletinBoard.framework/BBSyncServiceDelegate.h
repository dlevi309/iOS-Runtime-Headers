/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol BBSyncServiceDelegate <NSObject>
@required
-(void)syncService:(id)arg1 receivedDismissalDictionaries:(id)arg2 dismissalIDs:(id)arg3 inSection:(id)arg4 forFeeds:(unsigned long long)arg5;
-(BOOL)syncService:(id)arg1 shouldAbortDelayedDismissalForBulletin:(id)arg2;
-(id)syncService:(id)arg1 universalSectionIdentifierForSectionIdentifier:(id)arg2;
-(id)syncService:(id)arg1 sectionIdentifiersForUniversalSectionIdentifier:(id)arg2;

@end

