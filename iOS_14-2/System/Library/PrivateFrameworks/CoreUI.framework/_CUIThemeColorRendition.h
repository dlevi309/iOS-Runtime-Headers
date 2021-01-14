/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSString;

@interface _CUIThemeColorRendition : CUIThemeRendition {

	CGColorRef _cgColor;
	const csicolor* _csiColor;
	NSString* _colorName;

}
-(BOOL)substituteWithSystemColor;
-(id)systemColorName;
-(CGColorRef)cgColor;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(void)dealloc;
-(const csicolor*)csiColor;
@end

