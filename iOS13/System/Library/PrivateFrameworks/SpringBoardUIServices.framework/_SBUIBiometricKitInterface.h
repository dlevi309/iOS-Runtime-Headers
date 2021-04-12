/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id<_SBUIBiometricKitInterfaceDelegate>)delegate;
-(void)setDelegate:(id<_SBUIBiometricKitInterfaceDelegate>)arg1 ;
-(BOOL)isFingerOn;
-(BOOL)isTouchIDCapable;
-(void)forceBioLockout;
-(void)operation:(id)arg1 stateChanged:(long long)arg2 ;
-(void)operation:(id)arg1 finishedWithReason:(long long)arg2 ;
-(void)operation:(id)arg1 presenceStateChanged:(BOOL)arg2 ;
-(void)matchOperation:(id)arg1 matchedWithResult:(id)arg2 ;
-(void)matchOperation:(id)arg1 failedWithReason:(long long)arg2 ;
-(unsigned long long)lockoutState;
-(BOOL)enableBackgroundFingerDetection:(BOOL)arg1 error:(id*)arg2 ;
-(void)matchOperation:(id)arg1 providedFeedback:(long long)arg2 ;
-(BOOL)hasEnrolledIdentities;
-(void)_setTracker:(id)arg1 forOperation:(id)arg2 ;
-(id)_createPresenceDetectOperationsForDeviceTypes:(id)arg1 error:(id*)arg2 ;
-(void)_sendDelegateEvent:(unsigned long long)arg1 ;
-(id)_trackerForOperation:(id)arg1 ;
-(unsigned long long)_eventForLockoutState:(long long)arg1 ;
-(void)_sendDelegateEventForFeedback:(long long)arg1 ;
-(unsigned long long)_biometricEventForFaceDetectFeedback:(long long)arg1 ;
-(BOOL)isPearlIDCapable;
-(id)createPearlDevice;
-(id)createMatchOperationsWithMode:(unsigned long long)arg1 andCredentialSet:(id)arg2 error:(id*)arg3 ;
-(id)createPresenceDetectOperationsWithError:(id*)arg1 ;
-(id)createFingerDetectOperationsWithError:(id*)arg1 ;
-(id)createFaceDetectOperationsWithError:(id*)arg1 ;
@end

