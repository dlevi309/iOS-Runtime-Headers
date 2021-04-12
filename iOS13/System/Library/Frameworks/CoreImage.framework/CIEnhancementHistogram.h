/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


@interface CIEnhancementHistogram : NSObject {

	double hist[256];

}
+(id)histogramFromData:(const double*)arg1 ;
+(id)histogramFromFloatData:(const float*)arg1 ;
+(id)histogramFromDoubleData:(const double*)arg1 ;
-(const double*)values;
@end

