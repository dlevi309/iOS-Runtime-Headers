/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)data;
-(BOOL)isOpaque;
-(id)properties;
-(int)pixelFormat;
-(id)metrics;
-(CGImageRef)unslicedImage;
-(id)linkingToRendition;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(CGSize)originalUncroppedSize;
-(CGImageRef)_sourceImage;
-(void)_setStructuredThemeStore:(id)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(BOOL)isTiled;
-(id)imageForSliceIndex:(long long)arg1 ;
-(BOOL)isScaled;
-(id)maskForSliceIndex:(long long)arg1 ;
-(BOOL)edgesOnly;
-(id)sliceInformation;
-(CGRect)alphaCroppedRect;
-(CGSize)unslicedSize;
-(id)_sourceRendition;
-(int)bitmapEncoding;
-(CGRect)_destinationFrame;
-(void)_fillOutImageSlices;
-(BOOL)isInternalLink;
@end

