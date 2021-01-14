/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface OBContentView : UIView {

	BOOL _aboveHeaderLayout;
	BOOL _customizedBackgroundColor;
	UIView* _bleedView;
	UIColor* _lightColor;
	UIColor* _darkColor;

}

@property (nonatomic,retain) UIColor * lightColor;                        //@synthesize lightColor=_lightColor - In the implementation block
@property (nonatomic,retain) UIColor * darkColor;                         //@synthesize darkColor=_darkColor - In the implementation block
@property (assign,nonatomic) BOOL aboveHeaderLayout;                      //@synthesize aboveHeaderLayout=_aboveHeaderLayout - In the implementation block
@property (assign,nonatomic) BOOL customizedBackgroundColor;              //@synthesize customizedBackgroundColor=_customizedBackgroundColor - In the implementation block
@property (assign,nonatomic,__weak) UIView * bleedView;                   //@synthesize bleedView=_bleedView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)bleedView;
-(id)_defaultColorForCurrentTraitCollection;
-(id)initWithFrame:(CGRect)arg1 aboveHeaderLayout:(BOOL)arg2 ;
-(void)setCustomizedBackgroundColor:(BOOL)arg1 ;
-(BOOL)aboveHeaderLayout;
-(BOOL)customizedBackgroundColor;
-(void)setBleedView:(UIView *)arg1 ;
-(BOOL)_colorIsDefault:(id)arg1 ;
-(void)setLightColor:(UIColor *)arg1 ;
-(void)setDarkColor:(UIColor *)arg1 ;
-(void)setAboveHeaderLayout:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(UIColor *)lightColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIColor *)darkColor;
@end

