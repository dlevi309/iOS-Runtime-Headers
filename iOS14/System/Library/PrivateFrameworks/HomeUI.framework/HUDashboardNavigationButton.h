/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol HUDashboardNavigationButtonDelegate;
@class NSString, NSNumber, UIMenu, HFWallpaperSlice, HUNavigationButtonLayoutOptions, UIView, CALayer, UIImageView, UILabel, NSLayoutConstraint, NSArray, UIImage;

@interface HUDashboardNavigationButton : UIControl {

	BOOL _hidesWhenCollapsed;
	id<HUDashboardNavigationButtonDelegate> _delegate;
	NSString* _identifier;
	unsigned long long _style;
	NSNumber* _badgeValue;
	UIMenu* _contextMenu;
	double _blurAlpha;
	HFWallpaperSlice* _blurredWallpaperSlice;
	HUNavigationButtonLayoutOptions* _layoutOptions;
	UIView* _backgroundContainerView;
	UIView* _backgroundBlurView;
	CALayer* _filterLayer;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UIView* _badgeView;
	NSLayoutConstraint* _minWidthConstraint;
	NSArray* _constraints;
	UIOffset _imageOffset;
	UIEdgeInsets _touchInsets;

}

@property (nonatomic,readonly) UIView * backgroundContainerView;                                   //@synthesize backgroundContainerView=_backgroundContainerView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundBlurView;                                        //@synthesize backgroundBlurView=_backgroundBlurView - In the implementation block
@property (nonatomic,retain) CALayer * filterLayer;                                                //@synthesize filterLayer=_filterLayer - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * badgeView;                                                   //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * minWidthConstraint;                              //@synthesize minWidthConstraint=_minWidthConstraint - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                                //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic,__weak) id<HUDashboardNavigationButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                           //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchInsets;                                             //@synthesize touchInsets=_touchInsets - In the implementation block
@property (assign,nonatomic) UIOffset imageOffset;                                                 //@synthesize imageOffset=_imageOffset - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSNumber * badgeValue;                                                  //@synthesize badgeValue=_badgeValue - In the implementation block
@property (nonatomic,retain) UIMenu * contextMenu;                                                 //@synthesize contextMenu=_contextMenu - In the implementation block
@property (assign,nonatomic) double blurAlpha;                                                     //@synthesize blurAlpha=_blurAlpha - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice;                             //@synthesize blurredWallpaperSlice=_blurredWallpaperSlice - In the implementation block
@property (nonatomic,retain) HUNavigationButtonLayoutOptions * layoutOptions;                      //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic) BOOL hidesWhenCollapsed;                                              //@synthesize hidesWhenCollapsed=_hidesWhenCollapsed - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(NSNumber *)badgeValue;
-(UILabel *)titleLabel;
-(void)setBadgeValue:(NSNumber *)arg1 ;
-(NSArray *)constraints;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)viewForLastBaselineLayout;
-(UIView *)badgeView;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)_didTap:(id)arg1 ;
-(UIImageView *)imageView;
-(id<HUDashboardNavigationButtonDelegate>)delegate;
-(UIEdgeInsets)alignmentRectInsets;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)setBadgeView:(UIView *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(UIOffset)imageOffset;
-(UIImage *)image;
-(void)setDelegate:(id<HUDashboardNavigationButtonDelegate>)arg1 ;
-(double)blurAlpha;
-(id)description;
-(void)layoutSubviews;
-(void)updateConstraints;
-(UIView *)backgroundBlurView;
-(HUNavigationButtonLayoutOptions *)layoutOptions;
-(UIMenu *)contextMenu;
-(void)setContextMenu:(UIMenu *)arg1 ;
-(UIEdgeInsets)touchInsets;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setTouchInsets:(UIEdgeInsets)arg1 ;
-(void)setBlurAlpha:(double)arg1 ;
-(unsigned long long)style;
-(NSString *)title;
-(void)setLayoutOptions:(HUNavigationButtonLayoutOptions *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateWallpaperContentsRectAndScale;
-(NSLayoutConstraint *)minWidthConstraint;
-(UIView *)backgroundContainerView;
-(void)setMinWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)normalizedWallpaperRectDidChange;
-(void)setImageOffset:(UIOffset)arg1 ;
-(BOOL)hidesWhenCollapsed;
-(void)setHidesWhenCollapsed:(BOOL)arg1 ;
-(CALayer *)filterLayer;
-(void)setFilterLayer:(CALayer *)arg1 ;
@end

