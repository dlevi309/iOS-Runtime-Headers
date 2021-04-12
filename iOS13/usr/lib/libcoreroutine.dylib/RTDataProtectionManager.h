/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotifier.h>

@class RTDarwinNotificationHelper, RTKeybagMonitor;

@interface RTDataProtectionManager : RTNotifier {

	BOOL _unlockedSinceBoot;
	RTDarwinNotificationHelper* _notificationHelper;
	RTKeybagMonitor* _keybagMonitor;
	long long _encryptedDataAvailability;

}

@property (nonatomic,retain) RTDarwinNotificationHelper * notificationHelper;              //@synthesize notificationHelper=_notificationHelper - In the implementation block
@property (nonatomic,retain) RTKeybagMonitor * keybagMonitor;                              //@synthesize keybagMonitor=_keybagMonitor - In the implementation block
@property (assign,nonatomic) long long encryptedDataAvailability;                          //@synthesize encryptedDataAvailability=_encryptedDataAvailability - In the implementation block
@property (assign,nonatomic) BOOL unlockedSinceBoot;                                       //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
+(id)dataProtectionLockStateToString:(long long)arg1 ;
+(id)encryptedDataAvailabilityToString:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(long long)encryptedDataAvailability;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)handleUnlockedSinceBoot;
-(BOOL)unlockedSinceBoot;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithKeybagMonitor:(id)arg1 notificationHelper:(id)arg2 ;
-(RTDarwinNotificationHelper *)notificationHelper;
-(void)setNotificationHelper:(RTDarwinNotificationHelper *)arg1 ;
-(RTKeybagMonitor *)keybagMonitor;
-(void)handleKeybagLockStatusChange:(long long)arg1 ;
-(void)setKeybagMonitor:(RTKeybagMonitor *)arg1 ;
@end

