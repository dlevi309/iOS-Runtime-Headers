/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IdentityLookupUI.framework/IdentityLookupUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/ILClassificationUIExtensionHostContextDelegate.h>
#import <libobjc.A.dylib/ILClassificationExtensionShellViewControllerDelegate.h>

@protocol ILClassificationUIExtensionHostViewControllerDelegate, OS_dispatch_queue, NSCopying;
@class NSObject, ILClassificationRequest, ILClassificationResponse, NSString, NSExtension, UINavigationController, ILClassificationExtensionShellViewController, ILClassificationUIExtensionHostContext, ILClassificationReportingController;

@interface ILClassificationUIExtensionHostViewController : UIViewController <ILClassificationUIExtensionHostContextDelegate, ILClassificationExtensionShellViewControllerDelegate> {

	id<ILClassificationUIExtensionHostViewControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	ILClassificationRequest* _classificationRequest;
	ILClassificationResponse* _classificationResponse;
	NSString* _sender;
	NSString* _isoCountryCode;
	NSExtension* _extension;
	id<NSCopying> _extensionRequestIdentifier;
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
@property (nonatomic,retain) id<NSCopying> extensionRequestIdentifier;                                               //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                                          //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) ILClassificationExtensionShellViewController * shellViewController;                     //@synthesize shellViewController=_shellViewController - In the implementation block
@property (nonatomic,retain) ILClassificationUIExtensionHostContext * extensionHostContext;                          //@synthesize extensionHostContext=_extensionHostContext - In the implementation block
@property (nonatomic,readonly) ILClassificationReportingController * reportingController;                            //@synthesize reportingController=_reportingController - In the implementation block
@property (assign,nonatomic,__weak) id<ILClassificationUIExtensionHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finish;
-(NSString *)sender;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)setSender:(NSString *)arg1 ;
-(id<ILClassificationUIExtensionHostViewControllerDelegate>)delegate;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSString *)isoCountryCode;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)activateExtensionWithCompletion:(/*^block*/id)arg1 ;
-(id)initUnactivatedVCWithRequest:(id)arg1 sender:(id)arg2 isoCountryCode:(id)arg3 ;
-(void)setDelegate:(id<ILClassificationUIExtensionHostViewControllerDelegate>)arg1 ;
-(ILClassificationReportingController *)reportingController;
-(void)viewDidLoad;
-(NSExtension *)extension;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)extensionRequestIdentifier;
-(UINavigationController *)navigationController;
-(void)launchSettings;
-(ILClassificationUIExtensionHostContext *)extensionHostContext;
-(void)setExtensionHostContext:(ILClassificationUIExtensionHostContext *)arg1 ;
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

