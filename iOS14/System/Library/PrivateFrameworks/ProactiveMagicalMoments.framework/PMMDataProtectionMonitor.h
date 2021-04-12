/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)PMMDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)arg1 ;
+(id)PMMDataProtectionMonitorLockStateToString:(long long)arg1 ;
+(id)PMMDataProtectionMonitorDataProtectionStatus:(long long)arg1 ;
-(long long)encryptedDataAvailability;
-(id)init;
-(id<PMMDataProtectionMonitorDelegate>)delegate;
-(BOOL)unlockedSinceBoot;
-(long long)dataProtectionStatus;
-(void)setDelegate:(id<PMMDataProtectionMonitorDelegate>)arg1 ;
-(void)setDataProtectionStatus:(long long)arg1 ;
-(void)_registerForKeyBagNotifications;
-(void)handleUnlockedSinceBoot;
-(BOOL)dataProtectionEnabled;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)handkeKeybagLockStatusChange:(long long)arg1 ;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(void)dealloc;
@end

