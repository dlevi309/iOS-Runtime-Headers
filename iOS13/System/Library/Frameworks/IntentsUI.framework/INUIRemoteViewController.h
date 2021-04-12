/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/_INUIRemoteViewControllerHosting.h>
#import <libobjc.A.dylib/INUIExtensionHostContextDelegate.h>

@protocol INUIRemoteViewControllerDelegate, NSCopying;
@class INUIExtensionRequestInfo, INUIExtensionViewControllerConfiguration, _INUIExtensionHostContext, NSExtension, NSString;

@interface INUIRemoteViewController : _UIRemoteViewController <_INUIRemoteViewControllerHosting, INUIExtensionHostContextDelegate> {

	BOOL _needsStateUpdate;
	INUIExtensionRequestInfo* _requestInfo;
	id<INUIRemoteViewControllerDelegate> _delegate;
	INUIExtensionViewControllerConfiguration* _configuration;
	_INUIExtensionHostContext* _extensionHostContext;
	NSExtension* _activeExtension;
	id<NSCopying> _currentRequestIdentifier;
	CGSize _preferredContentSize;

}

@property (nonatomic,retain) _INUIExtensionHostContext * extensionHostContext;                          //@synthesize extensionHostContext=_extensionHostContext - In the implementation block
@property (nonatomic,retain) NSExtension * activeExtension;                                             //@synthesize activeExtension=_activeExtension - In the implementation block
@property (nonatomic,retain) id<NSCopying> currentRequestIdentifier;                                    //@synthesize currentRequestIdentifier=_currentRequestIdentifier - In the implementation block
@property (setter=_setRequestInfo:,nonatomic,copy) INUIExtensionRequestInfo * requestInfo;              //@synthesize requestInfo=_requestInfo - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;                                               //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (nonatomic,copy) INUIExtensionViewControllerConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<INUIRemoteViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL needsStateUpdate;                                                     //@synthesize needsStateUpdate=_needsStateUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)requestRemoteViewControllerWithRequestInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
+(void)_requestRemoteViewControllerForSnippetExtensionInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(void)_requestRemoteViewControllerWithRequestInfo:(id)arg1 delegate:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)_attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(void)requestRemoteViewControllerForInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(void)attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
-(id<INUIRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<INUIRemoteViewControllerDelegate>)arg1 ;
-(id)disconnect;
-(void)setConfiguration:(INUIExtensionViewControllerConfiguration *)arg1 ;
-(INUIExtensionViewControllerConfiguration *)configuration;
-(CGSize)preferredContentSize;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(INUIExtensionRequestInfo *)requestInfo;
-(id<NSCopying>)currentRequestIdentifier;
-(void)setCurrentRequestIdentifier:(id<NSCopying>)arg1 ;
-(void)serviceViewControllerDesiresConstrainedSize:(CGSize)arg1 ;
-(void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)desiresInteractivity:(/*^block*/id)arg1 ;
-(void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)extensionHostContext:(id)arg1 wantsToHandleIntent:(id)arg2 ;
-(void)extensionHostContextWillBeginEditing:(id)arg1 ;
-(void)setDelegate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIdealConfiguration:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setNeedsStateUpdate:(BOOL)arg1 ;
-(void)requestCancellation;
-(void)_queryRepresentedPropertiesWithCompletion:(/*^block*/id)arg1 ;
-(id)_errorHandlingServiceViewControllerProxy;
-(void)_updateExtensionContextStateWithCompletion:(/*^block*/id)arg1 ;
-(void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 errorHandlingCompletion:(/*^block*/id)arg3 ;
-(void)_setRequestInfo:(id)arg1 ;
-(BOOL)needsStateUpdate;
-(_INUIExtensionHostContext *)extensionHostContext;
-(void)setExtensionHostContext:(_INUIExtensionHostContext *)arg1 ;
-(NSExtension *)activeExtension;
-(void)setActiveExtension:(NSExtension *)arg1 ;
@end

