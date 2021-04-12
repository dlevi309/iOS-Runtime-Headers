/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class JFXThreadSafeArray;

@interface JFXThermalPolicyManager : NSObject {

	JFXThreadSafeArray* _activePolicies;

}

@property (nonatomic,readonly) JFXThreadSafeArray * activePolicies;                     //@synthesize activePolicies=_activePolicies - In the implementation block
@property (nonatomic,readonly) id<JFXThermalPolicy> highestPriorityPolicy; 
-(id)init;
-(id)description;
-(JFXThreadSafeArray *)activePolicies;
-(id<JFXThermalPolicy>)highestPriorityPolicy;
-(id)initWithDefaultPolicy:(id)arg1 ;
-(void)setPolicyType:(Class)arg1 active:(BOOL)arg2 ;
@end

