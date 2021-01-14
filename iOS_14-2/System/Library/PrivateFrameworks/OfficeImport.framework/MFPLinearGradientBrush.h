/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPGradientBrush.h>

@class OITSUColor;

@interface MFPLinearGradientBrush : MFPGradientBrush {

	CGRect mBounds;
	OITSUColor* mStartColor;
	OITSUColor* mEndColor;

}
-(id)endColor;
-(id)startColor;
-(void)setBounds:(CGRect)arg1 ;
-(void)setStartColor:(id)arg1 ;
-(void)setEndColor:(id)arg1 ;
-(void)createShading;
@end

