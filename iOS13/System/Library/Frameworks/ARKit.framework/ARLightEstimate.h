/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)sphericalHarmonicsCoefficients;
-(double)ambientIntensity;
-(double)ambientColorTemperature;
-(id)initWithAmbientIntensity:(double)arg1 temperature:(double)arg2 ;
@end

