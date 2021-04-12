/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UINavigationController.h>

@class NSString, SKUIClientContext, SKUIDonationConfiguration, NSOperationQueue, UIViewController;

@interface SKUIDonationViewController : UINavigationController {

	NSString* _charityID;
	SKUIClientContext* _clientContext;
	SKUIDonationConfiguration* _donationConfiguration;
	NSOperationQueue* _operationQueue;
	UIViewController* _placeholderViewController;

}

@property (nonatomic,readonly) NSString * charityIdentifier;                 //@synthesize charityID=_charityID - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_configurationDidLoadWithResult:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithCharityIdentifier:(id)arg1 ;
-(id)_initSKUIDonationViewController;
-(void)_loadDonationConfiguration;
-(NSString *)charityIdentifier;
@end

