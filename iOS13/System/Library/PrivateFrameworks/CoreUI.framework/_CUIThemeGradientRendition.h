/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIThemeGradient;

@interface _CUIThemeGradientRendition : CUIThemeRendition {

	CUIThemeGradient* gradient;
	double gradientAngle;

}
+(id)_nodesFromNodeList:(csigradientdatanode*)arg1 count:(unsigned long long)arg2 header:(const csiheader*)arg3 ;
+(_CUIThemeGradientRenditionInitializerStruct)_parseGradientInfoFromCSIHeader:(const csiheader*)arg1 ;
-(void)dealloc;
-(id)gradient;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(unsigned)gradientStyle;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(double)gradientDrawingAngle;
@end

