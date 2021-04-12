/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIImage, NSDictionary, NSNumber;

@interface CIFaceMaskDelta : CIFilter {

	CIVector* inputImageSize;
	CIImage* inputParameterImage;
	CIVector* inputFacesCenterX;
	CIVector* inputFacesCenterY;
	CIVector* inputFacesChinX;
	CIVector* inputFacesChinY;
	CIVector* inputFacesLeftEyeX;
	CIVector* inputFacesLeftEyeY;
	CIVector* inputFacesRightEyeX;
	CIVector* inputFacesRightEyeY;
	CIVector* inputK0;
	CIVector* inputK1;
	CIVector* inputK2;
	CIVector* inputK3;
	NSDictionary* inputTuningParameters;
	NSNumber* inputDistanceAdd;
	NSNumber* inputAdditiveMaxBlur;
	NSNumber* inputSubtractiveMaxBlur;
	NSNumber* inputApertureScaling;
	NSNumber* inputMaxBlur;
	CIVector* inputFocusRect;
	NSNumber* inputSubjectDistanceMinimumFocusDistance;
	NSNumber* inputSubjectDistanceMaximumFocusDistance;
	NSNumber* inputSubjectDistanceScalingFactor;
	NSNumber* inputSubjectDistanceOffset;

}

@property (nonatomic,retain) CIVector * inputImageSize; 
@property (nonatomic,retain) CIImage * inputParameterImage; 
@property (nonatomic,copy) CIVector * inputFacesCenterX; 
@property (nonatomic,copy) CIVector * inputFacesCenterY; 
@property (nonatomic,copy) CIVector * inputFacesChinX; 
@property (nonatomic,copy) CIVector * inputFacesChinY; 
@property (nonatomic,copy) CIVector * inputFacesLeftEyeX; 
@property (nonatomic,copy) CIVector * inputFacesLeftEyeY; 
@property (nonatomic,copy) CIVector * inputFacesRightEyeX; 
@property (nonatomic,copy) CIVector * inputFacesRightEyeY; 
@property (nonatomic,copy) CIVector * inputK0; 
@property (nonatomic,copy) CIVector * inputK1; 
@property (nonatomic,copy) CIVector * inputK2; 
@property (nonatomic,copy) CIVector * inputK3; 
@property (nonatomic,copy) NSNumber * inputDistanceAdd; 
@property (nonatomic,copy) NSNumber * inputAdditiveMaxBlur; 
@property (nonatomic,copy) NSNumber * inputSubtractiveMaxBlur; 
@property (nonatomic,copy) NSNumber * inputApertureScaling; 
@property (nonatomic,copy) NSNumber * inputMaxBlur; 
@property (nonatomic,copy) NSNumber * inputSubjectDistanceMinimumFocusDistance; 
@property (nonatomic,copy) NSNumber * inputSubjectDistanceMaximumFocusDistance; 
@property (nonatomic,copy) NSNumber * inputSubjectDistanceScalingFactor; 
@property (nonatomic,copy) NSNumber * inputSubjectDistanceOffset; 
@property (nonatomic,copy) CIVector * inputFocusRect; 
@property (nonatomic,copy) NSDictionary * inputTuningParameters; 
-(id)outputImage;
-(NSNumber *)inputApertureScaling;
-(NSNumber *)inputMaxBlur;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(void)setInputMaxBlur:(NSNumber *)arg1 ;
-(CIImage *)inputParameterImage;
-(void)setInputParameterImage:(CIImage *)arg1 ;
-(CIVector *)inputFacesCenterX;
-(void)setInputFacesCenterX:(CIVector *)arg1 ;
-(CIVector *)inputFacesCenterY;
-(void)setInputFacesCenterY:(CIVector *)arg1 ;
-(CIVector *)inputFacesChinX;
-(void)setInputFacesChinX:(CIVector *)arg1 ;
-(CIVector *)inputFacesChinY;
-(void)setInputFacesChinY:(CIVector *)arg1 ;
-(CIVector *)inputK0;
-(void)setInputK0:(CIVector *)arg1 ;
-(CIVector *)inputK1;
-(void)setInputK1:(CIVector *)arg1 ;
-(CIVector *)inputK2;
-(void)setInputK2:(CIVector *)arg1 ;
-(CIVector *)inputK3;
-(void)setInputK3:(CIVector *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(BOOL)_isValidFace:(unsigned)arg1 ;
-(unsigned)findMostProminentFace;
-(double)_landmarksToDist:(unsigned)arg1 minimumDistance:(float)arg2 maximumDistance:(float)arg3 scalingFactor:(float)arg4 offset:(float)arg5 ;
-(float)distanceToAdd;
-(CIVector *)inputImageSize;
-(void)setInputImageSize:(CIVector *)arg1 ;
-(CIVector *)inputFacesLeftEyeX;
-(void)setInputFacesLeftEyeX:(CIVector *)arg1 ;
-(CIVector *)inputFacesLeftEyeY;
-(void)setInputFacesLeftEyeY:(CIVector *)arg1 ;
-(CIVector *)inputFacesRightEyeX;
-(void)setInputFacesRightEyeX:(CIVector *)arg1 ;
-(CIVector *)inputFacesRightEyeY;
-(void)setInputFacesRightEyeY:(CIVector *)arg1 ;
-(NSNumber *)inputDistanceAdd;
-(void)setInputDistanceAdd:(NSNumber *)arg1 ;
-(NSNumber *)inputAdditiveMaxBlur;
-(void)setInputAdditiveMaxBlur:(NSNumber *)arg1 ;
-(NSNumber *)inputSubtractiveMaxBlur;
-(void)setInputSubtractiveMaxBlur:(NSNumber *)arg1 ;
-(CIVector *)inputFocusRect;
-(void)setInputFocusRect:(CIVector *)arg1 ;
-(NSNumber *)inputSubjectDistanceMinimumFocusDistance;
-(void)setInputSubjectDistanceMinimumFocusDistance:(NSNumber *)arg1 ;
-(NSNumber *)inputSubjectDistanceMaximumFocusDistance;
-(void)setInputSubjectDistanceMaximumFocusDistance:(NSNumber *)arg1 ;
-(NSNumber *)inputSubjectDistanceScalingFactor;
-(void)setInputSubjectDistanceScalingFactor:(NSNumber *)arg1 ;
-(NSNumber *)inputSubjectDistanceOffset;
-(void)setInputSubjectDistanceOffset:(NSNumber *)arg1 ;
@end

