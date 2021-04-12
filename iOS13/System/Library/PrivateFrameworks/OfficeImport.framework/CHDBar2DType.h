/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CHDChartTypeWithGrouping.h>

@interface CHDBar2DType : CHDChartTypeWithGrouping {

	int mGapWidth;
	BOOL mColumn;
	int mOverlap;

}
-(BOOL)isHorizontal;
-(BOOL)isColumn;
-(void)setOverlap:(int)arg1 ;
-(int)overlap;
-(void)setColumn:(BOOL)arg1 ;
-(id)initWithChart:(id)arg1 ;
-(void)setGapWidth:(int)arg1 ;
-(int)gapWidth;
-(int)defaultLabelPosition;
@end

