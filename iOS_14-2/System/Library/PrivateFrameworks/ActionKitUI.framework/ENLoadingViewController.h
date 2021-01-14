/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIActivityIndicatorView *)activityIndicator;
-(id<ENLoadingViewControllerDelegate>)delegate;
-(void)cancel:(id)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setDelegate:(id<ENLoadingViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

