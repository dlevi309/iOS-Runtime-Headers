/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol OS_dispatch_queue;
@class BKDevice, NSObject;

@interface BBBiometricResource : NSObject {

	BOOL _isPasscodeSet;
	BOOL _isBiometricUnlockAllowed;
	BOOL _hasEnrolledPearlIdentities;
	BKDevice* _pearlDevice;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) BOOL hasPearlCapability; 
@property (nonatomic,readonly) BOOL isPearlEnabledAndEnrolled; 
-(id)initWithQueue:(id)arg1 ;
-(void)_updateIsPasscodeSet;
-(void)_unregisterForBiometricUnlockAllowedChange;
-(void)_updateHasEnrolledPearlIdentities;
-(void)_registerForBKEnrollmentChange;
-(void)_unregisterForBKEnrollmentChange;
-(void)_registerForPasscodeChange;
-(void)_updateIsBiometricUnlockAllowed;
-(BOOL)hasPearlCapability;
-(BOOL)isPearlEnabledAndEnrolled;
-(void)_registerForBiometricUnlockAllowedChange;
-(void)dealloc;
@end

