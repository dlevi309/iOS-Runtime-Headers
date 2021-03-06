/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initForCharacter:(unsigned)arg1 ;
-(int)characterType;
-(id)stringCharacter;
-(void)setReduceTransparencyButtonColor:(UIColor *)arg1 ;
-(UIColor *)reduceTransparencyButtonColor;
@end

