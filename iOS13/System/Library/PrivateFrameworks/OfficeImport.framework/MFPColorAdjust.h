/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OITSUColor, NSDictionary;

@interface MFPColorAdjust : NSObject {

	MFPColorMatrix* mColorMatrix;
	MFPColorMatrix* mGrayMatrix;
	int mColorMatrixFlags;
	OITSUColor* mTransparentRangeLow;
	OITSUColor* mTransparentRangeHigh;
	float mGamma;
	NSDictionary* mRecolorMap;
	float mThreshold;
	BOOL mEnabled;

}
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(float)threshold;
-(void)setThreshold:(float)arg1 ;
-(MFPColorMatrix*)colorMatrix;
-(float)gamma;
-(void)setGamma:(float)arg1 ;
-(void)setColorMatrix:(MFPColorMatrix*)arg1 ;
-(MFPColorMatrix*)grayMatrix;
-(void)setGrayMatrix:(MFPColorMatrix*)arg1 ;
-(int)colorMatrixFlags;
-(void)setColorMatrixFlags:(int)arg1 ;
-(id)transparentLow;
-(id)transparentHigh;
-(void)setTransparentLow:(id)arg1 high:(id)arg2 ;
-(id)recolorMap;
-(void)setRecolorMap:(id)arg1 ;
@end

