/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDAnimationShapeTarget.h>

@interface PDAnimationChartTarget : PDAnimationShapeTarget {

	BOOL mHasCatagoryIndex;
	int mCatagoryIndex;
	BOOL mHasSeriesIndex;
	int mSeriesIndex;
	BOOL mHasBuildStep;
	int mBuildStep;
	int mChartSubElementType;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)seriesIndex;
-(void)setSeriesIndex:(int)arg1 ;
-(BOOL)hasSeriesIndex;
-(void)setChartSubElementType:(int)arg1 ;
-(int)chartSubElementType;
-(int)catagoryIndex;
-(int)buildStep;
-(BOOL)hasCatagoryIndex;
-(void)setCatagoryIndex:(int)arg1 ;
-(BOOL)hasBuildStep;
-(void)setBuildStep:(int)arg1 ;
@end

