/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)defaultCornerRadius;
+(Class)layerClass;
+(id)buttonWithType:(long long)arg1 style:(long long)arg2 ;
-(id)accessibilityLabel;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)encodeWithCoder:(id)arg1 ;
-(double)cornerRadius;
-(unsigned long long)accessibilityTraits;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)_createHighlightFilterIfNecessary;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithAuthorizationButtonType:(long long)arg1 authorizationButtonStyle:(long long)arg2 ;
-(void)_drawRect:(CGRect)arg1 inView:(id)arg2 ;
-(long long)_ak_buttonType;
-(long long)_ak_buttonStyle;
-(void)_performAnimationToSetHighlighted:(BOOL)arg1 ;
@end

