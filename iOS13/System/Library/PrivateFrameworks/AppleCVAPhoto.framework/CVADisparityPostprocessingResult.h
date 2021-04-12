/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

@class NSArray;


@protocol CVADisparityPostprocessingResult <NSObject>
@property (readonly) CVBufferRef postprocessedDisparityPixelBuffer; 
@property (readonly) float focusDisparity; 
@property (readonly) float deltaCanonicalDisparity; 
@property (readonly) float backgroundDisparitySum; 
@property (readonly) float backgroundDisparitySumVariance; 
@property (readonly) float backgroundDisparityRatio; 
@property (readonly) float invalidDisparityRatio; 
@property (readonly) float invalidDisparityRatioVariance; 
@property (readonly) float backgroundSeparationLikelihood; 
@property (readonly) float closeCanonicalDisparityAverage; 
@property (readonly) NSArray * faceCanonicalDisparityAverage; 
@property (readonly) NSArray * faceInvalidDisparityRatio; 
@property (readonly) float foregroundRatio; 
@property (readonly) float erodedForegroundRatio; 
@required
-(CVBufferRef)postprocessedDisparityPixelBuffer;
-(float)focusDisparity;
-(float)deltaCanonicalDisparity;
-(float)backgroundDisparitySum;
-(float)invalidDisparityRatio;
-(float)closeCanonicalDisparityAverage;
-(NSArray *)faceCanonicalDisparityAverage;
-(float)erodedForegroundRatio;
-(float)foregroundRatio;
-(float)backgroundDisparitySumVariance;
-(float)backgroundDisparityRatio;
-(float)invalidDisparityRatioVariance;
-(float)backgroundSeparationLikelihood;
-(NSArray *)faceInvalidDisparityRatio;

@end

