/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSString, CUICatalog, CUIStyleEffectConfiguration, UIFont, UIColor;

@interface __NSTextAppearanceEffectContext : NSObject {

	NSString* _effectName;
	CUICatalog* _catalog;
	CUIStyleEffectConfiguration* _effectConfiguration;
	UIFont* _font;
	UIColor* _color;

}
-(void)drawGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(long long)arg3 context:(CGContextRef)arg4 ;
-(id)initWithTextEffectName:(id)arg1 catalog:(id)arg2 styleEffectConfiguration:(id)arg3 font:(id)arg4 color:(id)arg5 applicationFrameworkContext:(long long)arg6 useSimplifiedEffect:(BOOL)arg7 ;
-(void)dealloc;
@end

