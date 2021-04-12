/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)threshold;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(MFPColorMatrix*)colorMatrix;
-(BOOL)isEnabled;
-(float)gamma;
-(void)dealloc;
-(void)setThreshold:(float)arg1 ;
-(void)setColorMatrix:(MFPColorMatrix*)arg1 ;
-(void)setGamma:(float)arg1 ;
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

