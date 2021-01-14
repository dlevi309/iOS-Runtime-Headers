/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@protocol CKNavigationBarCanvasViewDelegate;
@class UIView, CKNavigationButtonView, UIMenu, UIImageView, UIButton, UIContextMenuInteraction, UIColor, NSString;

@interface CKNavigationBarCanvasView : UIView <UIContextMenuInteractionDelegate> {

	BOOL _enforceLeftItemViewsAlignmentToCenter;
	BOOL _keepTitleViewCentered;
	BOOL _isBusinessChat;
	BOOL _videoEnabled;
	BOOL _audioEnabled;
	BOOL _shouldAnimateAvatarLayoutChanges;
	BOOL _isInEditingMode;
	BOOL _isShowingControls;
	BOOL _multiwayAudioButtonHidden;
	BOOL _isTearingDownButtonViews;
	BOOL _isAnimatingAvatars;
	BOOL _ignoreNextWidthChange;
	id<CKNavigationBarCanvasViewDelegate> _delegate;
	UIView* _titleView;
	UIView* _leftItemView;
	UIView* _rightItemView;
	double _preferredHeight;
	long long _statusIndicatorType;
	long long _joinButtonStyle;
	CKNavigationButtonView* _buttonViewFaceTimeAudio;
	CKNavigationButtonView* _buttonViewFaceTimeVideo;
	CKNavigationButtonView* _buttonViewInfo;
	UIMenu* _titleViewContextMenu;
	UIImageView* _statusIndicatorImageView;
	UIButton* _invisibleContextMenuButton;
	UIContextMenuInteraction* _secondaryTitleInteraction;
	UIColor* _titleDefaultBackgroundColor;

}

@property (nonatomic,retain) CKNavigationButtonView * buttonViewFaceTimeAudio;                   //@synthesize buttonViewFaceTimeAudio=_buttonViewFaceTimeAudio - In the implementation block
@property (nonatomic,retain) CKNavigationButtonView * buttonViewFaceTimeVideo;                   //@synthesize buttonViewFaceTimeVideo=_buttonViewFaceTimeVideo - In the implementation block
@property (nonatomic,retain) CKNavigationButtonView * buttonViewInfo;                            //@synthesize buttonViewInfo=_buttonViewInfo - In the implementation block
@property (nonatomic,retain) UIImageView * statusIndicatorImageView;                             //@synthesize statusIndicatorImageView=_statusIndicatorImageView - In the implementation block
@property (assign,nonatomic) BOOL isTearingDownButtonViews;                                      //@synthesize isTearingDownButtonViews=_isTearingDownButtonViews - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingAvatars;                                            //@synthesize isAnimatingAvatars=_isAnimatingAvatars - In the implementation block
@property (assign,nonatomic) BOOL ignoreNextWidthChange;                                         //@synthesize ignoreNextWidthChange=_ignoreNextWidthChange - In the implementation block
@property (nonatomic,retain) UIButton * invisibleContextMenuButton;                              //@synthesize invisibleContextMenuButton=_invisibleContextMenuButton - In the implementation block
@property (nonatomic,retain) UIContextMenuInteraction * secondaryTitleInteraction;               //@synthesize secondaryTitleInteraction=_secondaryTitleInteraction - In the implementation block
@property (nonatomic,retain) UIColor * titleDefaultBackgroundColor;                              //@synthesize titleDefaultBackgroundColor=_titleDefaultBackgroundColor - In the implementation block
@property (assign,nonatomic,__weak) id<CKNavigationBarCanvasViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * titleView;                                                 //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UIView * leftItemView;                                              //@synthesize leftItemView=_leftItemView - In the implementation block
@property (nonatomic,retain) UIView * rightItemView;                                             //@synthesize rightItemView=_rightItemView - In the implementation block
@property (assign,nonatomic) double preferredHeight;                                             //@synthesize preferredHeight=_preferredHeight - In the implementation block
@property (assign,nonatomic) BOOL enforceLeftItemViewsAlignmentToCenter;                         //@synthesize enforceLeftItemViewsAlignmentToCenter=_enforceLeftItemViewsAlignmentToCenter - In the implementation block
@property (assign,nonatomic) BOOL keepTitleViewCentered;                                         //@synthesize keepTitleViewCentered=_keepTitleViewCentered - In the implementation block
@property (assign,nonatomic) BOOL isBusinessChat;                                                //@synthesize isBusinessChat=_isBusinessChat - In the implementation block
@property (assign,nonatomic) BOOL videoEnabled;                                                  //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,nonatomic) BOOL audioEnabled;                                                  //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateAvatarLayoutChanges;                              //@synthesize shouldAnimateAvatarLayoutChanges=_shouldAnimateAvatarLayoutChanges - In the implementation block
@property (assign,nonatomic) BOOL isInEditingMode;                                               //@synthesize isInEditingMode=_isInEditingMode - In the implementation block
@property (assign,nonatomic) BOOL isShowingControls;                                             //@synthesize isShowingControls=_isShowingControls - In the implementation block
@property (assign,nonatomic) BOOL multiwayAudioButtonHidden;                                     //@synthesize multiwayAudioButtonHidden=_multiwayAudioButtonHidden - In the implementation block
@property (assign,nonatomic) long long statusIndicatorType;                                      //@synthesize statusIndicatorType=_statusIndicatorType - In the implementation block
@property (assign,nonatomic) long long joinButtonStyle;                                          //@synthesize joinButtonStyle=_joinButtonStyle - In the implementation block
@property (nonatomic,retain) UIMenu * titleViewContextMenu;                                      //@synthesize titleViewContextMenu=_titleViewContextMenu - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)minHeight;
+(double)preferredLandscapeHeightForRegularWidth;
+(double)heightWithButtonViews;
+(double)preferredLandscapeHeightForCompactWidth;
+(double)heightWithoutButtonViews;
+(double)heightWithButtonViewsContactless;
+(double)heightWithoutButtonViewsContactless;
+(double)maxHeight;
-(UIEdgeInsets)safeAreaInsets;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(UIView *)titleView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CKNavigationBarCanvasViewDelegate>)delegate;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)audioEnabled;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTitleView:(UIView *)arg1 ;
-(void)setIsInEditingMode:(BOOL)arg1 ;
-(void)setDelegate:(id<CKNavigationBarCanvasViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(double)preferredHeight;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnforceLeftItemViewsAlignmentToCenter:(BOOL)arg1 ;
-(UIView *)leftItemView;
-(void)setPreferredHeight:(double)arg1 ;
-(UIView *)rightItemView;
-(BOOL)isBusinessChat;
-(void)clearAllItemViews;
-(BOOL)isShowingControls;
-(void)setShouldAnimateAvatarLayoutChanges:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 preferredHeight:(double)arg2 ;
-(CKNavigationButtonView *)buttonViewInfo;
-(void)setMultiwayAudioButtonHidden:(BOOL)arg1 ;
-(void)setKeepTitleViewCentered:(BOOL)arg1 ;
-(CKNavigationButtonView *)buttonViewFaceTimeAudio;
-(CKNavigationButtonView *)buttonViewFaceTimeVideo;
-(void)setIsShowingControls:(BOOL)arg1 ;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(BOOL)isInEditingMode;
-(void)setIsBusinessChat:(BOOL)arg1 ;
-(void)setJoinButtonStyle:(long long)arg1 ;
-(void)setStatusIndicatorType:(long long)arg1 ;
-(BOOL)videoEnabled;
-(void)setIsAnimatingAvatars:(BOOL)arg1 ;
-(void)setIgnoreNextWidthChange:(BOOL)arg1 ;
-(void)removeButtonViewsIfNeeded;
-(BOOL)multiwayAudioButtonHidden;
-(long long)joinButtonStyle;
-(void)_updateJoinButtonStyle;
-(CGRect)_calculateFrameForButtonPositionType:(long long)arg1 shouldOffset:(BOOL)arg2 ;
-(void)_setupButtonContainer;
-(void)_tearDownButtonContainer;
-(void)setButtonViewFaceTimeAudio:(CKNavigationButtonView *)arg1 ;
-(void)setIsTearingDownButtonViews:(BOOL)arg1 ;
-(void)setButtonViewFaceTimeVideo:(CKNavigationButtonView *)arg1 ;
-(void)setButtonViewInfo:(CKNavigationButtonView *)arg1 ;
-(void)setTitleDefaultBackgroundColor:(UIColor *)arg1 ;
-(UIButton *)invisibleContextMenuButton;
-(void)setInvisibleContextMenuButton:(UIButton *)arg1 ;
-(BOOL)isAnimatingAvatars;
-(void)setSecondaryTitleInteraction:(UIContextMenuInteraction *)arg1 ;
-(UIContextMenuInteraction *)secondaryTitleInteraction;
-(void)didHoverOverTitleView:(id)arg1 ;
-(UIMenu *)titleViewContextMenu;
-(UIColor *)titleDefaultBackgroundColor;
-(void)_addLaserEffectToButton:(id)arg1 ;
-(BOOL)shouldAnimateAvatarLayoutChanges;
-(BOOL)ignoreNextWidthChange;
-(UIEdgeInsets)systemMinimumLayoutMarginsFromDelegate;
-(BOOL)enforceLeftItemViewsAlignmentToCenter;
-(BOOL)keepTitleViewCentered;
-(void)layoutTitleViewIfNeeded:(CGRect)arg1 ;
-(BOOL)isTearingDownButtonViews;
-(void)setTitleViewContextMenu:(UIMenu *)arg1 ;
-(BOOL)_canShowAvatarView;
-(void)setLeftItemView:(UIView *)arg1 ;
-(void)setRightItemView:(UIView *)arg1 ;
-(UIImageView *)statusIndicatorImageView;
-(void)setStatusIndicatorImageView:(UIImageView *)arg1 ;
-(long long)statusIndicatorType;
@end

