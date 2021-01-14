/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol ASCOfferButtonDelegate;
@class ASCOfferTheme, ASCOfferMetadata, UIImageView, UILabel, ASCModalViewInteraction, UIViewPropertyAnimator, CAAnimation;

@interface ASCOfferButton : UIControl {

	long long _subtitlePosition;
	ASCOfferTheme* _theme;
	ASCOfferMetadata* _metadata;
	id<ASCOfferButtonDelegate> _delegate;
	UIImageView* _imageView;
	UILabel* _titleLabelIfLoaded;
	UILabel* _subtitleLabelIfLoaded;
	ASCModalViewInteraction* _modalInteraction;
	UIViewPropertyAnimator* _currentTransition;

}

@property (nonatomic,readonly) UIImageView * imageView;                               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabelIfLoaded;                          //@synthesize titleLabelIfLoaded=_titleLabelIfLoaded - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UILabel * subtitleLabelIfLoaded;                       //@synthesize subtitleLabelIfLoaded=_subtitleLabelIfLoaded - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel; 
@property (nonatomic,retain) ASCModalViewInteraction * modalInteraction;              //@synthesize modalInteraction=_modalInteraction - In the implementation block
@property (nonatomic,retain) CAAnimation * imageAnimation; 
@property (nonatomic,retain) UIViewPropertyAnimator * currentTransition;              //@synthesize currentTransition=_currentTransition - In the implementation block
@property (assign,nonatomic) long long subtitlePosition;                              //@synthesize subtitlePosition=_subtitlePosition - In the implementation block
@property (nonatomic,retain) ASCOfferTheme * theme;                                   //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) ASCOfferMetadata * metadata;                             //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic,__weak) id<ASCOfferButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UILabel *)titleLabel;
-(ASCOfferTheme *)theme;
-(id)accessibilityLabel;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(UIImageView *)imageView;
-(id<ASCOfferButtonDelegate>)delegate;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTheme:(ASCOfferTheme *)arg1 ;
-(void)setMetadata:(ASCOfferMetadata *)arg1 ;
-(unsigned long long)accessibilityTraits;
-(void)setDelegate:(id<ASCOfferButtonDelegate>)arg1 ;
-(UILabel *)subtitleLabel;
-(id)description;
-(void)layoutSubviews;
-(id)accessibilityValue;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setCurrentTransition:(UIViewPropertyAnimator *)arg1 ;
-(id)accessibilityHint;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)accessibilityActivate;
-(UIViewPropertyAnimator *)currentTransition;
-(ASCOfferMetadata *)metadata;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)titleLabelIfLoaded;
-(void)setTitleLabelIfLoaded:(UILabel *)arg1 ;
-(void)updateLabelStyleProperties;
-(UILabel *)subtitleLabelIfLoaded;
-(void)setSubtitleLabelIfLoaded:(UILabel *)arg1 ;
-(long long)subtitlePosition;
-(void)updateImageStyleProperties;
-(void)setImageAnimation:(CAAnimation *)arg1 ;
-(void)setModalInteraction:(ASCModalViewInteraction *)arg1 ;
-(ASCModalViewInteraction *)modalInteraction;
-(void)transitionToMetadata:(id)arg1 scalingDurationBy:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)canTransitionToMetadata:(id)arg1 ;
-(BOOL)chainTransitionToMetadata:(id)arg1 scalingDurationBy:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)transitionImageForMetadata:(id)arg1 ;
-(id)transitionColorForMetadata:(id)arg1 ;
-(CAAnimation *)imageAnimation;
-(BOOL)shouldTransitionImageViewFromMetadata:(id)arg1 toMetadata:(id)arg2 ;
-(id)makeLayout;
-(void)setSubtitlePosition:(long long)arg1 ;
-(void)beginModalStateWithCancelBlock:(/*^block*/id)arg1 ;
-(void)endModalState;
-(void)transitionToMetadata:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

