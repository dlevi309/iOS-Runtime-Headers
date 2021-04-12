/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/CSEventHandling.h>

@protocol SBUIBiometricResource, BSInvalidatable;
@class NSMutableSet, NSHashTable, NSString;

@interface CSUserPresenceMonitor : NSObject <CSEventHandling> {

	id<SBUIBiometricResource> _biometricResource;
	NSMutableSet* _activationReasons;
	id<BSInvalidatable> _faceDetectAssertion;
	NSHashTable* _observers;
	BOOL _userPresenceDetectedSinceWake;

}

@property (nonatomic,readonly) BOOL userPresenceDetectedSinceWake;              //@synthesize userPresenceDetectedSinceWake=_userPresenceDetectedSinceWake - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(BOOL)_handleBiometricEvent:(unsigned long long)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)disableDetectionForReason:(id)arg1 ;
-(BOOL)userPresenceDetectedSinceWake;
-(BOOL)isUserPresenceDetectionSupported;
-(void)enableDetectionForReason:(id)arg1 ;
-(id)initWithBiometricResource:(id)arg1 ;
-(void)_updateFaceDetectionState;
-(void)_setUserPresenceDetectedSinceWake:(BOOL)arg1 ;
-(BOOL)_isFaceDetectPermitted;
@end

