/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIViewServiceDeputyXPCInterface, OS_dispatch_queue;
@class _UIRemoteViewService, NSString, NSUUID, NSArray, _UIAsyncInvocation, _UIRemoteViewControllerConnectionInfo, NSObject, NSError;

@interface _UIRemoteViewControllerConnectionRequest : NSObject {

	_UIRemoteViewService* _service;
	/*^block*/id _handler;
	NSString* _viewServiceBundleIdentifier;
	NSString* _viewControllerClassName;
	NSUUID* _contextToken;
	NSArray* _serializedAppearanceCustomizations;
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
+(id)__requestRemoteViewController:(id)arg1 service:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 serializedAppearanceCustomizations:(id)arg4 exportedHostingObject:(id)arg5 serviceViewControllerDeputyInterface:(id)arg6 connectionHandler:(/*^block*/id)arg7 ;
+(id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 serializedAppearanceCustomizations:(id)arg3 exportedHostingObject:(id)arg4 serviceViewControllerDeputyInterface:(id)arg5 connectionHandler:(/*^block*/id)arg6 ;
+(id)requestViewControllerWithService:(id)arg1 serializedAppearanceCustomizations:(id)arg2 exportedHostingObject:(id)arg3 remoteViewControllerClass:(Class)arg4 serviceViewControllerDeputyInterface:(id)arg5 connectionHandler:(/*^block*/id)arg6 ;
-(void)dealloc;
-(void)_cancelUnconditionallyThen:(/*^block*/id)arg1 ;
-(id)_cancelWithError:(id)arg1 ;
-(void)_connectToPlugInKitService;
-(void)_connectToViewService;
-(void)_connectToViewControllerOperator;
-(void)_sendServiceViewControllerRequest;
-(void)_connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 successHandler:(/*^block*/id)arg3 ;
-(void)_connectToTextEffectsOperator;
-(void)_connectToServiceViewController;
-(void)_sendServiceTextEffectsRequest;
-(void)_connectToViewControllerControlMessageDeputy;
-(void)_didFinishEstablishingConnection;
@end

