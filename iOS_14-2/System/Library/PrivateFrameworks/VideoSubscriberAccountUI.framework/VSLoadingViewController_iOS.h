/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VSLoadingViewController.h>

@protocol VSLoadingViewControllerDelegate;
@class UIActivityIndicatorView, NSString;

@interface VSLoadingViewController_iOS : UIViewController <VSLoadingViewController> {

	BOOL _cancellationAllowed;
	id<VSLoadingViewControllerDelegate> _delegate;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;                         //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<VSLoadingViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;              //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<VSLoadingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VSLoadingViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)_cancelButtonPressed:(id)arg1 ;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(BOOL)isCancellationAllowed;
-(void)setCancellationAllowed:(BOOL)arg1 ;
@end

