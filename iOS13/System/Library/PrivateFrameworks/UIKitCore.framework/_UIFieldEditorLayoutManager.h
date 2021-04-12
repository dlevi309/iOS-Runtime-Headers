/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSLayoutManager.h>

@class UIFont;

@interface _UIFieldEditorLayoutManager : NSLayoutManager {

	UIFont* _fontForExtraBulletRendering;

}
-(void)showCGGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(unsigned long long)arg3 font:(id)arg4 textMatrix:(CGAffineTransform)arg5 attributes:(id)arg6 inContext:(CGContextRef)arg7 ;
-(void)resetFontForExtraBulletRendering;
-(long long)_generateBulletGlyphs:(const unsigned short*)arg1 properties:(const long long*)arg2 characterIndexes:(const unsigned long long*)arg3 font:(id)arg4 forGlyphRange:(NSRange)arg5 unobscuredRange:(NSRange)arg6 obscuredLength:(long long)arg7 obscureExistingText:(BOOL)arg8 ;
-(CGRect)_boundingBoxForBulletAtCharIndex:(long long)arg1 inUnobscuredRange:(NSRange)arg2 ;
-(void)_completeBulletRenderingForTextContainer:(id)arg1 ;
-(void)useFontForExtraBulletRendering:(id)arg1 ;
@end

