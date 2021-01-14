/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUDashboardNavigationViewDelegate;
@class UIVisualEffectView, UIButton, UIImageView, UILabel, UIView, NSDictionary, NSArray, NSString;

@interface HUDashboardNavigationView : UIView {

	id<HUDashboardNavigationViewDelegate> _delegate;
	UIVisualEffectView* _headerTitleLabelEffectView;
	UIVisualEffectView* _titleButtonEffectView;
	UIButton* _homeAppButton;
	UIImageView* _chevronImageView;
	UIVisualEffectView* _separatorEffectView;
	UILabel* _headerTitleLabel;
	UIButton* _titleButton;
	UIView* _separatorView;
	NSDictionary* _largeTitleTextAttributes;
	NSArray* _allConstraints;

}

@property (nonatomic,retain) UIVisualEffectView * headerTitleLabelEffectView;                    //@synthesize headerTitleLabelEffectView=_headerTitleLabelEffectView - In the implementation block
@property (nonatomic,retain) UILabel * headerTitleLabel;                                         //@synthesize headerTitleLabel=_headerTitleLabel - In the implementation block
@property (nonatomic,retain) UIButton * titleButton;                                             //@synthesize titleButton=_titleButton - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * titleButtonEffectView;                         //@synthesize titleButtonEffectView=_titleButtonEffectView - In the implementation block
@property (nonatomic,retain) UIButton * homeAppButton;                                           //@synthesize homeAppButton=_homeAppButton - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * separatorEffectView;                           //@synthesize separatorEffectView=_separatorEffectView - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                             //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) NSDictionary * largeTitleTextAttributes;                            //@synthesize largeTitleTextAttributes=_largeTitleTextAttributes - In the implementation block
@property (nonatomic,retain) NSArray * allConstraints;                                           //@synthesize allConstraints=_allConstraints - In the implementation block
@property (nonatomic,retain) NSString * headerTitle; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic,__weak) id<HUDashboardNavigationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImageView * chevronImageView;                                   //@synthesize chevronImageView=_chevronImageView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setLargeTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSString *)headerTitle;
-(UIView *)separatorView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HUDashboardNavigationViewDelegate>)delegate;
-(void)setTitle:(NSString *)arg1 ;
-(void)_didTapLargeTitleButton:(id)arg1 ;
-(void)setDelegate:(id<HUDashboardNavigationViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(NSDictionary *)largeTitleTextAttributes;
-(id)initWithCoder:(id)arg1 ;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(UIImageView *)chevronImageView;
-(NSString *)title;
-(void)setSeparatorView:(UIView *)arg1 ;
-(NSArray *)allConstraints;
-(void)setAllConstraints:(NSArray *)arg1 ;
-(void)_didTapHomeAppButton:(id)arg1 ;
-(UIButton *)titleButton;
-(void)_rotateChevronButtonToAngle:(double)arg1 ;
-(UILabel *)headerTitleLabel;
-(UIVisualEffectView *)headerTitleLabelEffectView;
-(UIVisualEffectView *)titleButtonEffectView;
-(UIButton *)homeAppButton;
-(UIVisualEffectView *)separatorEffectView;
-(void)rotateChevronUp;
-(void)rotateChevronDown;
-(void)setHeaderTitleLabelEffectView:(UIVisualEffectView *)arg1 ;
-(void)setTitleButtonEffectView:(UIVisualEffectView *)arg1 ;
-(void)setHomeAppButton:(UIButton *)arg1 ;
-(void)setSeparatorEffectView:(UIVisualEffectView *)arg1 ;
-(void)setHeaderTitleLabel:(UILabel *)arg1 ;
-(void)setTitleButton:(UIButton *)arg1 ;
@end

