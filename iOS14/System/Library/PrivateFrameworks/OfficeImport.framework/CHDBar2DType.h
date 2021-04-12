/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CHDChartTypeWithGrouping.h>

@interface CHDBar2DType : CHDChartTypeWithGrouping {

	int mGapWidth;
	BOOL mColumn;
	int mOverlap;

}
-(BOOL)isColumn;
-(int)overlap;
-(BOOL)isHorizontal;
-(void)setOverlap:(int)arg1 ;
-(void)setColumn:(BOOL)arg1 ;
-(id)initWithChart:(id)arg1 ;
-(void)setGapWidth:(int)arg1 ;
-(int)gapWidth;
-(int)defaultLabelPosition;
@end

