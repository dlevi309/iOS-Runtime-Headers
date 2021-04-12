/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
*/

#import <UIKitCore/UIViewController.h>

@protocol NMBUIOnboardingDataSource, NMBUIWelcomeViewControllerDelegate;
@class UIViewController, UILabel, NMBUIImageView, NMBUIConfigurationButton, UIStackView;

@interface NMBUIWelcomeViewController : UIViewController {

	id<NMBUIOnboardingDataSource> _dataSource;
	id<NMBUIWelcomeViewControllerDelegate> _delegate;
	UIViewController* _presentingViewController;
	UILabel* _titleLabel;
	UILabel* _textLabel;
	NMBUIImageView* _iconImageView;
	NMBUIConfigurationButton* _confirmButton;
	NMBUIConfigurationButton* _cancelButton;
	UIStackView* _contentView;
	UIStackView* _buttonsContainerView;

}

@property (nonatomic,retain) id<NMBUIOnboardingDataSource> dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<NMBUIWelcomeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NMBUIWelcomeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<NMBUIWelcomeViewControllerDelegate>)arg1 ;
-(id<NMBUIOnboardingDataSource>)dataSource;
-(void)setDataSource:(id<NMBUIOnboardingDataSource>)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)_didPressButton:(id)arg1 ;
@end

