/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>

@class SKUIGiftCharity, SKUIDonationConfiguration, NSOperationQueue, SKUIDonationViewController;

@interface SKUIDonationStepViewController : UIViewController {

	SKUIGiftCharity* _charity;
	SKUIDonationConfiguration* _configuration;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIGiftCharity * charity;                                        //@synthesize charity=_charity - In the implementation block
@property (nonatomic,readonly) SKUIDonationConfiguration * donationConfiguration;                //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                  //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) SKUIDonationViewController * donationViewController; 
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(id)initWithCharity:(id)arg1 configuration:(id)arg2 ;
-(SKUIDonationViewController *)donationViewController;
-(SKUIGiftCharity *)charity;
-(SKUIDonationConfiguration *)donationConfiguration;
@end

