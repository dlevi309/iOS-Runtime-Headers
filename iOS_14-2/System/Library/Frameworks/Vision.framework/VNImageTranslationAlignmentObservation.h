/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageAlignmentObservation.h>

@interface VNImageTranslationAlignmentObservation : VNImageAlignmentObservation {

	CGAffineTransform _alignmentTransform;

}

@property (assign,nonatomic) CGAffineTransform alignmentTransform;              //@synthesize alignmentTransform=_alignmentTransform - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CGAffineTransform)alignmentTransform;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setAlignmentTransform:(CGAffineTransform)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

