/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIThemeGradient;

@interface _CUIThemeGradientRendition : CUIThemeRendition {

	CUIThemeGradient* gradient;
	double gradientAngle;

}
-(unsigned)gradientStyle;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(double)gradientDrawingAngle;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(id)gradient;
-(void)dealloc;
@end

