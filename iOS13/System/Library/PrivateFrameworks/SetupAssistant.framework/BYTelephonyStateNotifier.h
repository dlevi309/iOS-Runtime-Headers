/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@interface BYTelephonyStateNotifier : NSObject {

	int _simUnlockNotificationToken;

}

@property (assign,nonatomic) int simUnlockNotificationToken;              //@synthesize simUnlockNotificationToken=_simUnlockNotificationToken - In the implementation block
+(unsigned long long)retrieveSIMUnlockStateFromToken:(int)arg1 ;
-(void)dealloc;
-(void)_beginObservingWithNotificationQueue:(id)arg1 notificationBlock:(/*^block*/id)arg2 ;
-(void)_endObservingState;
-(int)simUnlockNotificationToken;
-(void)setSimUnlockNotificationToken:(int)arg1 ;
-(id)initWithNotificationQueue:(id)arg1 notificationBlock:(/*^block*/id)arg2 ;
-(id)initForNotifying;
-(unsigned long long)currentSIMUnlockState;
-(void)notifySIMUnlockStateChangedTo:(unsigned long long)arg1 ;
@end

