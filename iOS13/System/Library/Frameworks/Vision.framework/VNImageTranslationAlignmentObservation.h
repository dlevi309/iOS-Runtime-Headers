/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGAffineTransform)alignmentTransform;
-(void)setAlignmentTransform:(CGAffineTransform)arg1 ;
@end

