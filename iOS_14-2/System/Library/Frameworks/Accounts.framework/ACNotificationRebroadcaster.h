/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/


@interface ACNotificationRebroadcaster : NSObject
+(id)sharedRebroadcaster;
-(id)init;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_endObservingAccountStoreDidChangeNotifications;
-(void)_beginObservingAccountStoreDidChangeNotifications;
-(void)dealloc;
@end

