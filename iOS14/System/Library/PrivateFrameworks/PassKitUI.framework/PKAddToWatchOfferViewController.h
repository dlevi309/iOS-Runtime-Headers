/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>

@protocol PKAddToWatchOfferViewControllerDelegate;
@class UIView, PKPaymentPass, PKAddToWatchOfferView;

@interface PKAddToWatchOfferViewController : UIViewController {

	UIView* _interactionDisabledView;
	id<PKAddToWatchOfferViewControllerDelegate> _delegate;
	PKPaymentPass* _pass;
	long long _context;
	PKAddToWatchOfferView* _offerView;

}

@property (assign,nonatomic,__weak) id<PKAddToWatchOfferViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) PKPaymentPass * pass;                                            //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) long long context;                                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) PKAddToWatchOfferView * offerView;                                      //@synthesize offerView=_offerView - In the implementation block
-(void)viewWillLayoutSubviews;
-(id<PKAddToWatchOfferViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithPass:(id)arg1 context:(long long)arg2 delegate:(id)arg3 ;
-(long long)context;
-(void)setDelegate:(id<PKAddToWatchOfferViewControllerDelegate>)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(void)showSpinner:(BOOL)arg1 ;
-(PKPaymentPass *)pass;
-(void)loadView;
-(void)_configureNavigationItem;
-(void)_clearInteractionDisabledView;
-(void)_addLater;
-(void)_addToWatch;
-(void)_setIdleTimerDisabled:(BOOL)arg1 ;
-(PKAddToWatchOfferView *)offerView;
-(void)dealloc;
-(void)setContext:(long long)arg1 ;
@end

