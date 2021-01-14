/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIDocumentBrowserViewControllerPrivateDelegate.h>
#import <UIKitCore/_UIRemoteViewControllerContaining.h>

@protocol UIDocumentPickerDelegate;
@class NSMutableArray, NSURL, NSArray, UIViewController, DOCConfiguration, NSString, _UIRemoteViewController;

@interface UIDocumentPickerViewController : UIViewController <UIDocumentBrowserViewControllerPrivateDelegate, _UIRemoteViewControllerContaining> {

	id<UIDocumentPickerDelegate> _weak_delegate;
	NSMutableArray* _securityScopedURLs;
	BOOL _ignoreApplicationEntitlementForImport;
	BOOL _allowsMultipleSelection;
	BOOL _isContentManaged;
	BOOL _automaticallyDismissesAfterCompletion;
	id<UIDocumentPickerDelegate> _delegate;
	unsigned long long _documentPickerMode;
	NSURL* _directoryURL;
	NSArray* _documentTypes;
	UIViewController* _childViewController;
	NSArray* _uploadURLs;
	DOCConfiguration* _configuration;

}

@property (assign,nonatomic) unsigned long long documentPickerMode;                                                                                                                    //@synthesize documentPickerMode=_documentPickerMode - In the implementation block
@property (nonatomic,copy) NSArray * documentTypes;                                                                                                                                    //@synthesize documentTypes=_documentTypes - In the implementation block
@property (setter=_setChildViewController:,getter=_childViewController,nonatomic,retain) UIViewController * childViewController;                                                       //@synthesize childViewController=_childViewController - In the implementation block
@property (nonatomic,copy) NSArray * uploadURLs;                                                                                                                                       //@synthesize uploadURLs=_uploadURLs - In the implementation block
@property (nonatomic,retain) NSMutableArray * _securityScopedURLs;                                                                                                                     //@synthesize securityScopedURLs=_securityScopedURLs - In the implementation block
@property (nonatomic,retain) DOCConfiguration * configuration;                                                                                                                         //@synthesize configuration=_configuration - In the implementation block
@property (assign,setter=_setIgnoreApplicationEntitlementForImport:,getter=_ignoreApplicationEntitlementForImport,nonatomic) BOOL _ignoreApplicationEntitlementForImport;              //@synthesize ignoreApplicationEntitlementForImport=_ignoreApplicationEntitlementForImport - In the implementation block
@property (assign,setter=_setIsContentManaged:,getter=_isContentManaged,nonatomic) BOOL isContentManaged;                                                                              //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (assign,setter=_setSourceIsManaged:,getter=_sourceIsManaged,nonatomic) BOOL sourceIsManaged; 
@property (assign,setter=_setAutomaticallyDismissesAfterCompletion:,getter=_automaticallyDismissesAfterCompletion,nonatomic) BOOL automaticallyDismissesAfterCompletion;               //@synthesize automaticallyDismissesAfterCompletion=_automaticallyDismissesAfterCompletion - In the implementation block
@property (assign,nonatomic) unsigned long long pickerUserInterfaceStyle; 
@property (assign,setter=_setForPickingDownloadsFolder:,getter=_forPickingDownloadsFolder,nonatomic) BOOL forPickingDownloadsFolder; 
@property (assign,nonatomic,__weak) id<UIDocumentPickerDelegate> delegate;                                                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsMultipleSelection;                                                                                                                             //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (assign,nonatomic) BOOL shouldShowFileExtensions; 
@property (nonatomic,copy) NSURL * directoryURL;                                                                                                                                       //@synthesize directoryURL=_directoryURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
-(BOOL)allowsMultipleSelection;
-(id<UIDocumentPickerDelegate>)delegate;
-(BOOL)_isContentManaged;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<UIDocumentPickerDelegate>)arg1 ;
-(DOCConfiguration *)configuration;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSArray *)uploadURLs;
-(unsigned long long)documentPickerMode;
-(id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2 ;
-(id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2 ;
-(void)setDocumentPickerMode:(unsigned long long)arg1 ;
-(void)_setIsContentManaged:(BOOL)arg1 ;
-(BOOL)_sourceIsManaged;
-(void)_setSourceIsManaged:(BOOL)arg1 ;
-(id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_ignoreApplicationEntitlementForImport;
-(void)_didTapCancel;
-(void)_setIgnoreApplicationEntitlementForImport:(BOOL)arg1 ;
-(void)_commonInitWithDocumentTypes:(id)arg1 ;
-(id)initWithURLs:(id)arg1 inMode:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initForOpeningContentTypes:(id)arg1 asCopy:(BOOL)arg2 ;
-(void)setDocumentTypes:(NSArray *)arg1 ;
-(void)_setAutomaticallyDismissesAfterCompletion:(BOOL)arg1 ;
-(id)initForExportingURLs:(id)arg1 asCopy:(BOOL)arg2 ;
-(id)initForExportingURLs:(id)arg1 ;
-(BOOL)shouldShowFileExtensions;
-(void)setShouldShowFileExtensions:(BOOL)arg1 ;
-(void)set_securityScopedURLs:(NSMutableArray *)arg1 ;
-(BOOL)_automaticallyDismissesAfterCompletion;
-(NSArray *)documentTypes;
-(void)_tellDelegateDocumentPickerWasCancelled;
-(void)_callDelegateWithSelectedURLsAndDismiss:(id)arg1 ;
-(unsigned long long)pickerUserInterfaceStyle;
-(void)_consumeSandboxExtensionForURL:(id)arg1 ;
-(NSMutableArray *)_securityScopedURLs;
-(void)documentBrowser:(id)arg1 didPickDocumentURLs:(id)arg2 ;
-(void)documentManagerWasCancelled:(id)arg1 ;
-(NSURL *)directoryURL;
-(id)initForOpeningContentTypes:(id)arg1 ;
-(void)setPickerUserInterfaceStyle:(unsigned long long)arg1 ;
-(void)_setForPickingDownloadsFolder:(BOOL)arg1 ;
-(void)setDirectoryURL:(NSURL *)arg1 ;
-(BOOL)_forPickingDownloadsFolder;
-(void)_setChildViewController:(id)arg1 ;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(id)_childViewController;
-(void)setUploadURLs:(NSArray *)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(DOCConfiguration *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

