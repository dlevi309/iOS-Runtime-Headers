/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGAffineTransform)alignmentTransform;
-(void)setAlignmentTransform:(CGAffineTransform)arg1 ;
-(VNImageRegistrationSignature *)referenceImageSignature;
-(void)setReferenceImageSignature:(VNImageRegistrationSignature *)arg1 ;
-(VNImageRegistrationSignature *)floatingImageSignature;
-(void)setFloatingImageSignature:(VNImageRegistrationSignature *)arg1 ;
@end

