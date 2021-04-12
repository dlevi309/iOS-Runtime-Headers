/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>

@protocol PKLoadingViewControllerDelegate;
@class UIActivityIndicatorView, UILabel;

@interface PKLoadingViewController : UIViewController {

	id<PKLoadingViewControllerDelegate> _delegate;
	UIActivityIndicatorView* _spinner;
	UILabel* _loadingLabel;

}
-(id)initWithDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)_cancelButtonTapped:(id)arg1 ;
@end

