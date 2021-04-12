/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loader:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)presentWithNavigationController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(long long)context;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)_loadPDF;
-(id)displayTitle;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
-(id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 ;
-(void)htmlTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)initalTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)termsShown;
-(void)pdfTermsDataWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)termsAccepted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentErrorAlert;
-(id)provideDataForItem:(id)arg1 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)setUseModalPresentation:(BOOL)arg1 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(void)previewControllerWillDismiss:(id)arg1 ;
-(void)dismissViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadHTML;
-(void)_pk_dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadHTMLViewController;
-(void)popViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_showTermsSpinner:(BOOL)arg1 objectModel:(id)arg2 ;
-(void)_handleWalletTermsLink:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_loadPDFViewControllerWithFileName:(id)arg1 ;
-(BOOL)useModalPresentation;
-(void)setContext:(long long)arg1 ;
@end

