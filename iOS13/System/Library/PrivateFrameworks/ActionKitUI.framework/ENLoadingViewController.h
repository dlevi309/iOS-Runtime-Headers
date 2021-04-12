/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIViewController.h>

@protocol ENLoadingViewControllerDelegate;
@class UIActivityIndicatorView;

@interface ENLoadingViewController : UIViewController {

	id<ENLoadingViewControllerDelegate> _delegate;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                      //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<ENLoadingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ENLoadingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<ENLoadingViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)cancel:(id)arg1 ;
@end

