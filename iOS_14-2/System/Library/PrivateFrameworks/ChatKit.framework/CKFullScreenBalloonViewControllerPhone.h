/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKFullScreenBalloonViewController.h>
#import <libobjc.A.dylib/CKActionSheetMenuViewDelegate.h>
#import <libobjc.A.dylib/CKBalloonViewDelegate.h>
#import <libobjc.A.dylib/CKStickerDetailViewControllerDelegate.h>
#import <libobjc.A.dylib/PHLivePhotoViewDelegate.h>

@class CKActionSheetMenuView, CKGroupAcknowledgmentVotingViewController, UIView, NSArray, CKLivePhotoBalloonView, UIVisualEffectView, CAShapeLayer, NSString;

@interface CKFullScreenBalloonViewControllerPhone : CKFullScreenBalloonViewController <CKActionSheetMenuViewDelegate, CKBalloonViewDelegate, CKStickerDetailViewControllerDelegate, PHLivePhotoViewDelegate> {

	BOOL _shouldLayoutViews;
	BOOL _animationsDisabledForTesting;
	CKActionSheetMenuView* _menuView;
	CKGroupAcknowledgmentVotingViewController* _votingViewController;
	UIView* _balloonView;
	NSArray* _interfaceActions;
	CKLivePhotoBalloonView* _livePhotoBalloonView;
	UIVisualEffectView* _replyButtonEffectView;
	CAShapeLayer* _replyButtonBorderLayer;
	CAShapeLayer* _replyButtonMaskLayer;
	CAShapeLayer* _tintViewMaskLayer;
	UIView* _replyButtonView;
	double _balloonYOffsetFromTranscript;

}

@property (nonatomic,retain) CKActionSheetMenuView * menuView;                                              //@synthesize menuView=_menuView - In the implementation block
@property (nonatomic,retain) CKGroupAcknowledgmentVotingViewController * votingViewController;              //@synthesize votingViewController=_votingViewController - In the implementation block
@property (nonatomic,retain) UIView * balloonView;                                                          //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,copy) NSArray * interfaceActions;                                                      //@synthesize interfaceActions=_interfaceActions - In the implementation block
@property (nonatomic,retain) CKLivePhotoBalloonView * livePhotoBalloonView;                                 //@synthesize livePhotoBalloonView=_livePhotoBalloonView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * replyButtonEffectView;                                    //@synthesize replyButtonEffectView=_replyButtonEffectView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * replyButtonBorderLayer;                                         //@synthesize replyButtonBorderLayer=_replyButtonBorderLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * replyButtonMaskLayer;                                           //@synthesize replyButtonMaskLayer=_replyButtonMaskLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * tintViewMaskLayer;                                              //@synthesize tintViewMaskLayer=_tintViewMaskLayer - In the implementation block
@property (nonatomic,retain) UIView * replyButtonView;                                                      //@synthesize replyButtonView=_replyButtonView - In the implementation block
@property (assign,nonatomic) double balloonYOffsetFromTranscript;                                           //@synthesize balloonYOffsetFromTranscript=_balloonYOffsetFromTranscript - In the implementation block
@property (assign,nonatomic) BOOL animationsDisabledForTesting;                                             //@synthesize animationsDisabledForTesting=_animationsDisabledForTesting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)balloonViewLongTouched:(id)arg1 ;
-(void)balloonViewShowInlineReply:(id)arg1 ;
-(void)balloonViewTapped:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3 ;
-(void)balloonViewDoubleTapped:(id)arg1 ;
-(id)initWithChatItem:(id)arg1 title:(id)arg2 interfaceActions:(id)arg3 gradientReferenceView:(id)arg4 isGroupConversation:(BOOL)arg5 showActionMenu:(BOOL)arg6 pluginBalloonSnapshot:(id)arg7 delegate:(id)arg8 ;
-(void)balloonViewSelected:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3 ;
-(void)balloonViewTextViewDidChangeSelection:(id)arg1 selectedText:(id)arg2 textView:(id)arg3 ;
-(void)liveBalloonTouched:(id)arg1 ;
-(void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)balloonView:(id)arg1 userDidDragOutsideBalloonWithPoint:(CGPoint)arg2 ;
-(void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)balloonViewShouldCopyToPasteboard:(id)arg1 ;
-(void)setInterfaceActions:(NSArray *)arg1 ;
-(void)setLivePhotoBalloonView:(CKLivePhotoBalloonView *)arg1 ;
-(CKLivePhotoBalloonView *)livePhotoBalloonView;
-(void)setBalloonYOffsetFromTranscript:(double)arg1 ;
-(void)loadLivePhotoBalloonViewIfNeeded;
-(BOOL)_shouldShowVotingView;
-(NSArray *)interfaceActions;
-(double)replyButtonHeightFromBalloon;
-(void)updateReplyButtonSize:(CGRect)arg1 ;
-(double)balloonYOffsetFromTranscript;
-(BOOL)animationsDisabledForTesting;
-(void)updateReplyButtonColor;
-(void)setAnimationsDisabledForTesting:(BOOL)arg1 ;
-(void)setReplyButtonBorderLayer:(CAShapeLayer *)arg1 ;
-(void)setReplyButtonMaskLayer:(CAShapeLayer *)arg1 ;
-(void)setReplyButtonView:(UIView *)arg1 ;
-(void)setReplyButtonEffectView:(UIVisualEffectView *)arg1 ;
-(void)setTintViewMaskLayer:(CAShapeLayer *)arg1 ;
-(double)replyButtonVerticalOffset;
-(UIVisualEffectView *)replyButtonEffectView;
-(CAShapeLayer *)replyButtonBorderLayer;
-(CAShapeLayer *)replyButtonMaskLayer;
-(CAShapeLayer *)tintViewMaskLayer;
-(void)_stickerDetailViewControllerCloseButtonPressed:(id)arg1 ;
-(void)disableAnimationsForTesting;
-(UIView *)replyButtonView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CKActionSheetMenuView *)menuView;
-(void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2 ;
-(void)balloonViewSelected:(id)arg1 keyModifierFlags:(long long)arg2 selectedText:(id)arg3 ;
-(void)presentStickerDetailControllerWithStickers:(id)arg1 ;
-(UIView *)balloonView;
-(void)setMenuView:(CKActionSheetMenuView *)arg1 ;
-(void)setBalloonView:(UIView *)arg1 ;
-(void)viewDidLoad;
-(void)stickerDetailViewController:(id)arg1 deletedStickerWithTransferGUID:(id)arg2 ;
-(void)stickerDetailViewController:(id)arg1 selectedStickerPackWithAdamID:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setVotingViewController:(CKGroupAcknowledgmentVotingViewController *)arg1 ;
-(CKGroupAcknowledgmentVotingViewController *)votingViewController;
-(void)balloonEditMenuViewWasDismissed:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setupReplyButton;
-(void)dismissTapGestureRecognized:(id)arg1 ;
-(void)performInitialAnimations;
-(void)performClosingAnimationsAnimated:(BOOL)arg1 withSendAnimation:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

