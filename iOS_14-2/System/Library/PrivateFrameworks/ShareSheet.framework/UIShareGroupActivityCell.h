/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _UIHostActivityProxy, UILabel, UIImageView, UIView, UIVisualEffectView, NSArray;

@interface UIShareGroupActivityCell : UICollectionViewCell {

	BOOL _disabled;
	BOOL _longPressable;
	_UIHostActivityProxy* _activityProxy;
	UILabel* _titleLabel;
	UIImageView* _activityImageView;
	UIView* _imageSlotView;
	UIView* _titleSlotView;
	UIView* _badgeSlotView;
	UIVisualEffectView* _vibrantLabelView;
	UILabel* _labelForPositioning;
	NSArray* _regularConstraints;
	NSArray* _largeTextConstraints;

}

@property (nonatomic,retain) UIVisualEffectView * vibrantLabelView;                  //@synthesize vibrantLabelView=_vibrantLabelView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * labelForPositioning;                          //@synthesize labelForPositioning=_labelForPositioning - In the implementation block
@property (nonatomic,retain) UIImageView * activityImageView;                        //@synthesize activityImageView=_activityImageView - In the implementation block
@property (nonatomic,retain) UIView * imageSlotView;                                 //@synthesize imageSlotView=_imageSlotView - In the implementation block
@property (nonatomic,retain) UIView * titleSlotView;                                 //@synthesize titleSlotView=_titleSlotView - In the implementation block
@property (nonatomic,retain) UIView * badgeSlotView;                                 //@synthesize badgeSlotView=_badgeSlotView - In the implementation block
@property (nonatomic,retain) NSArray * regularConstraints;                           //@synthesize regularConstraints=_regularConstraints - In the implementation block
@property (nonatomic,retain) NSArray * largeTextConstraints;                         //@synthesize largeTextConstraints=_largeTextConstraints - In the implementation block
@property (nonatomic,retain) _UIHostActivityProxy * activityProxy;                   //@synthesize activityProxy=_activityProxy - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                        //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isLongPressable,nonatomic) BOOL longPressable;              //@synthesize longPressable=_longPressable - In the implementation block
-(UILabel *)titleLabel;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(void)prepareForReuse;
-(void)setActivityImageView:(UIImageView *)arg1 ;
-(UIImageView *)activityImageView;
-(void)setActivityProxy:(_UIHostActivityProxy *)arg1 ;
-(_UIHostActivityProxy *)activityProxy;
-(NSArray *)regularConstraints;
-(void)setRegularConstraints:(NSArray *)arg1 ;
-(void)setLabelForPositioning:(UILabel *)arg1 ;
-(UILabel *)labelForPositioning;
-(void)setImageSlotView:(UIView *)arg1 ;
-(UIView *)imageSlotView;
-(void)setTitleSlotView:(UIView *)arg1 ;
-(UIView *)titleSlotView;
-(void)setLargeTextConstraints:(NSArray *)arg1 ;
-(void)updateDarkening;
-(NSArray *)largeTextConstraints;
-(void)_updateForCurrentSizeCategory;
-(BOOL)isLongPressable;
-(void)setLongPressable:(BOOL)arg1 ;
-(UIView *)badgeSlotView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setupConstraints;
-(void)setVibrantLabelView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)vibrantLabelView;
-(void)setBadgeSlotView:(UIView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

