/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKShareableCredentialsMessageComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class UIImage, NSArray, PKAddShareablePassConfiguration, PKShareableCredentialsMessageComposeViewController, PKHeroCardExplainationHeaderView, PKAssertion, NSMutableDictionary, NSString;

@interface PKShareableCredentialExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKShareableCredentialsMessageComposeViewControllerDelegate, PKPaymentSetupViewControllerDelegate> {

	UIImage* _passThumbnailImage;
	NSArray* _credentials;
	PKAddShareablePassConfiguration* _configuration;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKShareableCredentialsMessageComposeViewController* _messageComposeViewController;
	PKHeroCardExplainationHeaderView* _heroView;
	PKAssertion* _notificationSupressionAssertion;
	PKAssertion* _provisioningAssertion;
	NSMutableDictionary* _passToMoreItems;

}

@property (nonatomic,retain) UIImage * passThumbnailImage;                                                                   //@synthesize passThumbnailImage=_passThumbnailImage - In the implementation block
@property (nonatomic,retain) NSArray * credentials;                                                                          //@synthesize credentials=_credentials - In the implementation block
@property (nonatomic,retain) PKAddShareablePassConfiguration * configuration;                                                //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;                                  //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,retain) PKShareableCredentialsMessageComposeViewController * messageComposeViewController;              //@synthesize messageComposeViewController=_messageComposeViewController - In the implementation block
@property (nonatomic,retain) PKHeroCardExplainationHeaderView * heroView;                                                    //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) PKAssertion * notificationSupressionAssertion;                                                  //@synthesize notificationSupressionAssertion=_notificationSupressionAssertion - In the implementation block
@property (nonatomic,retain) PKAssertion * provisioningAssertion;                                                            //@synthesize provisioningAssertion=_provisioningAssertion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passToMoreItems;                                                          //@synthesize passToMoreItems=_passToMoreItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)_handleNextStep;
-(void)_invalidateAssertions;
-(void)_showProvisioningFlowWithCredentials:(id)arg1 ;
-(void)_terminateSetupFlowWithPasses:(id)arg1 error:(id)arg2 ;
-(void)_acquireAssertions;
-(void)_finishProvisioningFlowWithAddedPasses:(id)arg1 moreInfoItems:(id)arg2 ;
-(void)_showProvisioningErrorWithNumberOfPassesFailed:(long long)arg1 ;
-(PKAssertion *)notificationSupressionAssertion;
-(void)_showMoreInfoViewControllerForPasses:(id)arg1 withItems:(id)arg2 showExpressEducationIfPresent:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setNotificationSupressionAssertion:(PKAssertion *)arg1 ;
-(PKAssertion *)provisioningAssertion;
-(void)setProvisioningAssertion:(PKAssertion *)arg1 ;
-(NSMutableDictionary *)passToMoreItems;
-(void)setPassToMoreItems:(NSMutableDictionary *)arg1 ;
-(UIImage *)passThumbnailImage;
-(PKAddShareablePassConfiguration *)configuration;
-(void)viewDidLoad;
-(NSArray *)credentials;
-(void)viewController:(id)arg1 didFinishWithPasses:(id)arg2 error:(id)arg3 ;
-(void)messageComposeViewControllerDidFinishWithResult:(BOOL)arg1 ;
-(void)setMessageComposeViewController:(PKShareableCredentialsMessageComposeViewController *)arg1 ;
-(PKShareableCredentialsMessageComposeViewController *)messageComposeViewController;
-(id)initWithContext:(long long)arg1 setupDelegate:(id)arg2 credentials:(id)arg3 configuration:(id)arg4 ;
-(void)setPassThumbnailImage:(UIImage *)arg1 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(PKHeroCardExplainationHeaderView *)heroView;
-(void)setHeroView:(PKHeroCardExplainationHeaderView *)arg1 ;
-(void)setCredentials:(NSArray *)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(PKAddShareablePassConfiguration *)arg1 ;
@end

