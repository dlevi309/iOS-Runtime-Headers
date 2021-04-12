/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray, UIColor;

@interface UIKBTutorialModalDisplayStyling : NSObject {

	NSArray* _backgroundEffects;
	UIColor* _backgroundColor;
	UIColor* _mainTextColor;
	UIColor* _buttonTextColor;

}

@property (nonatomic,retain) NSArray * backgroundEffects;              //@synthesize backgroundEffects=_backgroundEffects - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * mainTextColor;                  //@synthesize mainTextColor=_mainTextColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonTextColor;                //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithKeyboardAppearance:(long long)arg1 ;
-(void)setBackgroundEffects:(NSArray *)arg1 ;
-(NSArray *)backgroundEffects;
-(id)backgroundBlurEffects:(long long)arg1 ;
-(UIColor *)mainTextColor;
-(void)setMainTextColor:(UIColor *)arg1 ;
-(UIColor *)buttonTextColor;
-(void)setButtonTextColor:(UIColor *)arg1 ;
@end

