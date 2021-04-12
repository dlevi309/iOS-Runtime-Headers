/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)calculateMetrics;
-(void)translateObjectYBy:(double)arg1 ;
-(void)clearCachedInfo;
-(double)maxFontLineHeight;
@end

