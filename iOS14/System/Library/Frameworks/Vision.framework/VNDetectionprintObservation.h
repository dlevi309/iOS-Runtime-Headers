/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class VNDetectionprint;

@interface VNDetectionprintObservation : VNObservation {

	VNDetectionprint* _detectionprint;

}

@property (copy,readonly) VNDetectionprint * detectionprint;              //@synthesize detectionprint=_detectionprint - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithDetectionprint:(id)arg1 requestRevision:(unsigned long long)arg2 ;
-(VNDetectionprint *)detectionprint;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

