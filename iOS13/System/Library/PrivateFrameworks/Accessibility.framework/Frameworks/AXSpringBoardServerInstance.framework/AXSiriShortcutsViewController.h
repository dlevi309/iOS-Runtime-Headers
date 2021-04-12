/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/APUIShortLookViewControllerDelegate.h>

@protocol AXSiriShortcutsViewControllerDelegate;
@class APUIShortLookViewController, NSString;

@interface AXSiriShortcutsViewController : UIViewController <APUIShortLookViewControllerDelegate> {

	id<AXSiriShortcutsViewControllerDelegate> _delegate;
	APUIShortLookViewController* _shortLookViewController;

}

@property (nonatomic,retain) APUIShortLookViewController * shortLookViewController;                  //@synthesize shortLookViewController=_shortLookViewController - In the implementation block
@property (assign,nonatomic,__weak) id<AXSiriShortcutsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id<AXSiriShortcutsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AXSiriShortcutsViewControllerDelegate>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(APUIShortLookViewController *)shortLookViewController;
-(void)setShortLookViewController:(APUIShortLookViewController *)arg1 ;
-(void)shortLookViewController:(id)arg1 didCompleteActionWithResult:(long long)arg2 ;
-(void)shortLookViewController:(id)arg1 didDismissLongLookWithReason:(long long)arg2 actionCompleted:(BOOL)arg3 shouldClearAction:(BOOL)arg4 ;
-(id)initWithShortcutIdentifier:(id)arg1 bundleID:(id)arg2 ;
-(void)_automaticallyPerformShortcutIfPossible;
@end

