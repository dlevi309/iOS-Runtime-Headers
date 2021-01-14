/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(long long)encryptedDataAvailability;
-(id)init;
-(BOOL)unlockedSinceBoot;
-(void)handleUnlockedSinceBoot;
-(void)setNotificationHelper:(RTDarwinNotificationHelper *)arg1 ;
-(RTDarwinNotificationHelper *)notificationHelper;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(void)dealloc;
-(id)initWithKeybagMonitor:(id)arg1 notificationHelper:(id)arg2 ;
-(RTKeybagMonitor *)keybagMonitor;
-(void)handleKeybagLockStatusChange:(long long)arg1 ;
-(void)setKeybagMonitor:(RTKeybagMonitor *)arg1 ;
@end

