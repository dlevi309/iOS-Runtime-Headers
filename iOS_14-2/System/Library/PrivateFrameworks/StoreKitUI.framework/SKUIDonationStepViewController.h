/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(SKUIGiftCharity *)charity;
-(id)initWithCharity:(id)arg1 configuration:(id)arg2 ;
-(SKUIDonationViewController *)donationViewController;
-(SKUIDonationConfiguration *)donationConfiguration;
@end

