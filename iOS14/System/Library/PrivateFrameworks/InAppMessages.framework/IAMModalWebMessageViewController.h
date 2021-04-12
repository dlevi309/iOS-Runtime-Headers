/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<IAMViewControllerMetricsDelegate>)metricsDelegate;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)_handleCloseButtonTap:(id)arg1 ;
-(BOOL)shouldDisplayCloseButton;
-(id)initWithWebView:(id)arg1 ;
-(void)viewDidLoad;
-(void)setShouldDisplayCloseButton:(BOOL)arg1 ;
-(UIButton *)closeButton;
-(void)setWebView:(IAMWebView *)arg1 ;
-(void)setMetricsDelegate:(id<IAMViewControllerMetricsDelegate>)arg1 ;
@end

