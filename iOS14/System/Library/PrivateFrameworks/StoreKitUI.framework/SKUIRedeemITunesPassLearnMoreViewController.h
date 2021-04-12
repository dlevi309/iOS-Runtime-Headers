/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
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

