/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUIProductPageChildViewController.h>

@protocol SKUINetworkErrorDelegate;
@class SKUIClientContext, NSError, NSString, UIScrollView, SKUIProductPageHeaderViewController;

@interface SKUINetworkErrorViewController : UIViewController <SKUIProductPageChildViewController> {

	SKUIClientContext* _clientContext;
	id<SKUINetworkErrorDelegate> _delegate;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                       //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController; 
+(BOOL)canDisplayError:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSError *)error;
-(id)initWithError:(id)arg1 ;
-(void)loadView;
-(UIScrollView *)scrollView;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)_networkTypeChanged:(id)arg1 ;
@end

