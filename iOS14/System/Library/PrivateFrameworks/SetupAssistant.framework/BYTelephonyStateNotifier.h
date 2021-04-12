/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@interface BYTelephonyStateNotifier : NSObject {

	int _simUnlockNotificationToken;

}

@property (assign,nonatomic) int simUnlockNotificationToken;              //@synthesize simUnlockNotificationToken=_simUnlockNotificationToken - In the implementation block
+(unsigned long long)retrieveSIMUnlockStateFromToken:(int)arg1 ;
-(id)initWithNotificationQueue:(id)arg1 notificationBlock:(/*^block*/id)arg2 ;
-(void)notifySIMUnlockStateChangedTo:(unsigned long long)arg1 ;
-(void)setSimUnlockNotificationToken:(int)arg1 ;
-(id)initForNotifying;
-(int)simUnlockNotificationToken;
-(void)_beginObservingWithNotificationQueue:(id)arg1 notificationBlock:(/*^block*/id)arg2 ;
-(void)_endObservingState;
-(unsigned long long)currentSIMUnlockState;
-(void)dealloc;
@end

