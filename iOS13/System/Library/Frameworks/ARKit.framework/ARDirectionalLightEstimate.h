/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARLightEstimate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ARDirectionalLightEstimate : ARLightEstimate <NSCopying> {

	SCD_Struct_AR48 _sphericalHarmonicIntensity;
	NSData* _sphericalHarmonicsCoefficients;
	double _primaryLightIntensity;
	double _timestamp;
	double _confidenceRating;
	 _primaryLightDirection;

}

@property (assign,nonatomic) double timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double confidenceRating;                                     //@synthesize confidenceRating=_confidenceRating - In the implementation block
@property (nonatomic,copy,readonly) NSData * sphericalHarmonicsCoefficients; 
@property (nonatomic,readonly)  primaryLightDirection;                                    //@synthesize primaryLightDirection=_primaryLightDirection - In the implementation block
@property (nonatomic,readonly) double primaryLightIntensity;                              //@synthesize primaryLightIntensity=_primaryLightIntensity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSData *)sphericalHarmonicsCoefficients;
-(id)initWithSphericalHarmonics:(SCD_Struct_AR48)arg1 ambientIntensity:(double)arg2 temperature:(double)arg3 ;
-(double)confidenceRating;
-(void)setConfidenceRating:(double)arg1 ;
-(id)initWithDirectionalLightEstimate:(id)arg1 ;
-(id)lightEstimateByApplyingRotation:(SCD_Struct_AR24)arg1 ;
-()primaryLightDirection;
-(double)primaryLightIntensity;
@end

