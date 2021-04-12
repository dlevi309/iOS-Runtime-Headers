/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPBrush.h>

@class NSArray;

@interface MFPGradientBrush : MFPBrush {

	CGAffineTransform mTransform;
	NSArray* mBlend;
	NSArray* mColorBlend;
	int mWrapMode;
	NSArray* mStops;
	CGShadingRef mShading;
	CGFunctionRef mShadingFunction;

}
-(id)init;
-(void)dealloc;
-(id)color;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)startColor;
-(id)endColor;
-(void)fillPath:(id)arg1 ;
-(void)setWrapMode:(int)arg1 ;
-(void)setBlend:(id)arg1 ;
-(void)setColorBlend:(id)arg1 ;
-(void)createPhoneBrush;
-(id)colorAtPosition:(float)arg1 ;
-(void)createStopsFromColorBlend;
-(void)createStopsFromBlend;
-(void)createStopsFromStartAndEndColors;
-(void)createShadingFunction;
-(void)createShading;
@end

