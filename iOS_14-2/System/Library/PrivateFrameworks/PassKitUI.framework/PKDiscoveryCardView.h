/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(CGSize)expandedSize;
+(double)cornerRadius;
+(double)expandedWidth;
+(double)expandedHeight;
+(double)compressedWidth;
+(double)compressedHeight;
+(CGSize)compressedSize;
-(void)setRemoving:(BOOL)arg1 ;
-(UIEdgeInsets)_currentContentInsets;
-(id<PKDiscoveryCardViewDelegate>)delegate;
-(long long)displayType;
-(void)setDisplayType:(long long)arg1 ;
-(id)initWithArticleLayout:(id)arg1 displayType:(long long)arg2 dismissImage:(id)arg3 callToActionTappedOverride:(/*^block*/id)arg4 ;
-(id)_titleLabelTextColor;
-(id)_dismissButtonTintColor;
-(void)_dismissButtonPressed:(id)arg1 ;
-(void)_updateForDisplayType;
-(double)_yOffsetToHeadingLabel;
-(void)setDelegate:(id<PKDiscoveryCardViewDelegate>)arg1 ;
-(void)setSafeAreaOverrideInsets:(UIEdgeInsets)arg1 ;
-(PKDiscoveryArticleLayout *)articleLayout;
-(void)layoutSubviews;
-(void)setDismissAction:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHasSafeAreaInsetOverride:(BOOL)arg1 ;
-(id)initWithArticleLayout:(id)arg1 displayType:(long long)arg2 dismissImage:(id)arg3 ;
-(id)dismissAction;
-(BOOL)hasSafeAreaInsetOverride;
-(UIEdgeInsets)safeAreaOverrideInsets;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)_loadImageData;
-(void)setCallToActionTappedOverride:(id)arg1 ;
-(void)setArticleLayout:(PKDiscoveryArticleLayout *)arg1 ;
-(BOOL)isRemoving;
-(id)callToActionTappedOverride;
-(long long)priority;
-(id)_headingLabelFont;
-(id)_headingLabelTextColor;
@end

