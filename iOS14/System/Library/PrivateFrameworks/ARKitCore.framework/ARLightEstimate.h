/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface ARLightEstimate : NSObject <NSSecureCoding> {

	double _ambientIntensity;
	double _ambientColorTemperature;

}

@property (nonatomic,copy,readonly) NSData * sphericalHarmonicsCoefficients; 
@property (nonatomic,readonly) double ambientIntensity;                                   //@synthesize ambientIntensity=_ambientIntensity - In the implementation block
@property (nonatomic,readonly) double ambientColorTemperature;                            //@synthesize ambientColorTemperature=_ambientColorTemperature - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(double)ambientIntensity;
-(double)ambientColorTemperature;
-(id)initWithAmbientIntensity:(double)arg1 temperature:(double)arg2 ;
-(NSData *)sphericalHarmonicsCoefficients;
@end

