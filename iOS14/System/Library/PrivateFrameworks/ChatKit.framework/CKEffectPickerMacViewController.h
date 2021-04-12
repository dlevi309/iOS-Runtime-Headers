/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKEffectPreviewCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/CKEffectSelectionViewControllerDelegate.h>
#import <libobjc.A.dylib/CKEffectPickerViewControllerProtocol.h>

@protocol CKEffectPickerViewControllerDelegate;
@class CKBalloonView, CKEffectPreviewCollectionViewController, CKEffectSelectionViewController, CKChatControllerDummyAnimator, UIView, UILabel, UIVisualEffectView, UIVibrancyEffect, UIButton, CKComposition, NSLayoutConstraint, CKFullScreenEffectManager;

@interface CKEffectPickerMacViewController : UIViewController <CKEffectPreviewCollectionViewControllerDelegate, CKEffectSelectionViewControllerDelegate, CKEffectPickerViewControllerProtocol> {

	char _color;
	BOOL _isFirstLayout;
	BOOL _showingInStandAloneWindow;
	id<CKEffectPickerViewControllerDelegate> _delegate;
	CKBalloonView* _balloonView;
	CKEffectPreviewCollectionViewController* _effectCollectionViewController;
	CKEffectSelectionViewController* _selectionViewController;
	CKChatControllerDummyAnimator* _dummyAnimator;
	UIView* _balloonContainer;
	UILabel* _titleLabel;
	UIVisualEffectView* _titleContainerView;
	UIVibrancyEffect* _titleVibrancyEffect;
	UIButton* _sendButton;
	UIButton* _closeButton;
	CKComposition* _composition;
	NSLayoutConstraint* _heightConstraint;
	CKFullScreenEffectManager* _fsem;
	UIView* _contentView;
	CGPoint _balloonViewOrigin;

}

@property (nonatomic,retain) CKEffectPreviewCollectionViewController * effectCollectionViewController;              //@synthesize effectCollectionViewController=_effectCollectionViewController - In the implementation block
@property (nonatomic,retain) CKEffectSelectionViewController * selectionViewController;                             //@synthesize selectionViewController=_selectionViewController - In the implementation block
@property (nonatomic,retain) CKChatControllerDummyAnimator * dummyAnimator;                                         //@synthesize dummyAnimator=_dummyAnimator - In the implementation block
@property (nonatomic,retain) UIView * balloonContainer;                                                             //@synthesize balloonContainer=_balloonContainer - In the implementation block
@property (nonatomic,retain) CKBalloonView * balloonView;                                                           //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * titleContainerView;                                               //@synthesize titleContainerView=_titleContainerView - In the implementation block
@property (nonatomic,retain) UIVibrancyEffect * titleVibrancyEffect;                                                //@synthesize titleVibrancyEffect=_titleVibrancyEffect - In the implementation block
@property (nonatomic,retain) UIButton * sendButton;                                                                 //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                                //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) CKComposition * composition;                                                           //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic) CGPoint balloonViewOrigin;                                                             //@synthesize balloonViewOrigin=_balloonViewOrigin - In the implementation block
@property (assign,nonatomic) char color;                                                                            //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                                                 //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (assign,nonatomic) BOOL isFirstLayout;                                                                    //@synthesize isFirstLayout=_isFirstLayout - In the implementation block
@property (nonatomic,retain) CKFullScreenEffectManager * fsem;                                                      //@synthesize fsem=_fsem - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                  //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL showingInStandAloneWindow;                                                        //@synthesize showingInStandAloneWindow=_showingInStandAloneWindow - In the implementation block
@property (assign,nonatomic) id<CKEffectPickerViewControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(CKFullScreenEffectManager *)fsem;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)keyCommands;
-(BOOL)isFirstLayout;
-(CKChatControllerDummyAnimator *)dummyAnimator;
-(void)setFsem:(CKFullScreenEffectManager *)arg1 ;
-(void)handleTouchUp:(CGPoint)arg1 ;
-(void)setDummyAnimator:(CKChatControllerDummyAnimator *)arg1 ;
-(void)setIsFirstLayout:(BOOL)arg1 ;
-(id<CKEffectPickerViewControllerDelegate>)delegate;
-(UIView *)balloonContainer;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)setSelectionViewController:(CKEffectSelectionViewController *)arg1 ;
-(void)setEffectCollectionViewController:(CKEffectPreviewCollectionViewController *)arg1 ;
-(void)setTitleVibrancyEffect:(UIVibrancyEffect *)arg1 ;
-(void)setTitleContainerView:(UIVisualEffectView *)arg1 ;
-(CKEffectSelectionViewController *)selectionViewController;
-(void)closeButtonPressed:(id)arg1 ;
-(UIVisualEffectView *)titleContainerView;
-(void)setBalloonContainer:(UIView *)arg1 ;
-(BOOL)effectShouldDisplayOverBalloon:(id)arg1 ;
-(CKEffectPreviewCollectionViewController *)effectCollectionViewController;
-(UIVibrancyEffect *)titleVibrancyEffect;
-(void)startAnimationPreviewForIdentifier:(id)arg1 ;
-(void)updateHintTransition:(double)arg1 ;
-(id)_defaultSendAnimationContextForAnimationPreview;
-(void)effectCollectionViewController:(id)arg1 willDisplayEffect:(id)arg2 ;
-(void)effectSelectionViewController:(id)arg1 didSelectEffectWithIdentifier:(id)arg2 ;
-(void)handleTouchMoved:(CGPoint)arg1 ;
-(CGPoint)balloonViewOrigin;
-(void)setBalloonViewOrigin:(CGPoint)arg1 ;
-(char)color;
-(BOOL)showingInStandAloneWindow;
-(CKComposition *)composition;
-(void)updateColor:(char)arg1 ;
-(void)setCloseButtonYPosition:(double)arg1 ;
-(void)presentPicker;
-(id)initWithComposition:(id)arg1 balloonViewOrigin:(CGPoint)arg2 color:(char)arg3 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<CKEffectPickerViewControllerDelegate>)arg1 ;
-(CKBalloonView *)balloonView;
-(void)setColor:(char)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setBalloonView:(CKBalloonView *)arg1 ;
-(void)viewDidLoad;
-(UIButton *)sendButton;
-(void)setContentView:(UIView *)arg1 ;
-(void)setShowingInStandAloneWindow:(BOOL)arg1 ;
-(UIView *)contentView;
-(void)setSendButton:(UIButton *)arg1 ;
-(void)touchUpInsideSendButton:(id)arg1 ;
-(UIButton *)closeButton;
-(void)viewDidLayoutSubviews;
-(void)setComposition:(CKComposition *)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)keyCommandReturn:(id)arg1 ;
@end

