/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKDiscoveryCardViewDelegate;
@class PKDiscoveryCard, PKDiscoveryMedia, UIImageView, UILabel, PKDiscoveryCallToActionFooterView, UITapGestureRecognizer, PKContinuousButton, PKDiscoveryArticleLayout;

@interface PKDiscoveryCardView : UIView {

	PKDiscoveryCard* _card;
	PKDiscoveryMedia* _media;
	UIImageView* _backgroundImageView;
	UILabel* _headingLabel;
	UILabel* _titleLabel;
	UIImageView* _shadowView;
	UIImageView* _maskImageView;
	PKDiscoveryCallToActionFooterView* _ctaFooterView;
	UITapGestureRecognizer* _tapRecognizer;
	PKContinuousButton* _dismissButton;
	BOOL _removing;
	BOOL _hasSafeAreaInsetOverride;
	PKDiscoveryArticleLayout* _articleLayout;
	long long _priority;
	id<PKDiscoveryCardViewDelegate> _delegate;
	long long _displayType;
	/*^block*/id _callToActionTappedOverride;
	/*^block*/id _dismissAction;
	UIEdgeInsets _safeAreaOverrideInsets;

}

@property (nonatomic,retain) PKDiscoveryArticleLayout * articleLayout;                     //@synthesize articleLayout=_articleLayout - In the implementation block
@property (nonatomic,readonly) long long priority;                                         //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic,__weak) id<PKDiscoveryCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long displayType;                                        //@synthesize displayType=_displayType - In the implementation block
@property (assign,getter=isRemoving,nonatomic) BOOL removing;                              //@synthesize removing=_removing - In the implementation block
@property (assign,nonatomic) BOOL hasSafeAreaInsetOverride;                                //@synthesize hasSafeAreaInsetOverride=_hasSafeAreaInsetOverride - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaOverrideInsets;                          //@synthesize safeAreaOverrideInsets=_safeAreaOverrideInsets - In the implementation block
@property (nonatomic,copy) id callToActionTappedOverride;                                  //@synthesize callToActionTappedOverride=_callToActionTappedOverride - In the implementation block
@property (nonatomic,copy) id dismissAction;                                               //@synthesize dismissAction=_dismissAction - In the implementation block
+(double)cornerRadius;
+(CGSize)compressedSize;
+(double)expandedWidth;
+(double)compressedWidth;
+(double)expandedHeight;
+(double)compressedHeight;
+(CGSize)expandedSize;
-(id<PKDiscoveryCardViewDelegate>)delegate;
-(void)setDelegate:(id<PKDiscoveryCardViewDelegate>)arg1 ;
-(long long)priority;
-(long long)displayType;
-(void)setDisplayType:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setDismissAction:(id)arg1 ;
-(id)dismissAction;
-(void)tapGestureRecognized:(id)arg1 ;
-(id)_titleLabelTextColor;
-(void)_loadImageData;
-(void)setCallToActionTappedOverride:(id)arg1 ;
-(void)setSafeAreaOverrideInsets:(UIEdgeInsets)arg1 ;
-(void)setHasSafeAreaInsetOverride:(BOOL)arg1 ;
-(PKDiscoveryArticleLayout *)articleLayout;
-(id)initWithArticleLayout:(id)arg1 displayType:(long long)arg2 dismissImage:(id)arg3 ;
-(BOOL)hasSafeAreaInsetOverride;
-(UIEdgeInsets)safeAreaOverrideInsets;
-(void)setArticleLayout:(PKDiscoveryArticleLayout *)arg1 ;
-(id)callToActionTappedOverride;
-(BOOL)isRemoving;
-(void)setRemoving:(BOOL)arg1 ;
-(id)initWithArticleLayout:(id)arg1 displayType:(long long)arg2 dismissImage:(id)arg3 callToActionTappedOverride:(/*^block*/id)arg4 ;
-(id)_headingLabelFont;
-(id)_headingLabelTextColor;
-(id)_dismissButtonTintColor;
-(void)_dismissButtonPressed:(id)arg1 ;
-(void)_updateForDisplayType;
-(UIEdgeInsets)_currentContentInsets;
-(double)_yOffsetToHeadingLabel;
@end

