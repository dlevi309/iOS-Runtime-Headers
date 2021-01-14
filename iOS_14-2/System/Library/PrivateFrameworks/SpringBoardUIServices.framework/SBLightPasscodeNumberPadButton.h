/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <TelephonyUI/TPNumberPadLightStyleButton.h>
#import <libobjc.A.dylib/SBUIPasscodeNumberPadButton.h>

@class UIColor, NSString;

@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton <SBUIPasscodeNumberPadButton> {

	UIColor* _reduceTransparencyButtonColor;

}

@property (nonatomic,retain) UIColor * reduceTransparencyButtonColor;              //@synthesize reduceTransparencyButtonColor=_reduceTransparencyButtonColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)defaultSize;
+(double)_numberPadButtonOuterCircleDiameter;
+(UIEdgeInsets)paddingOutsideRing;
+(BOOL)_shouldUseAlternativeCirlceViewAlphas;
+(double)unhighlightedCircleViewAlpha;
+(double)highlightedCircleViewAlpha;
+(BOOL)usesTelephonyGlyphsWhereAvailable;
-(id)initForCharacter:(long long)arg1 ;
-(void)conformsToSBUIPasscodeNumberPadButton;
-(void)setReduceTransparencyButtonColor:(UIColor *)arg1 ;
-(UIColor *)reduceTransparencyButtonColor;
-(int)characterType;
-(id)stringCharacter;
@end

