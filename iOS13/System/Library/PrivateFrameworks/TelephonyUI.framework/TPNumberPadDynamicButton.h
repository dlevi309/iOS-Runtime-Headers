/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TPNumberPadButton.h>

@interface TPNumberPadDynamicButton : TPNumberPadButton
+(long long)currentStyle;
+(double)unhighlightedCircleViewAlpha;
+(double)highlightedCircleViewAlpha;
+(BOOL)usesTelephonyGlyphsWhereAvailable;
+(id)imageForCharacter:(unsigned)arg1 ;
+(id)imageForCharacter:(unsigned)arg1 highlighted:(BOOL)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)buttonColor;
-(id)initForCharacter:(unsigned)arg1 ;
-(void)updateCurrentStyleIfNecessaryFromStyle:(long long)arg1 ;
@end

