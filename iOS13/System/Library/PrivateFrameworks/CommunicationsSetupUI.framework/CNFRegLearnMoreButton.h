/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString;

@interface CNFRegLearnMoreButton : UIButton {

	long long _style;
	NSString* _buttonText;
	BOOL _alwaysUnderline;
	BOOL _usesImage;

}

@property (assign,nonatomic) long long style;                   //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * buttonText;               //@synthesize buttonText=_buttonText - In the implementation block
@property (assign,nonatomic) BOOL alwaysUnderline;              //@synthesize alwaysUnderline=_alwaysUnderline - In the implementation block
@property (assign,nonatomic) BOOL usesImage;                    //@synthesize usesImage=_usesImage - In the implementation block
+(id)roundedButtonWithText:(id)arg1 color:(id)arg2 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(void)setUsesImage:(BOOL)arg1 ;
-(void)setAlwaysUnderline:(BOOL)arg1 ;
-(void)_setupLearnMoreTextForCurrentStyle;
-(void)_setupArrowImageForCurrentStyle;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 text:(id)arg3 ;
-(BOOL)usesImage;
-(BOOL)alwaysUnderline;
@end

