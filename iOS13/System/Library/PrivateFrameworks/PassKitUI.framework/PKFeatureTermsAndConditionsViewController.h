/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPortraitNavigationController.h>
#import <libobjc.A.dylib/QLPreviewItemDataProvider.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class RemoteUIController, QLItem, QLPreviewController, NSData, NSString;

@interface PKFeatureTermsAndConditionsViewController : PKPortraitNavigationController <QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource, RemoteUIControllerDelegate, PKPaymentSetupPresentationProtocol, PKViewControllerPreflightable> {

	BOOL _isIpad;
	RemoteUIController* _termsUIController;
	QLItem* _pdfItem;
	QLPreviewController* _previewController;
	NSData* _pdfData;
	NSData* _htmlData;
	BOOL _performedInitialLoad;
	BOOL _useModalPresentation;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	long long _context;

}

@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (assign,nonatomic) long long context;                                                          //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL useModalPresentation;                                                  //@synthesize useModalPresentation=_useModalPresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(void)previewControllerWillDismiss:(id)arg1 ;
-(id)provideDataForItem:(id)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(id)displayTitle;
-(void)loader:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)presentWithNavigationController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 ;
-(void)htmlTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)initalTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)pdfTermsDataWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)termsShown;
-(void)termsAccepted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentErrorAlert;
-(void)setUseModalPresentation:(BOOL)arg1 ;
-(void)dismissViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadPDF;
-(void)_loadHTML;
-(void)_pk_dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadHTMLViewController;
-(void)popViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_showTermsSpinner:(BOOL)arg1 objectModel:(id)arg2 ;
-(void)_handleWalletTermsLink:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_loadPDFViewControllerWithFileName:(id)arg1 ;
-(BOOL)useModalPresentation;
@end

