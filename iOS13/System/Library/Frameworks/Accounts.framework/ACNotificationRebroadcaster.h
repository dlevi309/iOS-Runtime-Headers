/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/


@interface ACNotificationRebroadcaster : NSObject
+(id)sharedRebroadcaster;
-(id)init;
-(void)dealloc;
-(void)_beginObservingAccountStoreDidChangeNotifications;
-(void)_endObservingAccountStoreDidChangeNotifications;
-(void)_accountStoreDidChange:(id)arg1 ;
@end

