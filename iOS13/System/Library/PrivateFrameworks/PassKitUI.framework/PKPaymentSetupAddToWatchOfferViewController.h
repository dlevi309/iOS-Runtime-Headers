/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKAddToWatchOfferViewController.h>
#import <libobjc.A.dylib/PKAddToWatchOfferViewControllerDelegate.h>

@class UIView, NSString;

@interface PKPaymentSetupAddToWatchOfferViewController : PKAddToWatchOfferViewController <PKAddToWatchOfferViewControllerDelegate> {

	UIView* _interactionDisabledView;
	/*^block*/id _dismissalHandler;

}

@property (nonatomic,copy) id dismissalHandler;                     //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)shouldShowAddToWatchOfferForPass:(id)arg1 inContext:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 context:(long long)arg2 dismissalHandler:(/*^block*/id)arg3 ;
-(void)_handleDismissal:(BOOL)arg1 ;
-(void)_handleBridgeProvisioningError:(id)arg1 ;
-(void)addToWatchOfferViewControllerDidRequestToAddToWatch:(id)arg1 ;
-(void)addToWatchOfferViewControllerDidNotRequestToAddToWatch:(id)arg1 ;
@end

