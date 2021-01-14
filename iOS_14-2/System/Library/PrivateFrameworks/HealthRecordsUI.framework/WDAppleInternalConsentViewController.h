/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKTitledBuddyViewController.h>

@class UIBarButtonItem, UIViewController;

@interface WDAppleInternalConsentViewController : HKTitledBuddyViewController {

	UIBarButtonItem* _navigationCancelButton;
	UIViewController* _actionViewController;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) UIViewController * actionViewController;              //@synthesize actionViewController=_actionViewController - In the implementation block
@property (nonatomic,copy) id completionBlock;                                     //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(id)bodyString;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)acceptButtonTapped:(id)arg1 ;
-(void)declineButtonTapped:(id)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldCustomizeNavigationBar;
-(long long)bodyTextAlignment;
-(id)bottomAnchoredButtons;
-(void)updateBodyTextAttributesWithMutableString:(id)arg1 ;
-(void)buttonAtIndexTapped:(long long)arg1 ;
-(UIViewController *)actionViewController;
-(void)setActionViewController:(UIViewController *)arg1 ;
-(id)titleString;
@end

