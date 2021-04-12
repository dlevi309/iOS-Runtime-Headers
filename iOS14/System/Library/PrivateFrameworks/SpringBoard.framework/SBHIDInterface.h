/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBProximitySensorControlling.h>

@protocol BSInvalidatable;
@class NSMutableArray, SBHIDUILockAssertion, NSString;

@interface SBHIDInterface : NSObject <SBProximitySensorControlling> {

	unsigned long long _lockState;
	NSMutableArray* _assertions;
	id<BSInvalidatable> _dispatchingAssertion;
	SBHIDUILockAssertion* _pocketTouchesAssertion;
	BOOL _proximityDetectionEnabled;

}

@property (assign,getter=isProximityDetectionEnabled,nonatomic) BOOL proximityDetectionEnabled; 
@property (assign,nonatomic) BOOL pocketTouchesExpected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)suspendProximityDetectionForSource:(long long)arg1 reason:(id)arg2 ;
-(id)init;
-(id)suspendMultitouchForSource:(long long)arg1 reason:(id)arg2 ;
-(void)_reevaluateLockStateForSource:(long long)arg1 ;
-(void)setProximityDetectionEnabled:(BOOL)arg1 ;
-(id)_suspendProximity:(BOOL)arg1 suspendMultitouch:(BOOL)arg2 disableTapToWake:(BOOL)arg3 source:(long long)arg4 reason:(id)arg5 ;
-(void)setPocketTouchesExpected:(BOOL)arg1 ;
-(void)resetProximityCalibration;
-(BOOL)pocketTouchesExpected;
-(BOOL)isProximityDetectionEnabled;
-(void)removeHIDLockAssertion:(id)arg1 source:(long long)arg2 ;
-(void)reevaluateHIDLockAssertionsForSource:(long long)arg1 ;
-(id)addStartupHIDLockAssertion;
-(void)_setLockState:(unsigned long long)arg1 source:(long long)arg2 ;
-(id)suspendProximityDetectionAndMultitouchForSource:(long long)arg1 disableTapToWake:(BOOL)arg2 reason:(id)arg3 ;
@end

