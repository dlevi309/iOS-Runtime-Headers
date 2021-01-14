/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKQuantity;

@interface HKAudiogramSensitivityPoint : NSObject <NSSecureCoding> {

	HKQuantity* _frequency;
	HKQuantity* _leftEarSensitivity;
	HKQuantity* _rightEarSensitivity;

}

@property (copy,readonly) HKQuantity * frequency; 
@property (copy,readonly) HKQuantity * leftEarSensitivity; 
@property (copy,readonly) HKQuantity * rightEarSensitivity; 
+(BOOL)supportsSecureCoding;
+(BOOL)_validateUnitForFrequency:(id)arg1 ;
+(BOOL)_validateUnitForSensitivity:(id)arg1 ;
+(BOOL)validFrequency:(id)arg1 error:(id*)arg2 ;
+(BOOL)validSensitivity:(id)arg1 error:(id*)arg2 ;
+(id)_incompatibleUnit:(id)arg1 incompatibleWith:(id)arg2 ;
+(id)_rangeViolationMin:(id)arg1 max:(id)arg2 value:(id)arg3 ;
+(id)sensitivityPointWithFrequency:(id)arg1 leftEarSensitivity:(id)arg2 rightEarSensitivity:(id)arg3 error:(id*)arg4 ;
-(HKQuantity *)frequency;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKQuantity *)rightEarSensitivity;
-(HKQuantity *)leftEarSensitivity;
-(id)_leftDiagnosticSensitivityPoint;
-(id)_rightDiagnosticSensitivityPoint;
-(id)initWithFrequency:(id)arg1 leftEarSensitivity:(id)arg2 rightEarSensitivity:(id)arg3 ;
-(id)_audiogramDiagnosticSensitivityPointForEarSensitivity:(id)arg1 ;
@end

