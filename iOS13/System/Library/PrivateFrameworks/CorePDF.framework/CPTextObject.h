/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@interface CPTextObject : CPChunk {

	CGPoint anchor;
	BOOL metricInfoCalculated;
	float maxFontSize;
	double maxFontLineHeight;

}
-(float)maxFontSize;
-(void)translateObjectYBy:(double)arg1 ;
-(void)clearCachedInfo;
-(double)maxFontLineHeight;
-(void)calculateMetrics;
@end

