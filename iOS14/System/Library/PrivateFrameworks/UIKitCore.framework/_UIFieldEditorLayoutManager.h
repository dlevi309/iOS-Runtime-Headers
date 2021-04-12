/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSLayoutManager.h>

@class UIFont;

@interface _UIFieldEditorLayoutManager : NSLayoutManager {

	UIFont* _fontForExtraBulletRendering;

}
-(void)useFontForExtraBulletRendering:(id)arg1 ;
-(void)showCGGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(long long)arg3 font:(id)arg4 textMatrix:(CGAffineTransform)arg5 attributes:(id)arg6 inContext:(CGContextRef)arg7 ;
-(CGRect)_boundingBoxForBulletAtCharIndex:(long long)arg1 inUnobscuredRange:(NSRange)arg2 ;
-(void)_completeBulletRenderingForTextContainer:(id)arg1 ;
-(long long)_generateBulletGlyphs:(const unsigned short*)arg1 properties:(const long long*)arg2 characterIndexes:(const unsigned long long*)arg3 font:(id)arg4 forGlyphRange:(NSRange)arg5 unobscuredRange:(NSRange)arg6 obscuredLength:(long long)arg7 obscureExistingText:(BOOL)arg8 ;
-(void)resetFontForExtraBulletRendering;
@end

