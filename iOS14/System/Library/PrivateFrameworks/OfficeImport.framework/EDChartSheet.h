/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDSheet.h>

@class CHDChart;

@interface EDChartSheet : EDSheet {

	CHDChart* mMainChart;
	BOOL mIsBoundsSet;
	CGRect mBounds;

}
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)teardown;
-(BOOL)areBoundsSet;
-(id)mainChart;
-(void)addDrawable:(id)arg1 ;
-(void)setMainChart:(id)arg1 ;
@end

