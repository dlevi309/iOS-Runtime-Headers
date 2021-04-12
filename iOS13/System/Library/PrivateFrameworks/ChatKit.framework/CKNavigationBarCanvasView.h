/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKNavigationBarCanvasViewDelegate;
@class UIView, CKNavigationButtonView, UIImageView;

@interface CKNavigationBarCanvasView : UIView {

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
	UIImageView* _statusIndicatorImageView;

}

@property (nonatomic,retain) CKNavigationButtonView * buttonViewFaceTimeAudio;                   //@synthesize buttonViewFaceTimeAudio=_buttonViewFaceTimeAudio - In the implementation block
@property (nonatomic,retain) CKNavigationButtonView * buttonViewFaceTimeVideo;                   //@synthesize buttonViewFaceTimeVideo=_buttonViewFaceTimeVideo - In the implementation block
@property (nonatomic,retain) CKNavigationButtonView * buttonViewInfo;                            //@synthesize buttonViewInfo=_buttonViewInfo - In the implementation block
@property (nonatomic,retain) UIImageView * statusIndicatorImageView;                             //@synthesize statusIndicatorImageView=_statusIndicatorImageView - In the implementation block
@property (assign,nonatomic) BOOL isTearingDownButtonViews;                                      //@synthesize isTearingDownButtonViews=_isTearingDownButtonViews - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingAvatars;                                            //@synthesize isAnimatingAvatars=_isAnimatingAvatars - In the implementation block
@property (assign,nonatomic) BOOL ignoreNextWidthChange;                                         //@synthesize ignoreNextWidthChange=_ignoreNextWidthChange - In the implementation block
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
+(double)minHeight;
+(double)maxHeight;
+(double)preferredLandscapeHeightForRegularWidth;
+(double)preferredLandscapeHeightForCompactWidth;
+(double)heightWithButtonViews;
+(double)heightWithoutButtonViews;
+(double)heightWithButtonViewsContactless;
+(double)heightWithoutButtonViewsContactless;
-(id<CKNavigationBarCanvasViewDelegate>)delegate;
-(void)setDelegate:(id<CKNavigationBarCanvasViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(double)preferredHeight;
-(void)setPreferredHeight:(double)arg1 ;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(BOOL)_canShowAvatarView;
-(void)setLeftItemView:(UIView *)arg1 ;
-(void)setRightItemView:(UIView *)arg1 ;
-(void)setIsInEditingMode:(BOOL)arg1 ;
-(void)setEnforceLeftItemViewsAlignmentToCenter:(BOOL)arg1 ;
-(void)clearAllItemViews;
-(BOOL)isShowingControls;
-(void)setShouldAnimateAvatarLayoutChanges:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 preferredHeight:(double)arg2 ;
-(void)setMultiwayAudioButtonHidden:(BOOL)arg1 ;
-(void)setKeepTitleViewCentered:(BOOL)arg1 ;
-(UIView *)leftItemView;
-(UIView *)rightItemView;
-(CKNavigationButtonView *)buttonViewFaceTimeAudio;
-(CKNavigationButtonView *)buttonViewFaceTimeVideo;
-(BOOL)isBusinessChat;
-(void)setIsShowingControls:(BOOL)arg1 ;
-(CKNavigationButtonView *)buttonViewInfo;
-(BOOL)isInEditingMode;
-(void)setIsBusinessChat:(BOOL)arg1 ;
-(void)setJoinButtonStyle:(long long)arg1 ;
-(void)setStatusIndicatorType:(long long)arg1 ;
-(UIImageView *)statusIndicatorImageView;
-(void)setStatusIndicatorImageView:(UIImageView *)arg1 ;
-(long long)statusIndicatorType;
-(void)setIsAnimatingAvatars:(BOOL)arg1 ;
-(void)setIgnoreNextWidthChange:(BOOL)arg1 ;
-(void)removeButtonViewsIfNeeded;
-(BOOL)multiwayAudioButtonHidden;
-(BOOL)audioEnabled;
-(BOOL)videoEnabled;
-(void)_updateJoinButtonStyle;
-(CGRect)_calculateFrameForButtonPositionType:(long long)arg1 shouldOffset:(BOOL)arg2 ;
-(long long)joinButtonStyle;
-(void)_setupButtonContainer;
-(void)_tearDownButtonContainer;
-(void)setButtonViewFaceTimeAudio:(CKNavigationButtonView *)arg1 ;
-(void)setIsTearingDownButtonViews:(BOOL)arg1 ;
-(void)setButtonViewFaceTimeVideo:(CKNavigationButtonView *)arg1 ;
-(void)setButtonViewInfo:(CKNavigationButtonView *)arg1 ;
-(void)_addLaserEffectToButton:(id)arg1 ;
-(BOOL)shouldAnimateAvatarLayoutChanges;
-(BOOL)ignoreNextWidthChange;
-(BOOL)isAnimatingAvatars;
-(BOOL)_shouldUseTallHeight;
-(UIEdgeInsets)systemMinimumLayoutMarginsFromDelegate;
-(BOOL)enforceLeftItemViewsAlignmentToCenter;
-(BOOL)keepTitleViewCentered;
-(void)layoutTitleViewIfNeeded:(CGRect)arg1 ;
-(BOOL)isTearingDownButtonViews;
@end

