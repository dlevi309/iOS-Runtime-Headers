/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/_SBUIPopoverExtensionHostDelegate.h>

@protocol SBHRecentsDocumentExtensionProviderDelegate, _SBUIPopoverExtensionRemoteInterface;
@class _SBHRecentsDocumentExtensionWrappingViewController, SBUIPopoverExtensionHostViewController, NSExtension, NSString;

@interface SBHRecentsDocumentExtensionProvider : NSObject <_SBUIPopoverExtensionHostDelegate> {

	CGSize _compactPreferredContentSize;
	id<SBHRecentsDocumentExtensionProviderDelegate> _delegate;
	_SBHRecentsDocumentExtensionWrappingViewController* _wrappingViewController;
	SBUIPopoverExtensionHostViewController* _hostViewController;
	NSExtension* _extension;
	id<_SBUIPopoverExtensionRemoteInterface> _remoteService;

}

@property (nonatomic,retain) _SBHRecentsDocumentExtensionWrappingViewController * wrappingViewController;              //@synthesize wrappingViewController=_wrappingViewController - In the implementation block
@property (nonatomic,readonly) SBUIPopoverExtensionHostViewController * hostViewController;                            //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                                  //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) id<_SBUIPopoverExtensionRemoteInterface> remoteService;                                   //@synthesize remoteService=_remoteService - In the implementation block
@property (assign,nonatomic,__weak) id<SBHRecentsDocumentExtensionProviderDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SBHRecentsDocumentExtensionProviderDelegate>)delegate;
-(void)setDelegate:(id<SBHRecentsDocumentExtensionProviderDelegate>)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(SBUIPopoverExtensionHostViewController *)hostViewController;
-(void)popoverHostExtensionRequestsDismiss:(id)arg1 ;
-(void)popoverHostExtensionDidExit:(id)arg1 ;
-(id<_SBUIPopoverExtensionRemoteInterface>)remoteService;
-(void)setRemoteService:(id<_SBUIPopoverExtensionRemoteInterface>)arg1 ;
-(BOOL)canShowRecentsDocumentExtensionProviderForBundleIdentifier:(id)arg1 ;
-(id)recentsDocumentViewControllerForBundleIdentifier:(id)arg1 ;
-(void)_loadExtensionWithCompletion:(/*^block*/id)arg1 ;
-(_SBHRecentsDocumentExtensionWrappingViewController *)wrappingViewController;
-(void)_loadRemoteViewControllerWithBundleIdentifer:(id)arg1 ;
-(void)_extensionWillExit:(id)arg1 ;
-(void)_teardownHostViewController;
-(void)_setupHostViewController:(id)arg1 ;
-(void)setWrappingViewController:(_SBHRecentsDocumentExtensionWrappingViewController *)arg1 ;
@end

