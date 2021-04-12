/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol BBSyncServiceDelegate <NSObject>
@required
-(void)syncService:(id)arg1 receivedDismissalDictionaries:(id)arg2 dismissalIDs:(id)arg3 inSection:(id)arg4 forFeeds:(unsigned long long)arg5;
-(BOOL)syncService:(id)arg1 shouldAbortDelayedDismissalForBulletin:(id)arg2;
-(id)syncService:(id)arg1 universalSectionIdentifierForSectionIdentifier:(id)arg2;
-(id)syncService:(id)arg1 sectionIdentifierForUniversalSectionIdentifier:(id)arg2;

@end

