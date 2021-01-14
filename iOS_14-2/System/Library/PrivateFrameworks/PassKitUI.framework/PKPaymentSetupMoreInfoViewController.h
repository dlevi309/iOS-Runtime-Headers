/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKExplanationViewController.h>

@protocol PKPaymentWebServiceTargetDeviceProtocol;
@class PKSecureElementPass, NSArray;

@interface PKPaymentSetupMoreInfoViewController : PKExplanationViewController {

	BOOL _isFinalViewController;
	PKSecureElementPass* _pass;
	NSArray* _moreInfoItems;
	id<PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
	/*^block*/id _dismissalHandler;

}

@property (nonatomic,retain,readonly) PKSecureElementPass * pass;                                     //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain,readonly) NSArray * moreInfoItems;                                        //@synthesize moreInfoItems=_moreInfoItems - In the implementation block
@property (nonatomic,readonly) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;              //@synthesize targetDevice=_targetDevice - In the implementation block
@property (nonatomic,copy) id dismissalHandler;                                                       //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (assign,nonatomic) BOOL isFinalViewController;                                              //@synthesize isFinalViewController=_isFinalViewController - In the implementation block
-(void)_next;
-(id<PKPaymentWebServiceTargetDeviceProtocol>)targetDevice;
-(unsigned long long)edgesForExtendedLayout;
-(id)_currentItem;
-(PKSecureElementPass *)pass;
-(id)_nextItems;
-(void)_handlePush;
-(void)_handleDismissal;
-(id)initWithMoreInfoItems:(id)arg1 paymentPass:(id)arg2 targetDevice:(id)arg3 context:(long long)arg4 dismissalHandler:(/*^block*/id)arg5 ;
-(void)_alternateActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_linkTapped;
-(BOOL)isFinalViewController;
-(void)setIsFinalViewController:(BOOL)arg1 ;
-(CGSize)_snapshotSize;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)explanationViewDidSelectBodyButton:(id)arg1 ;
-(id)dismissalHandler;
-(NSArray *)moreInfoItems;
-(void)setDismissalHandler:(id)arg1 ;
@end

