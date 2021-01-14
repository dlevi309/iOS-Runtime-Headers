/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CVAIMUCalibration : NSObject <NSSecureCoding> {

	NSArray* _noiseCharacteristics;
	NSArray* _gravity;
	double _accelTimestampCorrection;
	NSArray* _accelConversion;
	NSArray* _gyroConversion;
	NSArray* _imuToIMURotation;
	NSArray* _imuToIMUTranslation;

}

@property (nonatomic,retain) NSArray * noiseCharacteristics;               //@synthesize noiseCharacteristics=_noiseCharacteristics - In the implementation block
@property (nonatomic,retain) NSArray * gravity;                            //@synthesize gravity=_gravity - In the implementation block
@property (assign,nonatomic) double accelTimestampCorrection;              //@synthesize accelTimestampCorrection=_accelTimestampCorrection - In the implementation block
@property (nonatomic,retain) NSArray * accelConversion;                    //@synthesize accelConversion=_accelConversion - In the implementation block
@property (nonatomic,retain) NSArray * gyroConversion;                     //@synthesize gyroConversion=_gyroConversion - In the implementation block
@property (nonatomic,retain) NSArray * imuToIMURotation;                   //@synthesize imuToIMURotation=_imuToIMURotation - In the implementation block
@property (nonatomic,retain) NSArray * imuToIMUTranslation;                //@synthesize imuToIMUTranslation=_imuToIMUTranslation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setGravity:(NSArray *)arg1 ;
-(NSArray *)gravity;
-(void)setNoiseCharacteristics:(NSArray *)arg1 ;
-(void)setAccelTimestampCorrection:(double)arg1 ;
-(void)setAccelConversion:(NSArray *)arg1 ;
-(void)setGyroConversion:(NSArray *)arg1 ;
-(void)setImuToIMURotation:(NSArray *)arg1 ;
-(void)setImuToIMUTranslation:(NSArray *)arg1 ;
-(NSArray *)noiseCharacteristics;
-(double)accelTimestampCorrection;
-(NSArray *)accelConversion;
-(NSArray *)gyroConversion;
-(NSArray *)imuToIMURotation;
-(NSArray *)imuToIMUTranslation;
@end

