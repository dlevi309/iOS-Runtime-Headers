/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, CAGradientLayer, UILabel, NSString, UIImage, UIColor;

@interface PKSplashImageHeaderView : UIView {

	UIView* _fallbackColorView;
	UIImageView* _backgroundImageView;
	CAGradientLayer* _gradientLayer;
	UIImageView* _iconImageView;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _attributionLabel;
	unsigned long long _screenType;
	BOOL _showsGradientOverlay;
	NSString* _primaryText;
	NSString* _secondaryText;
	UIImage* _iconImage;
	UIImage* _backgroundImage;
	UIColor* _fallbackColor;
	NSString* _attributionProviderName;

}

@property (nonatomic,copy) NSString * primaryText;                          //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                        //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                           //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                     //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) BOOL showsGradientOverlay;                     //@synthesize showsGradientOverlay=_showsGradientOverlay - In the implementation block
@property (nonatomic,retain) UIColor * fallbackColor;                       //@synthesize fallbackColor=_fallbackColor - In the implementation block
@property (nonatomic,copy) NSString * attributionProviderName;              //@synthesize attributionProviderName=_attributionProviderName - In the implementation block
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIColor *)fallbackColor;
-(UIImage *)iconImage;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setBackgroundImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFallbackColor:(UIColor *)arg1 ;
-(void)setShowsGradientOverlay:(BOOL)arg1 ;
-(void)setAttributionProviderName:(NSString *)arg1 ;
-(BOOL)showsGradientOverlay;
-(NSString *)attributionProviderName;
@end

