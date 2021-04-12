/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <UIKitCore/UIControl.h>

@class CAFilter;

@interface ASAuthorizationAppleIDButton : UIControl {

	long long _type;
	long long _style;
	CAFilter* _highlightFilter;
	double _cornerRadius;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(Class)layerClass;
+(double)defaultCornerRadius;
+(id)buttonWithType:(long long)arg1 style:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(double)cornerRadius;
-(void)drawRect:(CGRect)arg1 ;
-(void)_createHighlightFilterIfNecessary;
-(id)initWithAuthorizationButtonType:(long long)arg1 authorizationButtonStyle:(long long)arg2 ;
-(void)_drawRect:(CGRect)arg1 inView:(id)arg2 ;
-(long long)_ak_buttonType;
-(long long)_ak_buttonStyle;
-(void)_performAnimationToSetHighlighted:(BOOL)arg1 ;
@end

