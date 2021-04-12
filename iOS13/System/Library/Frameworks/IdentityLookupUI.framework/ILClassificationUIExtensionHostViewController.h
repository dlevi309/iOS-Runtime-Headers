/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/ILClassificationUIExtensionHostContextDelegate.h>
#import <libobjc.A.dylib/ILClassificationExtensionShellViewControllerDelegate.h>

@protocol ILClassificationUIExtensionHostViewControllerDelegate, OS_dispatch_queue;
@class NSObject, ILClassificationRequest, ILClassificationResponse, NSString, NSExtension, NSUUID, UINavigationController, ILClassificationExtensionShellViewController, ILClassificationUIExtensionHostContext, ILClassificationReportingController;

@interface ILClassificationUIExtensionHostViewController : UIViewController <ILClassificationUIExtensionHostContextDelegate, ILClassificationExtensionShellViewControllerDelegate> {

	id<ILClassificationUIExtensionHostViewControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	ILClassificationRequest* _classificationRequest;
	ILClassificationResponse* _classificationResponse;
	NSString* _sender;
	NSString* _isoCountryCode;
	NSExtension* _extension;
	NSUUID* _extensionRequestIdentifier;
	UINavigationController* _navigationController;
	ILClassificationExtensionShellViewController* _shellViewController;
	ILClassificationUIExtensionHostContext* _extensionHostContext;
	ILClassificationReportingController* _reportingController;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) ILClassificationRequest * classificationRequest;                                      //@synthesize classificationRequest=_classificationRequest - In the implementation block
@property (nonatomic,retain) ILClassificationResponse * classificationResponse;                                      //@synthesize classificationResponse=_classificationResponse - In the implementation block
@property (nonatomic,copy) NSString * sender;                                                                        //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * isoCountryCode;                                                                //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                                //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSUUID * extensionRequestIdentifier;                                                    //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                                          //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) ILClassificationExtensionShellViewController * shellViewController;                     //@synthesize shellViewController=_shellViewController - In the implementation block
@property (nonatomic,retain) ILClassificationUIExtensionHostContext * extensionHostContext;                          //@synthesize extensionHostContext=_extensionHostContext - In the implementation block
@property (nonatomic,readonly) ILClassificationReportingController * reportingController;                            //@synthesize reportingController=_reportingController - In the implementation block
@property (assign,nonatomic,__weak) id<ILClassificationUIExtensionHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(id<ILClassificationUIExtensionHostViewControllerDelegate>)delegate;
-(void)setDelegate:(id<ILClassificationUIExtensionHostViewControllerDelegate>)arg1 ;
-(void)finish;
-(NSString *)sender;
-(void)setSender:(NSString *)arg1 ;
-(NSString *)isoCountryCode;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UINavigationController *)navigationController;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setExtensionRequestIdentifier:(NSUUID *)arg1 ;
-(NSExtension *)extension;
-(NSUUID *)extensionRequestIdentifier;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(id)initUnactivatedVCWithRequest:(id)arg1 sender:(id)arg2 isoCountryCode:(id)arg3 ;
-(void)activateExtensionWithCompletion:(/*^block*/id)arg1 ;
-(ILClassificationUIExtensionHostContext *)extensionHostContext;
-(void)setExtensionHostContext:(ILClassificationUIExtensionHostContext *)arg1 ;
-(ILClassificationReportingController *)reportingController;
-(void)launchSettings;
-(ILClassificationRequest *)classificationRequest;
-(ILClassificationExtensionShellViewController *)shellViewController;
-(id)logErrorWithMessage:(id)arg1 ;
-(void)didCompleteClassificationRequestWithResponse:(id)arg1 ;
-(void)setClassificationResponse:(ILClassificationResponse *)arg1 ;
-(void)blockNumber:(id)arg1 withCountryCode:(id)arg2 ;
-(void)presentBlockAlertWithCompletion:(/*^block*/id)arg1 ;
-(ILClassificationResponse *)classificationResponse;
-(void)context:(id)arg1 didBecomeReadyForClassificationResponse:(BOOL)arg2 ;
-(void)userDidCancelForExtensionShellViewController:(id)arg1 ;
-(void)userDidFinishForExtensionShellViewController:(id)arg1 ;
-(id)initWithClassificationRequest:(id)arg1 sender:(id)arg2 isoCountryCode:(id)arg3 ;
-(void)setShellViewController:(ILClassificationExtensionShellViewController *)arg1 ;
@end

