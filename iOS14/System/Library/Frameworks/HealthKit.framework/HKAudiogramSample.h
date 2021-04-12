/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/_HKBinarySample.h>

@class NSData, NSArray, NSString;

@interface HKAudiogramSample : HKSample <_HKBinarySample> {

	NSData* _encodedSensitivityPoints;

}

@property (nonatomic,retain) NSData * encodedSensitivityPoints;              //@synthesize encodedSensitivityPoints=_encodedSensitivityPoints - In the implementation block
@property (copy,readonly) NSArray * sensitivityPoints; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isConcreteObjectClass;
+(id)_encodeSensitivityPoints:(id)arg1 ;
+(id)_decodeSensitivityData:(id)arg1 ;
+(id)audiogramSampleWithSensitivityPoints:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)payload;
-(id)initWithCoder:(id)arg1 ;
-(void)_setPayload:(id)arg1 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(NSArray *)sensitivityPoints;
-(id)_validateSensitivityPointsOrderedAscending;
-(NSData *)encodedSensitivityPoints;
-(void)setEncodedSensitivityPoints:(NSData *)arg1 ;
-(id)_pureToneAverageForDiagnosticSensitivityPoints:(id)arg1 ;
-(id)minimumSensitivity;
-(id)averageLeftEarSensitivity;
-(unsigned long long)_diagnosticForSensitivity:(id)arg1 ;
-(id)averageRightEarSensitivity;
-(id)_rightSensitivityPoints;
-(id)_leftDiagnosticSensitivityPoints;
-(id)_averageEarSensitivityForDiagnosticSensitivityPoints:(id)arg1 ;
-(id)_leftSensitivityPoints;
-(id)_rightDiagnosticSensitivityPoints;
-(unsigned long long)diagnostic;
-(id)maximumSensitivity;
@end

