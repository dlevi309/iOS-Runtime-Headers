/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)metrics;
-(CGImageRef)unslicedImage;
-(id)sliceInformation;
-(id)initWithCGImage:(CGImageRef)arg1 withDescription:(id)arg2 forKey:(const renditionkeytoken*)arg3 ;
-(const renditionkeytoken*)key;
-(void)setName:(id)arg1 ;
-(void)dealloc;
@end

