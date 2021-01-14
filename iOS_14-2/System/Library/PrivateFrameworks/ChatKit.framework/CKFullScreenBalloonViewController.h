/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKMessageAcknowledgmentPickerBarDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CKAdaptivePresentedControllerProtocol.h>

@protocol CKFullScreenBalloonViewControllerDelegate;
@class CKMessagePartChatItem, UIGestureRecognizer, CKMessageAcknowledgmentPickerBarViewController, UIButton, UIView, NSString;

@interface CKFullScreenBalloonViewController : UIViewController <CKMessageAcknowledgmentPickerBarDelegate, UIGestureRecognizerDelegate, CKAdaptivePresentedControllerProtocol> {

	BOOL _wantsWindowedPresentation;
	BOOL _preserveModalPresentationStyle;
	BOOL _isGroupConversation;
	BOOL _showActionMenu;
	CKMessagePartChatItem* _chatItem;
	UIGestureRecognizer* _tapRecognizer;
	id<CKFullScreenBalloonViewControllerDelegate> _delegate;
	CKMessageAcknowledgmentPickerBarViewController* _pickerBar;
	UIButton* _replyButton;
	UIView* _tintView;
	CGRect _gradientFrame;

}

@property (nonatomic,retain) UIGestureRecognizer * tapRecognizer;                                          //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,__weak,readonly) id<CKFullScreenBalloonViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CKMessageAcknowledgmentPickerBarViewController * pickerBar;                 //@synthesize pickerBar=_pickerBar - In the implementation block
@property (nonatomic,retain) UIButton * replyButton;                                                       //@synthesize replyButton=_replyButton - In the implementation block
@property (nonatomic,readonly) UIView * tintView;                                                          //@synthesize tintView=_tintView - In the implementation block
@property (nonatomic,readonly) CGRect gradientFrame;                                                       //@synthesize gradientFrame=_gradientFrame - In the implementation block
@property (nonatomic,readonly) BOOL isGroupConversation;                                                   //@synthesize isGroupConversation=_isGroupConversation - In the implementation block
@property (nonatomic,readonly) BOOL showActionMenu;                                                        //@synthesize showActionMenu=_showActionMenu - In the implementation block
@property (nonatomic,readonly) UIView * balloonWrapperView; 
@property (nonatomic,readonly) CKMessagePartChatItem * chatItem;                                           //@synthesize chatItem=_chatItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL wantsWindowedPresentation;                                               //@synthesize wantsWindowedPresentation=_wantsWindowedPresentation - In the implementation block
@property (assign,nonatomic) BOOL preserveModalPresentationStyle;                                          //@synthesize preserveModalPresentationStyle=_preserveModalPresentationStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldHidePresentingWindow; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIView *)tintView;
-(CKMessagePartChatItem *)chatItem;
-(id<CKFullScreenBalloonViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CKMessageAcknowledgmentPickerBarViewController *)pickerBar;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2 ;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(BOOL)isGroupConversation;
-(void)messageAcknowledgmentPickerViewController:(id)arg1 didPickAcknowledgment:(long long)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)wantsWindowedPresentation;
-(void)setWantsWindowedPresentation:(BOOL)arg1 ;
-(BOOL)preserveModalPresentationStyle;
-(void)setPreserveModalPresentationStyle:(BOOL)arg1 ;
-(BOOL)constrainToPresentingVCBounds;
-(BOOL)forceWindowedPresentation;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIGestureRecognizer *)tapRecognizer;
-(CGRect)gradientFrame;
-(UIButton *)replyButton;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)removeTapRecogonizer;
-(void)setupReplyButton;
-(void)dismissTapGestureRecognized:(id)arg1 ;
-(void)addTapRecognizerWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)performInitialAnimations;
-(void)setReplyButton:(UIButton *)arg1 ;
-(void)performCancelAnimationWithCompletion:(/*^block*/id)arg1 ;
-(void)performClosingAnimationsAnimated:(BOOL)arg1 withSendAnimation:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_performClosingAnimationsAnimated:(BOOL)arg1 withSendAnimation:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)dismissImmediatelyWithNoAnimations;
-(id)initWithChatItem:(id)arg1 gradientReferenceView:(id)arg2 isGroupConversation:(BOOL)arg3 showActionMenu:(BOOL)arg4 delegate:(id)arg5 ;
-(void)replyButtonPressed:(id)arg1 ;
-(void)performSendAndCloseAnimationWithCompletion:(/*^block*/id)arg1 ;
-(UIView *)balloonWrapperView;
-(BOOL)showActionMenu;
-(void)dealloc;
-(void)setTapRecognizer:(UIGestureRecognizer *)arg1 ;
@end

