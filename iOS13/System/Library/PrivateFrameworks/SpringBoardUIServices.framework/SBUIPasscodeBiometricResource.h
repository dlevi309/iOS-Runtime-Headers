/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <libobjc.A.dylib/SBUIBiometricResource.h>

@protocol SBUIPasscodeBiometricMatchingAssertionFactory;
@class SBUIBiometricResource, NSString;

@interface SBUIPasscodeBiometricResource : NSObject <SBUIBiometricResource> {

	SBUIBiometricResource* _biometricResource;
	id<SBUIPasscodeBiometricMatchingAssertionFactory> _overrideMatchingAssertionFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasEnrolledIdentities; 
@property (nonatomic,readonly) BOOL hasBiometricAuthenticationCapabilityEnabled; 
@property (getter=isFingerOn,nonatomic,readonly) BOOL fingerOn; 
@property (getter=isFingerDetectEnabled,nonatomic,readonly) BOOL fingerDetectEnabled; 
@property (nonatomic,readonly) BOOL hasMesaSupport; 
@property (nonatomic,readonly) BOOL hasPearlSupport; 
@property (getter=isPearlDetectEnabled,nonatomic,readonly) BOOL pearlDetectEnabled; 
@property (getter=isMatchingEnabled,nonatomic,readonly) BOOL matchingEnabled; 
@property (getter=isMatchingAllowed,nonatomic,readonly) BOOL matchingAllowed; 
@property (nonatomic,readonly) unsigned long long biometricLockoutState; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isFingerOn;
-(BOOL)hasEnrolledIdentities;
-(BOOL)hasPearlSupport;
-(unsigned long long)biometricLockoutState;
-(BOOL)hasBiometricAuthenticationCapabilityEnabled;
-(BOOL)isMatchingEnabled;
-(id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)resumeMatchingAdvisory:(BOOL)arg1 ;
-(BOOL)hasMesaSupport;
-(id)initWithBiometricResource:(id)arg1 overrideMatchingAssertionFactory:(id)arg2 ;
-(BOOL)isFingerDetectEnabled;
-(BOOL)isPearlDetectEnabled;
-(BOOL)isMatchingAllowed;
-(id)acquireFingerDetectionWantedAssertionForReason:(id)arg1 ;
-(id)acquireFingerDetectionWantedAssertionForReason:(id)arg1 HIDEventsOnly:(BOOL)arg2 ;
-(id)acquireFaceDetectionWantedAssertionForReason:(id)arg1 ;
-(id)acquireSimulatedLockoutAssertionWithLockoutState:(unsigned long long)arg1 forReason:(id)arg2 ;
-(void)refreshMatchMode;
-(void)resumeMatchingForAssertion:(id)arg1 advisory:(BOOL)arg2 ;
@end

