/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class CKComposeNavbarManagerContentView, UIView, CKComposeNavbarCanvasViewController, CKNavbarCanvasViewController, UIButton;

@interface CKComposeNavbarManager : NSObject {

	CKComposeNavbarManagerContentView* _contentView;
	UIView* _customStatusBackgroundView;
	CKComposeNavbarCanvasViewController* _defaultNavbarCanvasViewController;
	CKNavbarCanvasViewController* _avatarNavbarCanvasViewController;

}

@property (nonatomic,retain) CKComposeNavbarManagerContentView * contentView;                                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) CKComposeNavbarCanvasViewController * defaultNavbarCanvasViewController;              //@synthesize defaultNavbarCanvasViewController=_defaultNavbarCanvasViewController - In the implementation block
@property (nonatomic,retain) CKNavbarCanvasViewController * avatarNavbarCanvasViewController;                      //@synthesize avatarNavbarCanvasViewController=_avatarNavbarCanvasViewController - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton; 
@property (nonatomic,readonly) UIView * customStatusBackgroundView;                                                //@synthesize customStatusBackgroundView=_customStatusBackgroundView - In the implementation block
-(UIButton *)cancelButton;
-(id)init;
-(void)updateTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)setContentView:(CKComposeNavbarManagerContentView *)arg1 ;
-(void)_setupDefaultNavbarCanvasViewController;
-(CKComposeNavbarCanvasViewController *)defaultNavbarCanvasViewController;
-(UIView *)customStatusBackgroundView;
-(void)setDefaultNavbarCanvasViewController:(CKComposeNavbarCanvasViewController *)arg1 ;
-(void)setAvatarNavbarCanvasViewController:(CKNavbarCanvasViewController *)arg1 ;
-(CKNavbarCanvasViewController *)avatarNavbarCanvasViewController;
-(void)setCanvasViewControllerDelegate:(id)arg1 ;
-(void)_setupAvatarNavBarViewControllerWithConversation:(id)arg1 shouldShowBackButtonView:(BOOL)arg2 ;
-(void)commitTransitionAnimationWithConversation:(id)arg1 shouldShowBackButtonView:(BOOL)arg2 ;
-(CKComposeNavbarManagerContentView *)contentView;
-(void)dealloc;
@end

