/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setPath:(id)arg1 ;
-(id)startColor;
-(id)endColor;
-(void)setCenterColor:(id)arg1 ;
-(void)setCenterPoint:(CGPoint)arg1 ;
-(void)setSurroundColors:(id)arg1 ;
-(void)createShading;
@end

