/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetectedObjectObservation.h>

@class NSArray;

@interface VNRecognizedObjectObservation : VNDetectedObjectObservation {

	NSArray* _labels;

}

@property (nonatomic,copy,readonly) NSArray * labels;              //@synthesize labels=_labels - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)labels;
-(id)initWithRequestRevision:(unsigned long long)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 confidence:(float)arg3 labels:(id)arg4 ;
@end

