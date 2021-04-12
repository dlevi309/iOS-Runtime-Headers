/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIPerspectiveAutoCalc.h>

@class CIImage;

@interface CIPerspectiveAutoCalcV1 : CIPerspectiveAutoCalc {

	float3x3 K;
	float3x3 invK;
	float3x3 T;
	float3x3 invT;
	CIImage* gradMap;
	unsigned long long gradMapW;
	unsigned long long gradMapH;
	* gradMapBmp;
	unsigned long long gradMapRb;
	vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> >* vLines;
	vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> >* hLines;
	vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> >* vLineCluster;
	vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line> >* hLineCluster;
	BOOL vGuidesValid;
	BOOL hGuidesValid;
	float vGuidesAOE;
	float hGuidesAOE;
	SCD_Struct_CI8 vGuide0;
	SCD_Struct_CI8 vGuide1;
	SCD_Struct_CI8 hGuide0;
	SCD_Struct_CI8 hGuide1;
	PseudoRand pseudoRando;
	float rX;
	float rY;
	float rZ;
	float pitchCorrectionAreaCoverage;
	float yawCorrectionAreaCoverage;
	double minimumPitchCorrectionAreaCoverage;
	double minimumYawCorrectionAreaCoverage;

}

@property (assign) double minimumPitchCorrectionAreaCoverage; 
@property (assign) double minimumYawCorrectionAreaCoverage; 
@property (readonly) float pitchCorrectionAreaCoverage; 
@property (readonly) float yawCorrectionAreaCoverage; 
-(void)dealloc;
-(double)confidence;
-(id)initWithContext:(id)arg1 image:(id)arg2 config:(const SCD_Struct_CI32*)arg3 ;
-(BOOL)compute;
-(void)setMinimumPitchCorrectionAreaCoverage:(double)arg1 ;
-(void)setMinimumYawCorrectionAreaCoverage:(double)arg1 ;
-(float)pitchCorrectionAreaCoverage;
-(float)yawCorrectionAreaCoverage;
-(void)standardizeImage;
-(void)createGradientMap;
-(void)normalizeGradientMap;
-(void)thresholdGradientMap;
-(void)extractLineSegments;
-(void)clusterLineSegments;
-(void)rangeLimitGradientMap;
-(void)computeGuides;
-(void)computeTransform;
-(double)minimumPitchCorrectionAreaCoverage;
-(double)minimumYawCorrectionAreaCoverage;
@end

