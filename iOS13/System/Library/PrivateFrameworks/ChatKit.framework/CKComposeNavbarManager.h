/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class CKComposeNavbarManagerContentView, CKComposeNavbarCanvasViewController, CKNavbarCanvasViewController, UIView, UIButton;

@interface CKComposeNavbarManager : NSObject {

	CKComposeNavbarManagerContentView* _contentView;
	CKComposeNavbarCanvasViewController* _defaultNavbarCanvasViewController;
	CKNavbarCanvasViewController* _avatarNavbarCanvasViewController;
	UIView* _customStatusBackgroundView;

}

@property (nonatomic,retain) CKComposeNavbarManagerContentView * contentView;                                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) CKComposeNavbarCanvasViewController * defaultNavbarCanvasViewController;              //@synthesize defaultNavbarCanvasViewController=_defaultNavbarCanvasViewController - In the implementation block
@property (nonatomic,retain) CKNavbarCanvasViewController * avatarNavbarCanvasViewController;                      //@synthesize avatarNavbarCanvasViewController=_avatarNavbarCanvasViewController - In the implementation block
@property (nonatomic,retain) UIView * customStatusBackgroundView;                                                  //@synthesize customStatusBackgroundView=_customStatusBackgroundView - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton; 
-(id)init;
-(void)dealloc;
-(CKComposeNavbarManagerContentView *)contentView;
-(void)setContentView:(CKComposeNavbarManagerContentView *)arg1 ;
-(UIButton *)cancelButton;
-(void)updateTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setupDefaultNavbarCanvasViewController;
-(CKComposeNavbarCanvasViewController *)defaultNavbarCanvasViewController;
-(UIView *)customStatusBackgroundView;
-(void)setDefaultNavbarCanvasViewController:(CKComposeNavbarCanvasViewController *)arg1 ;
-(void)setAvatarNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 ;
-(void)_setupAvatarNavBarViewControllerWithConversation:(id)arg1 shouldShowBackButtonView:(BOOL)arg2 ;
-(CKNavbarCanvasViewController *)avatarNavbarCanvasViewController;
-(void)setCustomStatusBackgroundView:(UIView *)arg1 ;
-(void)setCanvasViewControllerDelegate:(id)arg1 ;
-(void)commitTransitionAnimationWithConversation:(id)arg1 shouldShowBackButtonView:(BOOL)arg2 ;
@end

