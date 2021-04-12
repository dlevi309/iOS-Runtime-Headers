/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetectedObjectObservation.h>

@class NSArray;

@interface VNRecognizedObjectObservation : VNDetectedObjectObservation {

	NSArray* _labels;

}

@property (nonatomic,copy,readonly) NSArray * labels;              //@synthesize labels=_labels - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)labels;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 confidence:(float)arg3 labels:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
@end

