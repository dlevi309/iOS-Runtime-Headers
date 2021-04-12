/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)metrics;
-(BOOL)isTiled;
-(id)layerReferences;
-(id)copySharedBlockDataWithPixelFormat:(int)arg1 ;
-(CGImageRef)unslicedImage;
-(int)pixelFormat;
-(id)imageForSliceIndex:(long long)arg1 ;
-(void)setSharedBlockData:(id)arg1 ;
-(id)maskForSliceIndex:(long long)arg1 ;
-(id)sliceInformation;
-(BOOL)isScaled;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(CGSize)unslicedSize;
-(BOOL)edgesOnly;
-(unsigned long long)sourceRowbytes;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(void)dealloc;
@end

