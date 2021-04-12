/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSData, CUIRenditionMetrics, CUIRenditionSliceInformation;

@interface _CUIRawPixelRendition : CUIThemeRendition {

	int _pixelFormat;
	unsigned _nimages;
	NSData* _rawData;
	CGImage* _image[16];
	CGImageRef _unslicedImage;
	CUIRenditionMetrics* _renditionMetrics;
	CUIRenditionSliceInformation* _sliceInformation;

}
-(id)metrics;
-(CGImageRef)unslicedImage;
-(int)pixelFormat;
-(id)imageForSliceIndex:(long long)arg1 ;
-(id)maskForSliceIndex:(long long)arg1 ;
-(id)sliceInformation;
-(BOOL)isScaled;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(CGSize)unslicedSize;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(void)dealloc;
@end

