/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/

#import <AppSSOCore/AppSSOCore-Structs.h>
#import <libobjc.A.dylib/SOServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface SOServiceConnection : NSObject <SOServiceProtocol> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSXPCConnection * xpcConnection;                 //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)_doConnectWithOptions:(unsigned long long)arg1 ;
-(void)realmsWithCompletion:(/*^block*/id)arg1 ;
-(void)configurationWithCompletion:(/*^block*/id)arg1 ;
-(void)performAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)debugHintsWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)_connectToService;
-(void)isExtensionProcessWithAuditToken:(SCD_Struct_SO0)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

