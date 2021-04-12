/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/SUPaymentSetupViewControllerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSString, UIViewController;

@interface SUCardEnrollmentUpsellOperation : ISOperation <SUPaymentSetupViewControllerDelegate> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _referrerIdentifier;
	long long _paymentSetupFeatureState;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	UIViewController* _viewController;

}

@property (assign,nonatomic) long long paymentSetupFeatureState;                      //@synthesize paymentSetupFeatureState=_paymentSetupFeatureState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                       //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) BOOL didSucceed; 
@property (nonatomic,copy) NSString * referrerIdentifier;                             //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
-(void)run;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(BOOL)didSucceed;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSString *)referrerIdentifier;
-(void)paymentSetupViewControllerDidDismiss;
-(long long)paymentSetupFeatureState;
-(id)_paymentSetupFeature;
-(void)setPaymentSetupFeatureState:(long long)arg1 ;
@end

