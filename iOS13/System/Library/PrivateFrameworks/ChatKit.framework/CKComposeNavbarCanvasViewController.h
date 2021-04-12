/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<CKNavbarCanvasViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CKNavbarCanvasViewControllerDelegate>)arg1 ;
-(void)loadView;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCanvasView:(CKNavigationBarCanvasView *)arg1 ;
-(CKNavigationBarCanvasView *)canvasView;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)updateTitle:(id)arg1 animated:(BOOL)arg2 ;
-(id)_windowTraitCollection;
-(double)_preferredHeightForTraitCollection:(id)arg1 ;
-(void)_initializeForTraitCollection:(id)arg1 ;
-(NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForView:(id)arg1 ;
-(void)_setupDefaultCanvasView;
-(BOOL)_shouldUseRTL;
@end

