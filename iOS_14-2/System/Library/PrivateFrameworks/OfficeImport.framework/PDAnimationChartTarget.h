/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)seriesIndex;
-(unsigned long long)hash;
-(void)setSeriesIndex:(int)arg1 ;
-(BOOL)hasSeriesIndex;
-(BOOL)isEqual:(id)arg1 ;
-(void)setChartSubElementType:(int)arg1 ;
-(int)chartSubElementType;
-(int)catagoryIndex;
-(int)buildStep;
-(BOOL)hasCatagoryIndex;
-(void)setCatagoryIndex:(int)arg1 ;
-(BOOL)hasBuildStep;
-(void)setBuildStep:(int)arg1 ;
@end

