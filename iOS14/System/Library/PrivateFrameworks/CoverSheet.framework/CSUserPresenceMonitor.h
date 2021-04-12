/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)conformsToCSEventHandling;
-(void)addObserver:(id)arg1 ;
-(BOOL)_handleBiometricEvent:(unsigned long long)arg1 ;
-(id)initWithBiometricResource:(id)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(BOOL)isUserPresenceDetectionSupported;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(BOOL)userPresenceDetectedSinceWake;
-(void)_updateFaceDetectionState;
-(BOOL)_isFaceDetectPermitted;
-(void)_setUserPresenceDetectedSinceWake:(BOOL)arg1 ;
-(void)enableDetectionForReason:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)disableDetectionForReason:(id)arg1 ;
-(void)dealloc;
@end

