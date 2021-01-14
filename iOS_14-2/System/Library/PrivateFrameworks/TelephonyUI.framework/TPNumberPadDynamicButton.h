/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TPNumberPadButton.h>

@interface TPNumberPadDynamicButton : TPNumberPadButton
+(double)unhighlightedCircleViewAlpha;
+(double)highlightedCircleViewAlpha;
+(BOOL)usesTelephonyGlyphsWhereAvailable;
+(long long)currentStyle;
+(id)imageForCharacter:(long long)arg1 ;
+(id)imageForCharacter:(long long)arg1 highlighted:(BOOL)arg2 ;
-(id)buttonColor;
-(id)initForCharacter:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateCurrentStyleIfNecessaryFromStyle:(long long)arg1 ;
@end

