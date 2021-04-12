/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillLayoutSubviews;
-(id)init;
-(BOOL)showDoneButton;
-(id)initWithContext:(long long)arg1 ;
-(long long)context;
-(id<PKExplanationViewControllerDelegate>)explanationViewControllerDelegate;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_dismissViewController;
-(void)_cancelPressed;
-(void)_setNavigationBarEnabled:(BOOL)arg1 ;
-(void)loadView;
-(void)_donePressed;
-(PKExplanationView *)explanationView;
-(id)contentScrollView;
-(void)setPrivacyLinkController:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLinkController;
-(BOOL)showCancelButton;
-(void)setShowDoneButton:(BOOL)arg1 ;
-(void)setExplanationViewControllerDelegate:(id<PKExplanationViewControllerDelegate>)arg1 ;
-(void)showNavigationBarSpinner:(BOOL)arg1 ;
@end

