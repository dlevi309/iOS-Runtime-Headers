/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <UIKitCore/UIViewController.h>

@protocol IAMViewControllerMetricsDelegate;
@class UIButton, IAMWebView;

@interface IAMModalWebMessageViewController : UIViewController {

	BOOL _shouldDisplayCloseButton;
	id<IAMViewControllerMetricsDelegate> _metricsDelegate;
	UIButton* _closeButton;
	IAMWebView* _webView;

}

@property (nonatomic,retain) UIButton * closeButton;                                                   //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) IAMWebView * webView;                                                     //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) id<IAMViewControllerMetricsDelegate> metricsDelegate;              //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayCloseButton;                                            //@synthesize shouldDisplayCloseButton=_shouldDisplayCloseButton - In the implementation block
-(IAMWebView *)webView;
-(void)viewDidLoad;
-(void)setWebView:(IAMWebView *)arg1 ;
-(id)initWithWebView:(id)arg1 ;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)setMetricsDelegate:(id<IAMViewControllerMetricsDelegate>)arg1 ;
-(id<IAMViewControllerMetricsDelegate>)metricsDelegate;
-(void)setShouldDisplayCloseButton:(BOOL)arg1 ;
-(void)_handleCloseButtonTap:(id)arg1 ;
-(BOOL)shouldDisplayCloseButton;
@end

