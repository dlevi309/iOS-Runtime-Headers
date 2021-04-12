/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PDXPCServiceExportedInterface.h>

@class NSXPCConnection, NSString, PDXPCApplicationInfo;

@interface PDXPCService : NSObject <PDXPCServiceExportedInterface> {

	os_unfair_lock_s _lock;
	NSXPCConnection* _connection;
	NSString* _className;
	BOOL _callbacksSuspended;
	int _remoteProcessIdentifier;
	NSString* _remoteProcessApplicationIdentifier;

}

@property (nonatomic,readonly) int remoteProcessIdentifier;                                      //@synthesize remoteProcessIdentifier=_remoteProcessIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * remoteProcessApplicationIdentifier;                    //@synthesize remoteProcessApplicationIdentifier=_remoteProcessApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) PDXPCApplicationInfo * remoteProcessApplicationInfo; 
@property (nonatomic,readonly) NSString * remoteProcessBundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)serviceResumed;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)remoteProcessBundleIdentifier;
-(id)remoteObjectProxy;
-(id)init;
-(void)clearConnectionReference;
-(PDXPCApplicationInfo *)remoteProcessApplicationInfo;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSString *)remoteProcessApplicationIdentifier;
-(int)remoteProcessIdentifier;
-(void)serviceSuspended;
-(id)connection;
@end

