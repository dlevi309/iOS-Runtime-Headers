/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PDXPCServiceExportedInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, NSObject;

@interface PDXPCService : NSObject <PDXPCServiceExportedInterface> {

	NSXPCConnection* _connection;
	NSString* _className;
	BOOL _callbacksSuspended;
	NSObject*<OS_dispatch_queue> _readWriteQueue;
	int _remoteProcessIdentifier;
	NSString* _remoteProcessApplicationIdentifier;

}

@property (nonatomic,readonly) int remoteProcessIdentifier;                                //@synthesize remoteProcessIdentifier=_remoteProcessIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * remoteProcessApplicationIdentifier;              //@synthesize remoteProcessApplicationIdentifier=_remoteProcessApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * remoteProcessBundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)serviceResumed;
-(void)serviceSuspended;
-(void)clearConnectionReference;
-(int)remoteProcessIdentifier;
-(NSString *)remoteProcessBundleIdentifier;
-(NSString *)remoteProcessApplicationIdentifier;
@end

