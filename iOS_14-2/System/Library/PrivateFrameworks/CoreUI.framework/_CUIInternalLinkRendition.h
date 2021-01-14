/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionMetrics, CUIRenditionSliceInformation, CUIStructuredThemeStore, CUIRenditionKey;

@interface _CUIInternalLinkRendition : CUIThemeRendition {

	unsigned _nimages;
	CGRect _imageRect[16];
	CGImage* _image[16];
	CGImageRef _unslicedImage;
	CUIRenditionMetrics* _renditionMetrics;
	CUIRenditionSliceInformation* _sliceInformation;
	CGRect _frame;
	CUIStructuredThemeStore* _sourceProvider;
	CUIRenditionKey* _referenceKey;
	CGSize _originalUncroppedSize;
	CGRect _alphaCroppedFrame;

}
-(id)metrics;
-(CGRect)alphaCroppedRect;
-(id)_sourceRendition;
-(BOOL)isOpaque;
-(id)properties;
-(void)_setStructuredThemeStore:(id)arg1 ;
-(BOOL)isTiled;
-(CGImageRef)unslicedImage;
-(int)pixelFormat;
-(id)imageForSliceIndex:(long long)arg1 ;
-(id)maskForSliceIndex:(long long)arg1 ;
-(id)linkingToRendition;
-(id)sliceInformation;
-(BOOL)isScaled;
-(id)data;
-(CGSize)originalUncroppedSize;
-(int)bitmapEncoding;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(CGSize)unslicedSize;
-(CGRect)_destinationFrame;
-(BOOL)edgesOnly;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(BOOL)isInternalLink;
-(void)dealloc;
@end

