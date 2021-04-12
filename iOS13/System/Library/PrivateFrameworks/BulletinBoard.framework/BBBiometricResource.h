/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)hasPearlCapability;
-(BOOL)isPearlEnabledAndEnrolled;
-(void)_updateIsPasscodeSet;
-(void)_updateIsBiometricUnlockAllowed;
-(void)_updateHasEnrolledPearlIdentities;
-(void)_registerForBKEnrollmentChange;
-(void)_registerForBiometricUnlockAllowedChange;
-(void)_registerForPasscodeChange;
-(void)_unregisterForBKEnrollmentChange;
-(void)_unregisterForBiometricUnlockAllowedChange;
@end

