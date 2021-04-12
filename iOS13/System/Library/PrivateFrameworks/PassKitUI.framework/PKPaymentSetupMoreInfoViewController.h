/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class PKPaymentPass, NSArray, PKPaymentSetupMoreInfoView, NSString;

@interface PKPaymentSetupMoreInfoViewController : UIViewController <UIScrollViewDelegate> {

	BOOL _isFinalViewController;
	PKPaymentPass* _pass;
	NSArray* _moreInfoItems;
	long long _context;
	/*^block*/id _dismissalHandler;
	PKPaymentSetupMoreInfoView* _moreInfoView;

}

@property (nonatomic,retain,readonly) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain,readonly) NSArray * moreInfoItems;                                //@synthesize moreInfoItems=_moreInfoItems - In the implementation block
@property (nonatomic,readonly) long long context;                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id dismissalHandler;                                               //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (nonatomic,retain,readonly) PKPaymentSetupMoreInfoView * moreInfoView;              //@synthesize moreInfoView=_moreInfoView - In the implementation block
@property (assign,nonatomic) BOOL isFinalViewController;                                      //@synthesize isFinalViewController=_isFinalViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)context;
-(id)_currentItem;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(unsigned long long)edgesForExtendedLayout;
-(void)_nextTapped:(id)arg1 ;
-(PKPaymentPass *)pass;
-(NSArray *)moreInfoItems;
-(id)_nextItems;
-(void)_configureNavigationItem;
-(void)_handlePush;
-(void)_handleDismissal;
-(id)initWithMoreInfoItems:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3 dismissalHandler:(/*^block*/id)arg4 ;
-(PKPaymentSetupMoreInfoView *)moreInfoView;
-(BOOL)isFinalViewController;
-(void)setIsFinalViewController:(BOOL)arg1 ;
@end

