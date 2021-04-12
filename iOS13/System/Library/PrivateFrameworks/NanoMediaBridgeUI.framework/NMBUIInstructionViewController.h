/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
*/

#import <UIKitCore/UIViewController.h>

@protocol NMBUIOnboardingDataSource;
@class UIImageView, UILabel, NMBUIConfigurationButton;

@interface NMBUIInstructionViewController : UIViewController {

	id<NMBUIOnboardingDataSource> _dataSource;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	NMBUIConfigurationButton* _confirmButton;

}
-(id)initWithDataSource:(id)arg1 ;
-(void)viewDidLoad;
-(void)_dismiss;
@end

