/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CKNavigationBarCanvasViewDelegate.h>

@protocol CKNavbarCanvasViewControllerDelegate;
@class UIButton, UILabel, CKNavigationBarCanvasView, NSString;

@interface CKComposeNavbarCanvasViewController : UIViewController <CKNavigationBarCanvasViewDelegate> {

	id<CKNavbarCanvasViewControllerDelegate> _delegate;
	UIButton* _cancelButton;
	UILabel* _titleLabel;
	CKNavigationBarCanvasView* _canvasView;

}

@property (nonatomic,retain) UIButton * cancelButton;                                               //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) CKNavigationBarCanvasView * canvasView;                                //@synthesize canvasView=_canvasView - In the implementation block
@property (assign,nonatomic,__weak) id<CKNavbarCanvasViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(UIButton *)cancelButton;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCancelButton:(UIButton *)arg1 ;
-(id<CKNavbarCanvasViewControllerDelegate>)delegate;
-(void)updateTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<CKNavbarCanvasViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(BOOL)_shouldUseRTL;
-(void)_setupDefaultCanvasView;
-(CKNavigationBarCanvasView *)canvasView;
-(id)_windowTraitCollection;
-(double)_preferredHeightForTraitCollection:(id)arg1 ;
-(void)_initializeForTraitCollection:(id)arg1 ;
-(BOOL)shouldShowAvatarView;
-(NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForView:(id)arg1 ;
-(void)setCanvasView:(CKNavigationBarCanvasView *)arg1 ;
-(void)loadView;
@end

