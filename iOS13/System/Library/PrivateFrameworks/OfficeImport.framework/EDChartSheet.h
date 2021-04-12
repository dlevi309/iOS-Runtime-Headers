/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

