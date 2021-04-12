/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>

@class UIVisualEffectView, UILabel, UIButton;

@interface PXConfidentialityWarningViewController : UIViewController {

	/*^block*/id _cancellationHandler;
	UIVisualEffectView* _effectView;
	UILabel* _messageLabel;
	UIButton* _confirmButton;
	UIButton* _cancelButton;

}

@property (nonatomic,readonly) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                       //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) UIButton * confirmButton;                     //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,copy) id cancellationHandler;                           //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
-(UIButton *)cancelButton;
-(void)viewWillLayoutSubviews;
-(UIVisualEffectView *)effectView;
-(void)_handleButton:(id)arg1 ;
-(UIButton *)confirmButton;
-(UILabel *)messageLabel;
-(void)setCancellationHandler:(id)arg1 ;
-(void)viewDidLoad;
-(void)presentAsOverlayInWindowScene:(id)arg1 ;
-(id)cancellationHandler;
@end

