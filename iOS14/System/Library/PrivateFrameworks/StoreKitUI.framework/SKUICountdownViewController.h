/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class SKUIResourceLoader, SKUICountdownComponent, SKUIClientContext, NSString;

@interface SKUICountdownViewController : UIViewController <SKUIArtworkRequestDelegate> {

	SKUIResourceLoader* _artworkLoader;
	SKUICountdownComponent* _countdownComponent;
	SKUIClientContext* _clientContext;

}

@property (nonatomic,readonly) SKUIResourceLoader * artworkLoader;                       //@synthesize artworkLoader=_artworkLoader - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUICountdownComponent * countdownComponent;              //@synthesize countdownComponent=_countdownComponent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(SKUIResourceLoader *)artworkLoader;
-(id)initWithCountdownComponent:(id)arg1 artworkLoader:(id)arg2 ;
-(SKUICountdownComponent *)countdownComponent;
@end

