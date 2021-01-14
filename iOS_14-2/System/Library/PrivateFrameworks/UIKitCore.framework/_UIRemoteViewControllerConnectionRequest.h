/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIViewServiceDeputyXPCInterface, OS_dispatch_queue;
@class _UIRemoteViewService, NSString, NSUUID, NSArray, UITraitCollection, _UIAsyncInvocation, _UIRemoteViewControllerConnectionInfo, NSObject, NSError;

@interface _UIRemoteViewControllerConnectionRequest : NSObject {

	_UIRemoteViewService* _service;
	/*^block*/id _handler;
	NSString* _viewServiceBundleIdentifier;
	NSString* _viewControllerClassName;
	NSUUID* _contextToken;
	NSArray* _serializedAppearanceCustomizations;
	UITraitCollection* _traits;
	id _exportedHostingObject;
	Class _remoteViewControllerClass;
	id<_UIViewServiceDeputyXPCInterface> _serviceViewControllerDeputyInterface;
	_UIAsyncInvocation* _cancelInvocationForCurrentOperation;
	_UIRemoteViewControllerConnectionInfo* _connectionInfo;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isCancelledOrComplete;
	NSError* _error;
	_UIAsyncInvocation* _requestCancellationInvocation;

}
+(id)requestViewControllerWithService:(id)arg1 serializedAppearanceCustomizations:(id)arg2 traitCollection:(id)arg3 exportedHostingObject:(id)arg4 remoteViewControllerClass:(Class)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(/*^block*/id)arg7 ;
+(id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 serializedAppearanceCustomizations:(id)arg3 traitCollection:(id)arg4 exportedHostingObject:(id)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(/*^block*/id)arg7 ;
+(id)__requestRemoteViewController:(id)arg1 service:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 serializedAppearanceCustomizations:(id)arg4 traitCollection:(id)arg5 exportedHostingObject:(id)arg6 serviceViewControllerDeputyInterface:(id)arg7 connectionHandler:(/*^block*/id)arg8 ;
-(void)_connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 successHandler:(/*^block*/id)arg3 ;
-(void)_connectToPlugInKitService;
-(void)_connectToViewControllerControlMessageDeputy;
-(void)_didFinishEstablishingConnection;
-(void)_connectToViewControllerOperator;
-(void)_sendServiceTextEffectsRequest;
-(void)_connectToViewService;
-(void)_connectToServiceViewController;
-(void)_connectToTextEffectsOperator;
-(void)_sendServiceViewControllerRequest;
-(void)_cancelUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)_cancelWithError:(id)arg1 ;
@end

