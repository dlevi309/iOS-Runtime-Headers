/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/SKUIProductPageChildViewController.h>

@protocol SKUIProductPageChildViewControllerDelegate;
@class SKUIClientContext, SKUIColorScheme, SKUIProductPageHeaderViewController, SKUIProductPagePlaceholderScrollView, UIActivityIndicatorView, NSString, UIScrollView;

@interface SKUIProductPagePlaceholderViewController : UIViewController <UIScrollViewDelegate, SKUIProductPageChildViewController> {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	SKUIProductPageHeaderViewController* _headerViewController;
	SKUIProductPagePlaceholderScrollView* _scrollView;
	id<SKUIProductPageChildViewControllerDelegate> _delegate;
	long long _style;
	UIActivityIndicatorView* _indicator;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                                               //@synthesize colorScheme=_colorScheme - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController;                  //@synthesize headerViewController=_headerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUIProductPageChildViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithStyle:(long long)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIScrollView *)scrollView;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(void)_addHeaderView;
@end

