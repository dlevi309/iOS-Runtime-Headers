/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialMessageComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKAppletSubcredentialSharingExplanationViewControllerDelegate;
@class PKHeroCardExplainationHeaderView, PKSharedCredentialsGroupController, PKAppletSubcredentialSharingRequest, PKSubcredentialMessageComposeViewController, NSString;

@interface PKAppletSubcredentialSharingExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKSubcredentialMessageComposeViewControllerDelegate, PKViewControllerPreflightable> {

	PKHeroCardExplainationHeaderView* _heroCardView;
	PKSharedCredentialsGroupController* _groupController;
	PKAppletSubcredentialSharingRequest* _sharingRequest;
	id<PKAppletSubcredentialSharingExplanationViewControllerDelegate> _delegate;
	BOOL _isSharing;
	PKSubcredentialMessageComposeViewController* _messageComposeViewController;

}

@property (nonatomic,retain) PKSubcredentialMessageComposeViewController * messageComposeViewController;              //@synthesize messageComposeViewController=_messageComposeViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
-(void)messageComposeViewControllerDidFinishWithResult:(BOOL)arg1 ;
-(void)setMessageComposeViewController:(PKSubcredentialMessageComposeViewController *)arg1 ;
-(PKSubcredentialMessageComposeViewController *)messageComposeViewController;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)_openMessagesToPresentAction;
-(id)initWithSharedCredentialsGroupController:(id)arg1 delegate:(id)arg2 SharingRequest:(id)arg3 ;
@end

