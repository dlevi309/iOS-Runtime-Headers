/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(SKUIRedeemConfiguration *)configuration;
-(void)setConfiguration:(SKUIRedeemConfiguration *)arg1 ;
-(void)setRedeemStepDelegate:(id<SKUIRedeemStepDelegate>)arg1 ;
-(BOOL)shouldShowPassbookLearnMore;
-(id<SKUIRedeemStepDelegate>)redeemStepDelegate;
@end

