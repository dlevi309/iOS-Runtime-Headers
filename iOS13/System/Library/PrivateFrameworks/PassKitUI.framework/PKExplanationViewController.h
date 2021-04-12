/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>

@protocol PKExplanationViewControllerDelegate;
@class UIBarButtonItem, UIActivityIndicatorView, PKExplanationView, OBPrivacyLinkController, NSString;

@interface PKExplanationViewController : UIViewController <PKExplanationViewDelegate> {

	UIBarButtonItem* _spinningItem;
	UIBarButtonItem* _hiddenRightBarButtonItem;
	UIActivityIndicatorView* _activityIndicatorView;
	BOOL _showingSpinner;
	BOOL _wasBackHidden;
	BOOL _showCancelButton;
	BOOL _showDoneButton;
	id<PKExplanationViewControllerDelegate> _explanationViewControllerDelegate;
	long long _context;
	PKExplanationView* _explanationView;
	OBPrivacyLinkController* _privacyLinkController;

}

@property (assign,nonatomic,__weak) id<PKExplanationViewControllerDelegate> explanationViewControllerDelegate;              //@synthesize explanationViewControllerDelegate=_explanationViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) long long context;                                                                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL showCancelButton;                                                                         //@synthesize showCancelButton=_showCancelButton - In the implementation block
@property (assign,nonatomic) BOOL showDoneButton;                                                                           //@synthesize showDoneButton=_showDoneButton - In the implementation block
@property (nonatomic,readonly) PKExplanationView * explanationView;                                                         //@synthesize explanationView=_explanationView - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLinkController;                                               //@synthesize privacyLinkController=_privacyLinkController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)context;
-(id)initWithContext:(long long)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)contentScrollView;
-(void)_dismissViewController;
-(BOOL)showCancelButton;
-(void)setPrivacyLinkController:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLinkController;
-(void)_cancelPressed;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(void)_setNavigationBarEnabled:(BOOL)arg1 ;
-(PKExplanationView *)explanationView;
-(void)setShowDoneButton:(BOOL)arg1 ;
-(void)setExplanationViewControllerDelegate:(id<PKExplanationViewControllerDelegate>)arg1 ;
-(void)_donePressed;
-(void)showNavigationBarSpinner:(BOOL)arg1 ;
-(BOOL)showDoneButton;
-(id<PKExplanationViewControllerDelegate>)explanationViewControllerDelegate;
@end

