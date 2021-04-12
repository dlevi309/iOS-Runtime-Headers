/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@interface NotificationRelay : NSObject {

	BOOL _refreshManagers;

}

@property (assign,nonatomic) BOOL refreshManagers;              //@synthesize refreshManagers=_refreshManagers - In the implementation block
+(id)sharedRelay;
-(id)init;
-(void)relayFrameworkNotification:(id)arg1 ;
-(BOOL)refreshManagers;
-(void)refreshManagersForPreferences:(BOOL)arg1 localNotifications:(BOOL)arg2 ;
-(void)setRefreshManagers:(BOOL)arg1 ;
@end

