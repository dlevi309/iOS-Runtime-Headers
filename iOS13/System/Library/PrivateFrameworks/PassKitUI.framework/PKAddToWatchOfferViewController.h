/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<PKAddToWatchOfferViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAddToWatchOfferViewControllerDelegate>)arg1 ;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(unsigned long long)edgesForExtendedLayout;
-(void)showSpinner:(BOOL)arg1 ;
-(PKPaymentPass *)pass;
-(void)_configureNavigationItem;
-(id)initWithPass:(id)arg1 context:(long long)arg2 delegate:(id)arg3 ;
-(void)_clearInteractionDisabledView;
-(void)_addLater;
-(void)_addToWatch;
-(void)_setIdleTimerDisabled:(BOOL)arg1 ;
-(PKAddToWatchOfferView *)offerView;
@end

