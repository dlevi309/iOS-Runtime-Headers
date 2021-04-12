/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@interface FOVDescriptor : NSObject {

	DisparityDescriptor _disparityDesc;
	unsigned _inputBufferWidth;
	unsigned _inputBufferHeight;
	unsigned _narrowDownscaledWidth;
	unsigned _narrowDownscaledHeight;
	SCD_Struct_Fi4 _narrowDownscaledROI;
	unsigned _disparityWidth;
	unsigned _disparityHeight;
	unsigned _inputExtraBorderWidth;
	unsigned _inputExtraBorderHeight;
	unsigned _disparityExtraBorderWidth;
	unsigned _disparityExtraBorderHeight;
	unsigned _disparityExtraBorderWidthAtStitchResolution;
	unsigned _disparityExtraBorderHeightAtStitchResolution;

}
@end

