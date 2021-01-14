/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUIProductPageChildViewController.h>

@protocol SKUINetworkErrorDelegate;
@class SKUIClientContext, NSError, UIScrollView, SKUIProductPageHeaderViewController, NSString;

@interface SKUINetworkErrorViewController : UIViewController <SKUIProductPageChildViewController> {

	SKUIClientContext* _clientContext;
	id<SKUINetworkErrorDelegate> _delegate;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                       //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canDisplayError:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(NSError *)error;
-(void)setDelegate:(id)arg1 ;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
-(void)loadView;
-(UIScrollView *)scrollView;
-(void)dealloc;
-(void)_networkTypeChanged:(id)arg1 ;
@end

