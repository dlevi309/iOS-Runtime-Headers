/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageAlignmentObservation.h>

@interface VNImageHomographicAlignmentObservation : VNImageAlignmentObservation {

	SCD_Struct_VN18 _warpTransform;

}

@property (assign,nonatomic) SCD_Struct_VN18 warpTransform;              //@synthesize warpTransform=_warpTransform - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_VN18)warpTransform;
-(void)setWarpTransform:(SCD_Struct_VN18)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

