/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(id)titleString;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)bodyString;
-(long long)bodyTextAlignment;
-(void)acceptButtonTapped:(id)arg1 ;
-(void)declineButtonTapped:(id)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldCustomizeNavigationBar;
-(void)updateBodyTextAttributesWithMutableString:(id)arg1 ;
-(id)bottomAnchoredButtons;
-(void)buttonAtIndexTapped:(long long)arg1 ;
-(UIViewController *)actionViewController;
-(void)setActionViewController:(UIViewController *)arg1 ;
@end

