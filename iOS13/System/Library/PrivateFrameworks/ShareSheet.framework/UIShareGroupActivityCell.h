/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _UIHostActivityProxy, UILabel, UIImageView, UIView, CALayer, UIVisualEffectView, NSArray;

@interface UIShareGroupActivityCell : UICollectionViewCell {

	BOOL _disabled;
	_UIHostActivityProxy* _activityProxy;
	UILabel* _titleLabel;
	UIImageView* _activityImageView;
	UIView* _imageSlotView;
	UIView* _titleSlotView;
	UIView* _badgeSlotView;
	CALayer* _darkeningLayer;
	UIVisualEffectView* _vibrantLabelView;
	UILabel* _labelForPositioning;
	UIImageView* _darkenedImageView;
	NSArray* _regularConstraints;
	NSArray* _largeTextConstraints;

}

@property (nonatomic,retain) CALayer * darkeningLayer;                           //@synthesize darkeningLayer=_darkeningLayer - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrantLabelView;              //@synthesize vibrantLabelView=_vibrantLabelView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * labelForPositioning;                      //@synthesize labelForPositioning=_labelForPositioning - In the implementation block
@property (nonatomic,retain) UIImageView * activityImageView;                    //@synthesize activityImageView=_activityImageView - In the implementation block
@property (nonatomic,retain) UIImageView * darkenedImageView;                    //@synthesize darkenedImageView=_darkenedImageView - In the implementation block
@property (nonatomic,retain) UIView * imageSlotView;                             //@synthesize imageSlotView=_imageSlotView - In the implementation block
@property (nonatomic,retain) UIView * titleSlotView;                             //@synthesize titleSlotView=_titleSlotView - In the implementation block
@property (nonatomic,retain) UIView * badgeSlotView;                             //@synthesize badgeSlotView=_badgeSlotView - In the implementation block
@property (nonatomic,retain) NSArray * regularConstraints;                       //@synthesize regularConstraints=_regularConstraints - In the implementation block
@property (nonatomic,retain) NSArray * largeTextConstraints;                     //@synthesize largeTextConstraints=_largeTextConstraints - In the implementation block
@property (nonatomic,retain) _UIHostActivityProxy * activityProxy;               //@synthesize activityProxy=_activityProxy - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                    //@synthesize disabled=_disabled - In the implementation block
-(void)prepareForReuse;
-(BOOL)isDisabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setupConstraints;
-(void)setActivityImageView:(UIImageView *)arg1 ;
-(UIImageView *)activityImageView;
-(void)setActivityProxy:(_UIHostActivityProxy *)arg1 ;
-(_UIHostActivityProxy *)activityProxy;
-(void)setLabelForPositioning:(UILabel *)arg1 ;
-(UILabel *)labelForPositioning;
-(void)setImageSlotView:(UIView *)arg1 ;
-(UIView *)imageSlotView;
-(void)setTitleSlotView:(UIView *)arg1 ;
-(UIView *)titleSlotView;
-(void)setLargeTextConstraints:(NSArray *)arg1 ;
-(void)setRegularConstraints:(NSArray *)arg1 ;
-(NSArray *)largeTextConstraints;
-(NSArray *)regularConstraints;
-(void)_updateForCurrentSizeCategory;
-(void)updateDarkening;
-(UIView *)badgeSlotView;
-(void)setVibrantLabelView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)vibrantLabelView;
-(void)setBadgeSlotView:(UIView *)arg1 ;
-(UIImageView *)darkenedImageView;
-(CALayer *)darkeningLayer;
-(void)setDarkeningLayer:(CALayer *)arg1 ;
-(void)setDarkenedImageView:(UIImageView *)arg1 ;
@end

