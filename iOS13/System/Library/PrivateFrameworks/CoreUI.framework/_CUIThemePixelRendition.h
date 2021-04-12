/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation, _CSIRenditionBlockData, NSMutableArray;

@interface _CUIThemePixelRendition : CUIThemeRendition {

	unsigned _nimages;
	CGImage* _image[16];
	CGImageRef _unslicedImage;
	CUIRenditionMetrics* _renditionMetrics;
	CUIRenditionSliceInformation* _sliceInformation;
	_CSIRenditionBlockData* _cachedBlockDataBGRX;
	_CSIRenditionBlockData* _cachedBlockDataRGBX;
	_CSIRenditionBlockData* _cachedBlockDataGray;
	unsigned long long _sourceRowbytes;
	NSMutableArray* _layers;
	CGSize _unslicedSize;

}
-(void)dealloc;
-(int)pixelFormat;
-(id)metrics;
-(id)layerReferences;
-(CGImageRef)unslicedImage;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(BOOL)isTiled;
-(id)imageForSliceIndex:(long long)arg1 ;
-(BOOL)isScaled;
-(id)maskForSliceIndex:(long long)arg1 ;
-(BOOL)edgesOnly;
-(id)sliceInformation;
-(unsigned long long)sourceRowbytes;
-(CGSize)unslicedSize;
-(CGImageRef)newImageFromCSIDataSlice:(slice)arg1 ofBitmap:(csibitmap*)arg2 usingColorspace:(CGColorSpaceRef)arg3 ;
-(id)copySharedBlockDataWithPixelFormat:(int)arg1 ;
-(void)setSharedBlockData:(id)arg1 ;
@end

