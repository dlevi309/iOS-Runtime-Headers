/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class VNImageRegistrationSignature;

@interface VNImageAlignmentObservation : VNObservation {

	VNImageRegistrationSignature* _referenceImageSignature;
	VNImageRegistrationSignature* _floatingImageSignature;

}

@property (nonatomic,retain) VNImageRegistrationSignature * referenceImageSignature;              //@synthesize referenceImageSignature=_referenceImageSignature - In the implementation block
@property (nonatomic,retain) VNImageRegistrationSignature * floatingImageSignature;               //@synthesize floatingImageSignature=_floatingImageSignature - In the implementation block
@property (assign,nonatomic) CGAffineTransform alignmentTransform; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(CGAffineTransform)alignmentTransform;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setAlignmentTransform:(CGAffineTransform)arg1 ;
-(VNImageRegistrationSignature *)referenceImageSignature;
-(void)setReferenceImageSignature:(VNImageRegistrationSignature *)arg1 ;
-(VNImageRegistrationSignature *)floatingImageSignature;
-(void)setFloatingImageSignature:(VNImageRegistrationSignature *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

