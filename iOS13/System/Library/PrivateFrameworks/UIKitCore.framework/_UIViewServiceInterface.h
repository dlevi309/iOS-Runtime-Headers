/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@class NSError, _UIAsyncInvocation, NSString, _UIRemoteViewService, BKSProcessAssertion, NSXPCConnection;

@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate> {

	os_unfair_lock_s _terminationStateLock;
	NSError* _terminationError;
	/*^block*/id _terminationHandler;
	BOOL _isTerminated;
	_UIAsyncInvocation* _terminateInvocation;
	NSString* _serviceBundleIdentifier;
	_UIRemoteViewService* _service;
	BKSProcessAssertion* _serviceProcessAssertion;
	NSXPCConnection* _serviceConnection;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;

}

@property (nonatomic,readonly) int servicePID; 
@property (nonatomic,readonly) SCD_Struct_UI52 serviceAuditToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(id)connectToViewService:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)setTerminationHandler:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(id)disconnect;
-(int)__automatic_invalidation_logic;
-(id)_initWithConnectionInfo:(SCD_Struct_UI29)arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3 ;
-(id)_initWithConnectionInfo:(SCD_Struct_UI29)arg1 service:(id)arg2 deputyInterfaces:(id)arg3 ;
-(void)_terminateUnconditionallyThen:(/*^block*/id)arg1 ;
-(id)_terminateWithError:(id)arg1 ;
-(id)_initWithConnectionInfo:(SCD_Struct_UI29)arg1 serviceBundleIdentifier:(id)arg2 service:(id)arg3 deputyInterfaces:(id)arg4 ;
-(id)connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
-(int)servicePID;
-(SCD_Struct_UI52)serviceAuditToken;
@end

