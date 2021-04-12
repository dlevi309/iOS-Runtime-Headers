/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@protocol _DECDataProtectionMonitorDelegate;
#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
@interface _DECDataProtectionMonitor : NSObject {

	id<_DECDataProtectionMonitorDelegate> _delegate;
	long long _encryptedDataAvailability;
	BOOL _unlockedSinceBoot;
	long long _dataProtectionStatus;
	opaque_pthread_rwlock_t _rwlock;

}

@property (assign,nonatomic,__weak) id<_DECDataProtectionMonitorDelegate> delegate; 
@property (nonatomic,readonly) long long encryptedDataAvailability; 
@property (nonatomic,readonly) BOOL unlockedSinceBoot; 
@property (nonatomic,readonly) long long dataProtectionStatus;                                   //@synthesize dataProtectionStatus=_dataProtectionStatus - In the implementation block
+(id)_DECDataProtectionMonitorLockStateToString:(long long)arg1 ;
+(id)_DECDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)arg1 ;
+(id)_DECDataProtectionMonitorDataProtectionStatus:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id<_DECDataProtectionMonitorDelegate>)delegate;
-(void)setDelegate:(id<_DECDataProtectionMonitorDelegate>)arg1 ;
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

