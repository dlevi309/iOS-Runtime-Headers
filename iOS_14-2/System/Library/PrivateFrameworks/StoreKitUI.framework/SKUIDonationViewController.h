/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)initWithURL:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_configurationDidLoadWithResult:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithCharityIdentifier:(id)arg1 ;
-(id)_initSKUIDonationViewController;
-(void)_loadDonationConfiguration;
-(NSString *)charityIdentifier;
@end

