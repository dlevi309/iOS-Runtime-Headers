/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(CGColorRef)cgColor;
-(BOOL)substituteWithSystemColor;
-(id)systemColorName;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(CGColorSpaceRef)_colorSpaceWithID:(long long)arg1 ;
-(const csicolor*)csiColor;
@end

