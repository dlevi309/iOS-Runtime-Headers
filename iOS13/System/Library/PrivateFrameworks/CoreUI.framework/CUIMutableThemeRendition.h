/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIRenditionSliceInformation, CUIRenditionMetrics;

@interface CUIMutableThemeRendition : CUIThemeRendition {

	renditionkeytoken* _renditionKey;
	CGImageRef _image;
	CUIRenditionSliceInformation* _sliceInformation;
	CUIRenditionMetrics* _renditionMetrics;

}
-(void)dealloc;
-(const renditionkeytoken*)key;
-(void)setName:(id)arg1 ;
-(id)metrics;
-(CGImageRef)unslicedImage;
-(id)initWithCGImage:(CGImageRef)arg1 withDescription:(id)arg2 forKey:(const renditionkeytoken*)arg3 ;
-(id)sliceInformation;
@end

