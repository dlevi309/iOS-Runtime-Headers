/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

