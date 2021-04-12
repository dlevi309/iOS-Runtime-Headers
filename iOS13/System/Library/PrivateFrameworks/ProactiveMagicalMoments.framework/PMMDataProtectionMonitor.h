/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
*/


@protocol PMMDataProtectionMonitorDelegate;
#import <ProactiveMagicalMoments/ProactiveMagicalMoments-Structs.h>
@interface PMMDataProtectionMonitor : NSObject {

	id<PMMDataProtectionMonitorDelegate> _delegate;
	long long _encryptedDataAvailability;
	BOOL _unlockedSinceBoot;
	long long _dataProtectionStatus;
	opaque_pthread_rwlock_t _rwlock;

}

@property (assign,nonatomic,__weak) id<PMMDataProtectionMonitorDelegate> delegate; 
@property (nonatomic,readonly) long long encryptedDataAvailability; 
@property (nonatomic,readonly) BOOL unlockedSinceBoot; 
@property (nonatomic,readonly) long long dataProtectionStatus;                                  //@synthesize dataProtectionStatus=_dataProtectionStatus - In the implementation block
+(id)PMMDataProtectionMonitorDataProtectionStatus:(long long)arg1 ;
+(id)PMMDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)arg1 ;
+(id)PMMDataProtectionMonitorLockStateToString:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id<PMMDataProtectionMonitorDelegate>)delegate;
-(void)setDelegate:(id<PMMDataProtectionMonitorDelegate>)arg1 ;
-(void)_registerForKeyBagNotifications;
-(void)setDataProtectionStatus:(long long)arg1 ;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(long long)encryptedDataAvailability;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)handkeKeybagLockStatusChange:(long long)arg1 ;
-(void)handleUnlockedSinceBoot;
-(BOOL)unlockedSinceBoot;
-(BOOL)dataProtectionEnabled;
-(long long)dataProtectionStatus;
@end

