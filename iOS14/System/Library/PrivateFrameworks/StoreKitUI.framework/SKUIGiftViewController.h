/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UINavigationController.h>

@protocol SKUIGiftViewControllerDelegate;
@class SKUIClientContext, SKUIGift, SKUIGiftConfiguration, NSOperationQueue, UIViewController, SKUIGiftComposeViewController;

@interface SKUIGiftViewController : UINavigationController {

	SKUIClientContext* _clientContext;
	SKUIGift* _gift;
	id<SKUIGiftViewControllerDelegate> _giftDelegate;
	SKUIGiftConfiguration* _giftConfiguration;
	NSOperationQueue* _operationQueue;
	long long _initialBarStyle;
	UIViewController* _placeholderViewController;
	SKUIGiftComposeViewController* _rootViewController;

}

@property (nonatomic,copy,readonly) SKUIGift * gift;                                              //@synthesize gift=_gift - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                   //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIGiftViewControllerDelegate> giftDelegate;              //@synthesize giftDelegate=_giftDelegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                   //@synthesize operationQueue=_operationQueue - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(SKUIGift *)gift;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_cancelButtonAction:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id)_localizedString:(id)arg1 ;
-(void)_loadGiftConfiguration;
-(void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_finishGiftingWithResult:(BOOL)arg1 ;
-(void)_configurationDidLoadWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_clientContextDidLoadWithContext:(id)arg1 error:(id)arg2 ;
-(id)initWithGift:(id)arg1 ;
-(id<SKUIGiftViewControllerDelegate>)giftDelegate;
-(void)setGiftDelegate:(id<SKUIGiftViewControllerDelegate>)arg1 ;
@end

