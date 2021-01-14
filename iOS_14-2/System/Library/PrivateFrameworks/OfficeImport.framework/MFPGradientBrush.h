/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)endColor;
-(id)color;
-(id)startColor;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)fillPath:(id)arg1 ;
-(void)dealloc;
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

