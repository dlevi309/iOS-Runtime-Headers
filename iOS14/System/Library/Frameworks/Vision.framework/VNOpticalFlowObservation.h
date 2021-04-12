/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNPixelBufferObservation.h>

@class VNImageSignature, LKTOpticalFlow;

@interface VNOpticalFlowObservation : VNPixelBufferObservation {

	VNImageSignature* _targetImageSignature;
	LKTOpticalFlow* _opticalFlow;

}

@property (nonatomic,retain) VNImageSignature * targetImageSignature;              //@synthesize targetImageSignature=_targetImageSignature - In the implementation block
@property (nonatomic,retain) LKTOpticalFlow * opticalFlow;                         //@synthesize opticalFlow=_opticalFlow - In the implementation block
-(VNImageSignature *)targetImageSignature;
-(void)setTargetImageSignature:(VNImageSignature *)arg1 ;
-(LKTOpticalFlow *)opticalFlow;
-(void)setOpticalFlow:(LKTOpticalFlow *)arg1 ;
@end

