/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIDocumentBrowserViewControllerPrivateDelegate.h>

@protocol UIDocumentPickerDelegate;
@class NSMutableArray, NSURL, NSArray, UIViewController, DOCConfiguration, NSString;

@interface UIDocumentPickerViewController : UIViewController <UIDocumentBrowserViewControllerPrivateDelegate> {

	id<UIDocumentPickerDelegate> _weak_delegate;
	NSMutableArray* _securityScopedURLs;
	BOOL _ignoreApplicationEntitlementForImport;
	BOOL _allowsMultipleSelection;
	BOOL _isContentManaged;
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
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<UIDocumentPickerDelegate>)delegate;
-(void)setDelegate:(id<UIDocumentPickerDelegate>)arg1 ;
-(BOOL)_isContentManaged;
-(void)setConfiguration:(DOCConfiguration *)arg1 ;
-(DOCConfiguration *)configuration;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)allowsMultipleSelection;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(unsigned long long)documentPickerMode;
-(id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2 ;
-(id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2 ;
-(void)setDocumentPickerMode:(unsigned long long)arg1 ;
-(void)_setChildViewController:(id)arg1 ;
-(void)_setIsContentManaged:(BOOL)arg1 ;
-(id)_childViewController;
-(id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1 ;
-(BOOL)_sourceIsManaged;
-(void)_setSourceIsManaged:(BOOL)arg1 ;
-(BOOL)_ignoreApplicationEntitlementForImport;
-(void)_setIgnoreApplicationEntitlementForImport:(BOOL)arg1 ;
-(void)_commonInitWithDocumentTypes:(id)arg1 ;
-(void)setUploadURLs:(NSArray *)arg1 ;
-(BOOL)shouldShowFileExtensions;
-(void)setShouldShowFileExtensions:(BOOL)arg1 ;
-(void)_tellDelegateDocumentPickerWasCancelled;
-(void)_callDelegateWithSelectedURLsAndDismiss:(id)arg1 ;
-(void)_didTapCancel;
-(void)setDocumentTypes:(NSArray *)arg1 ;
-(NSArray *)uploadURLs;
-(NSURL *)directoryURL;
-(void)_consumeSandboxExtensionForURL:(id)arg1 ;
-(void)documentBrowser:(id)arg1 didPickDocumentURLs:(id)arg2 ;
-(void)documentManagerWasCancelled:(id)arg1 ;
-(id)initWithURLs:(id)arg1 inMode:(unsigned long long)arg2 ;
-(unsigned long long)pickerUserInterfaceStyle;
-(void)setPickerUserInterfaceStyle:(unsigned long long)arg1 ;
-(id)_initWithViewController:(id)arg1 inMode:(unsigned long long)arg2 uploadURLOrNil:(id)arg3 ;
-(void)_setForPickingDownloadsFolder:(BOOL)arg1 ;
-(BOOL)_forPickingDownloadsFolder;
-(NSMutableArray *)_securityScopedURLs;
-(void)set_securityScopedURLs:(NSMutableArray *)arg1 ;
-(void)setDirectoryURL:(NSURL *)arg1 ;
-(NSArray *)documentTypes;
@end

