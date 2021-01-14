/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@interface NotificationRelay : NSObject {

	BOOL _refreshManagers;

}

@property (assign,nonatomic) BOOL refreshManagers;              //@synthesize refreshManagers=_refreshManagers - In the implementation block
+(id)sharedRelay;
-(id)init;
-(BOOL)refreshManagers;
-(void)relayFrameworkNotification:(id)arg1 ;
-(void)refreshManagersForPreferences:(BOOL)arg1 localNotifications:(BOOL)arg2 ;
-(void)setRefreshManagers:(BOOL)arg1 ;
@end

