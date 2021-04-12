/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIRedeemStepViewController.h>
#import <libobjc.A.dylib/SKUIPassbookLoaderDelegate.h>

@class SKUIRedeemITunesPassLearnMoreView, SKUIPassbookLoader, NSURL, NSString;

@interface SKUIRedeemITunesPassLearnMoreViewController : SKUIRedeemStepViewController <SKUIPassbookLoaderDelegate> {

	BOOL _didTapAddPassbookButton;
	SKUIRedeemITunesPassLearnMoreView* _learnMoreView;
	SKUIPassbookLoader* _passbookLoader;
	NSURL* _passbookURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_doneButtonAction:(id)arg1 ;
-(id)presentationViewControllerForPassbookLoader:(id)arg1 ;
-(void)passbookLoaderDidFinish:(id)arg1 ;
-(id)_existingPass;
-(void)_passButtonAction:(id)arg1 ;
-(void)_loadPassbookPass;
-(void)_loadPassbookURL;
-(void)_showErrorDialog;
-(void)_didLoadPassbookURLString:(id)arg1 ;
@end

