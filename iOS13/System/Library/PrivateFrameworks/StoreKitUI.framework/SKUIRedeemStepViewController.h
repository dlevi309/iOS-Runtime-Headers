/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>

@protocol SKUIRedeemStepDelegate;
@class SKUIClientContext, NSOperationQueue, SKUIRedeemConfiguration;

@interface SKUIRedeemStepViewController : UIViewController {

	SKUIClientContext* _clientContext;
	NSOperationQueue* _operationQueue;
	SKUIRedeemConfiguration* _configuration;
	id<SKUIRedeemStepDelegate> _redeemStepDelegate;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                 //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SKUIRedeemConfiguration * configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                 //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPassbookLearnMore; 
@property (assign,nonatomic,__weak) id<SKUIRedeemStepDelegate> redeemStepDelegate;              //@synthesize redeemStepDelegate=_redeemStepDelegate - In the implementation block
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setConfiguration:(SKUIRedeemConfiguration *)arg1 ;
-(SKUIRedeemConfiguration *)configuration;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)setRedeemStepDelegate:(id<SKUIRedeemStepDelegate>)arg1 ;
-(BOOL)shouldShowPassbookLearnMore;
-(id<SKUIRedeemStepDelegate>)redeemStepDelegate;
@end

