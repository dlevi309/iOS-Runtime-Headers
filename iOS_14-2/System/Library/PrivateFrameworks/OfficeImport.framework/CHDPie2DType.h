/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CHDChartType.h>

@interface CHDPie2DType : CHDChartType {

	int mFirstSliceAngle;
	BOOL mDoughnutType;
	BOOL mPieOfPieType;
	BOOL mBarOfPieType;

}
-(id)contentFormat;
-(BOOL)isDoughnutType;
-(id)initWithChart:(id)arg1 ;
-(void)setFirstSliceAngle:(int)arg1 ;
-(void)setDoughnutType:(BOOL)arg1 ;
-(void)setPieOfPieType:(BOOL)arg1 ;
-(void)setBarOfPieType:(BOOL)arg1 ;
-(int)defaultLabelPosition;
-(int)firstSliceAngle;
-(BOOL)isPieOfPieType;
-(BOOL)isBarOfPieType;
-(BOOL)hasExplosion;
@end

