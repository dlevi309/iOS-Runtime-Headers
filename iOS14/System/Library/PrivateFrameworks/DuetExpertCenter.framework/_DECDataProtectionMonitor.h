/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)encryptedDataAvailability;
-(id)init;
-(id<_DECDataProtectionMonitorDelegate>)delegate;
-(BOOL)unlockedSinceBoot;
-(long long)dataProtectionStatus;
-(void)setDelegate:(id<_DECDataProtectionMonitorDelegate>)arg1 ;
-(void)setDataProtectionStatus:(long long)arg1 ;
-(void)_registerForKeyBagNotifications;
-(void)handleUnlockedSinceBoot;
-(BOOL)dataProtectionEnabled;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)handkeKeybagLockStatusChange:(long long)arg1 ;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(void)dealloc;
@end

