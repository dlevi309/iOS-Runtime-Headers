/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <libobjc.A.dylib/BKOperationDelegate.h>
#import <libobjc.A.dylib/BKMatchOperationDelegate.h>
#import <libobjc.A.dylib/BKMatchPearlOperationDelegate.h>

@protocol OS_dispatch_queue, _SBUIBiometricKitInterfaceDelegate;
@class NSSet, BKDeviceTouchID, NSObject, BKDevicePearl, NSString;

@interface _SBUIBiometricKitInterface : NSObject <BKOperationDelegate, BKMatchOperationDelegate, BKMatchPearlOperationDelegate> {

	NSSet* _biometricDevices;
	unsigned long long _enrolledIdentitiesCount;
	int _enrollmentChangedNotifyToken;
	BOOL _isFingerDetected;
	BKDeviceTouchID* _mesaDevice;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	BKDevicePearl* _pearlDevice;
	id<_SBUIBiometricKitInterfaceDelegate> _delegate;

}

@property (getter=isTouchIDCapable,nonatomic,readonly) BOOL touchIDCapable; 
@property (getter=isPearlIDCapable,nonatomic,readonly) BOOL pearlIDCapable; 
@property (assign,nonatomic) id<_SBUIBiometricKitInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasEnrolledIdentities;
-(id)createFingerDetectOperationsWithError:(id*)arg1 ;
-(void)_sendDelegateEventForFeedback:(long long)arg1 ;
-(void)forceBioLockout;
-(id)init;
-(BOOL)isPearlIDCapable;
-(id<_SBUIBiometricKitInterfaceDelegate>)delegate;
-(unsigned long long)_biometricEventForFaceDetectFeedback:(long long)arg1 ;
-(id)createFaceDetectOperationsWithError:(id*)arg1 ;
-(void)operation:(id)arg1 stateChanged:(long long)arg2 ;
-(void)operation:(id)arg1 finishedWithReason:(long long)arg2 ;
-(unsigned long long)lockoutState;
-(BOOL)isTouchIDCapable;
-(id)createMatchOperationsWithMode:(unsigned long long)arg1 andCredentialSet:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)_eventForLockoutState:(long long)arg1 ;
-(void)setDelegate:(id<_SBUIBiometricKitInterfaceDelegate>)arg1 ;
-(void)_sendDelegateEvent:(unsigned long long)arg1 ;
-(void)matchOperation:(id)arg1 failedWithReason:(long long)arg2 ;
-(void)matchOperation:(id)arg1 matchedWithResult:(id)arg2 ;
-(void)_setTracker:(id)arg1 forOperation:(id)arg2 ;
-(void)matchOperation:(id)arg1 providedFeedback:(long long)arg2 ;
-(BOOL)enableBackgroundFingerDetection:(BOOL)arg1 error:(id*)arg2 ;
-(id)createPresenceDetectOperationsWithError:(id*)arg1 ;
-(id)_createPresenceDetectOperationsForDeviceTypes:(id)arg1 error:(id*)arg2 ;
-(id)createPearlDevice;
-(id)_trackerForOperation:(id)arg1 ;
-(BOOL)isFingerOn;
-(void)operation:(id)arg1 presenceStateChanged:(BOOL)arg2 ;
-(void)dealloc;
@end

