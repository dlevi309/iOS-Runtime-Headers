/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <TelephonyUI/TPNumberPadDarkStyleButton.h>
#import <libobjc.A.dylib/SBUIPasscodeNumberPadButton.h>

@class UIColor, NSString;

@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton> {

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
+(int)_characterTypeForCharacter:(long long)arg1 ;
+(id)_stringCharacterForCharacter:(long long)arg1 ;
+(BOOL)_shouldUseAlternativeCirlceViewAlphas;
+(double)outerCircleDiameter;
+(double)unhighlightedCircleViewAlpha;
+(double)highlightedCircleViewAlpha;
-(id)initForCharacter:(long long)arg1 ;
-(void)conformsToSBUIPasscodeNumberPadButton;
-(void)setReduceTransparencyButtonColor:(UIColor *)arg1 ;
-(UIColor *)reduceTransparencyButtonColor;
-(int)characterType;
-(id)stringCharacter;
@end

