/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)confidence;
-(BOOL)compute;
-(id)initWithContext:(id)arg1 image:(id)arg2 config:(const SCD_Struct_CI32*)arg3 ;
-(void)setMinimumPitchCorrectionAreaCoverage:(double)arg1 ;
-(float)pitchCorrectionAreaCoverage;
-(void)setMinimumYawCorrectionAreaCoverage:(double)arg1 ;
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
-(void)dealloc;
@end

