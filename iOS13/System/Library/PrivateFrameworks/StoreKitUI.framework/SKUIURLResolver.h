/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUIPassbookLoaderDelegate.h>

@protocol SKUIURLResolverDelegate, UINavigationControllerDelegate;
@class SKUIClientContext, NSOperationQueue, SKUIPassbookLoader, NSString;

@interface SKUIURLResolver : NSObject <SKUIPassbookLoaderDelegate> {

	SKUIClientContext* _clientContext;
	id<SKUIURLResolverDelegate> _delegate;
	id<UINavigationControllerDelegate> _navigationControllerDelegate;
	NSOperationQueue* _operationQueue;
	SKUIPassbookLoader* _passbookLoader;

}

@property (assign,nonatomic,__weak) id<SKUIURLResolverDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UINavigationControllerDelegate> navigationControllerDelegate;              //@synthesize navigationControllerDelegate=_navigationControllerDelegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                                   //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tabIdentifierForURL:(id)arg1 ;
-(void)dealloc;
-(id<SKUIURLResolverDelegate>)delegate;
-(void)setDelegate:(id<SKUIURLResolverDelegate>)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)_presentViewController:(id)arg1 ;
-(id<UINavigationControllerDelegate>)navigationControllerDelegate;
-(void)_sendDidFinishWithResult:(BOOL)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)_showBagURLWithURL:(id)arg1 ;
-(void)_showAccountViewControllerWithURL:(id)arg1 ;
-(void)_addPassbookPassWithURL:(id)arg1 ;
-(void)_showDonationViewControllerWithURL:(id)arg1 ;
-(void)_showGiftViewControllerWithURL:(id)arg1 ;
-(void)_handleSafariScriptDataUpdate:(id)arg1 ;
-(void)_performLookupWithURL:(id)arg1 ;
-(void)_showRedeemViewControllerWithURL:(id)arg1 ;
-(void)_showSearchWithURL:(id)arg1 ;
-(void)_selectTabWithIdentifier:(id)arg1 ;
-(void)_resolveURLRequest:(id)arg1 withOriginURL:(id)arg2 ;
-(void)_showPlaceholderViewController;
-(void)_showViewControllerWithResponse:(id)arg1 fromOperation:(id)arg2 ;
-(id)_newHTMLViewControllerWithSection:(id)arg1 ;
-(id)presentationViewControllerForPassbookLoader:(id)arg1 ;
-(void)passbookLoaderDidFinish:(id)arg1 ;
-(void)resolveURL:(id)arg1 ;
-(void)setNavigationControllerDelegate:(id<UINavigationControllerDelegate>)arg1 ;
@end

