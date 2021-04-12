/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SLRemoteComposeViewControllerDelegateProtocol.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>

@class _UIRemoteViewController, NSExtension, NSString, NSArray, NSLayoutConstraint, UIView, UIViewController;

@interface SLComposeViewController : UIViewController <SLRemoteComposeViewControllerDelegateProtocol, _UIRemoteViewControllerContaining> {

	NSExtension* _extension;
	NSString* _initialText;
	NSArray* _itemProviders;
	NSArray* _extensionItems;
	NSLayoutConstraint* _keyboardTopConstraint;
	UIView* _keyboardTrackingView;
	long long _savedStatusBarStyle;
	BOOL _wasPresented;
	BOOL _hasInstantiatedExtensionUI;
	/*^block*/id _completionHandler;
	BOOL _didFailLoadingRemoteViewController;
	BOOL _didCompleteSheet;
	long long _maximumImageCount;
	long long _maximumURLCount;
	long long _maximumVideoCount;
	long long _numVideosAdded;
	long long _numImagesAdded;
	long long _numURLsAdded;
	NSString* _serviceType;
	UIViewController* _remoteViewController;

}

@property (retain) UIViewController * remoteViewController;                                           //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,readonly) NSString * serviceType;                                                //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
+(BOOL)isAvailableForServiceType:(id)arg1 ;
+(id)extensionIdentifierForActivityType:(id)arg1 ;
+(id)composeViewControllerForExtension:(id)arg1 ;
+(BOOL)isAvailableForExtension:(id)arg1 inHostApplicationBundleID:(id)arg2 ;
+(id)_serviceTypeToExtensionIdentifierMap;
+(BOOL)_isMultiUserDevice;
+(id)_unsupportedServiceTypes;
+(BOOL)_isAvailableForServiceType:(id)arg1 inHostApplicationBundleID:(id)arg2 ;
+(id)_serviceTypeForExtensionIdentifier:(id)arg1 ;
+(BOOL)_legacyBuiltInAvailabilityForService:(id)arg1 inHostApplicationBundleID:(id)arg2 ;
+(BOOL)_isAvailableForMediaShareExtension:(id)arg1 ;
+(BOOL)_isServiceType:(id)arg1 ;
+(id)_extensionIdentifierForServiceType:(id)arg1 ;
+(id)_shareExtensionWithIdentifier:(id)arg1 ;
+(id)composeViewControllerForServiceType:(id)arg1 ;
+(BOOL)isAvailableForExtension:(id)arg1 ;
+(BOOL)isAvailableForExtensionIdentifier:(id)arg1 ;
+(id)composeViewControllerForExtensionIdentifier:(id)arg1 ;
-(void)dealloc;
-(BOOL)addImage:(id)arg1 ;
-(NSString *)serviceType;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidUnload;
-(BOOL)_useCustomDimmingView;
-(UIViewController *)remoteViewController;
-(void)setRemoteViewController:(UIViewController *)arg1 ;
-(id)initWithServiceType:(id)arg1 ;
-(BOOL)addURL:(id)arg1 ;
-(BOOL)setInitialText:(id)arg1 ;
-(void)_instantiateAndBeginExtensionIfNeeded;
-(BOOL)addItemProvider:(id)arg1 ;
-(BOOL)addExtensionItem:(id)arg1 ;
-(id)initWithExtensionIdentifier:(id)arg1 ;
-(void)completeWithResult:(long long)arg1 ;
-(id)initWithExtension:(id)arg1 requestedServiceType:(id)arg2 ;
-(BOOL)canAddContent;
-(id)_urlForUntypedAsset:(id)arg1 ;
-(BOOL)_addImageAsset:(id)arg1 preview:(id)arg2 ;
-(BOOL)supportsImageAsset:(id)arg1 ;
-(BOOL)_addImageJPEGData:(id)arg1 preview:(id)arg2 ;
-(BOOL)supportsVideoAsset:(id)arg1 ;
-(BOOL)addURL:(id)arg1 withPreviewImage:(id)arg2 ;
-(BOOL)_addURL:(id)arg1 type:(long long)arg2 preview:(id)arg3 ;
-(BOOL)_addVideoData:(id)arg1 preview:(id)arg2 ;
-(BOOL)_addVideoAsset:(id)arg1 preview:(id)arg2 ;
-(void)_handleRemoteViewFailure;
-(void)didLoadSheetViewController;
-(void)remoteController:(id)arg1 didLoadWithError:(id)arg2 ;
-(void)_instantiateAndBeginExtensionIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)remoteViewController:(id)arg1 didTerminateWithError:(id)arg2 ;
-(BOOL)addImageAsset:(id)arg1 ;
-(BOOL)removeAllImages;
-(BOOL)removeAllURLs;
-(BOOL)addAttachment:(id)arg1 ;
-(/*^block*/id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1 ;
-(void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3 ;
-(void)userDidCancel;
-(void)userDidPost;
-(void)remoteViewControllerLoadDidTimeout;
@end

