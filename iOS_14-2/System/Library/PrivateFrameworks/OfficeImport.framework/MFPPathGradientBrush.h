/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPGradientBrush.h>

@class OITSUColor, NSArray, OITSUBezierPath;

@interface MFPPathGradientBrush : MFPGradientBrush {

	OITSUColor* mCenterColor;
	CGPoint mCenterPoint;
	NSArray* mSurroundColors;
	OITSUBezierPath* mPath;

}
-(void)setCenterPoint:(CGPoint)arg1 ;
-(id)endColor;
-(void)setPath:(id)arg1 ;
-(id)startColor;
-(void)setCenterColor:(id)arg1 ;
-(void)setSurroundColors:(id)arg1 ;
-(void)createShading;
@end

