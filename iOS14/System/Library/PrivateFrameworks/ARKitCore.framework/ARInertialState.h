/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARDaemonSecureCoding.h>

@interface ARInertialState : NSObject <ARDaemonSecureCoding> {

	double _covarianceMatrix[225];
	 _position;
	 _velocity;
	 _accelerometerBias;
	 _gyroscopeBias;
	SCD_Struct_AR25 _orientation;

}

@property (nonatomic,readonly) double* covarianceMatrix; 
@property (assign,nonatomic) SCD_Struct_AR25 orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic)  position;                                //@synthesize position=_position - In the implementation block
@property (assign,nonatomic)  velocity;                                //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic)  accelerometerBias;                       //@synthesize accelerometerBias=_accelerometerBias - In the implementation block
@property (assign,nonatomic)  gyroscopeBias;                           //@synthesize gyroscopeBias=_gyroscopeBias - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setVelocity:;
-()position;
-()velocity;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPosition:;
-(SCD_Struct_AR25)orientation;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOrientation:(SCD_Struct_AR25)arg1 ;
-(id)initWithCovarianceMatrix:(double*)arg1 ;
-(double*)covarianceMatrix;
-()accelerometerBias;
-(void)setAccelerometerBias:;
-()gyroscopeBias;
-(void)setGyroscopeBias:;
@end

