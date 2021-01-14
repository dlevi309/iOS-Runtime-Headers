/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <libobjc.A.dylib/LSInstallationServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface _LSInstaller : NSObject <LSInstallationServiceProtocol> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _databaseQueue;

}

@property (assign,nonatomic,__weak) NSXPCConnection * xpcConnection;                  //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> databaseQueue;              //@synthesize databaseQueue=_databaseQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)_doinstallApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 notificationJournaller:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)_douninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(NSXPCConnection *)xpcConnection;
-(BOOL)unregisterBundle:(id)arg1 placeholderOnly:(BOOL)arg2 notification:(int*)arg3 ;
-(id)installPackage:(id)arg1 withIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)uninstallBundle:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(void)sendCallbackDeliveryComplete;
-(BOOL)dispatchRegistration:(id)arg1 ;
-(void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)_postProcessingForApp:(id)arg1 type:(id)arg2 notification:(int)arg3 ;
-(void)_preflightAppDeletion:(id)arg1 ;
-(BOOL)validateEntitlementsForInstall:(BOOL)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)sendCallbackWithDictionary:(id)arg1 ;
-(BOOL)registerBundle:(id)arg1 withOptions:(id)arg2 ;
-(void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)setDatabaseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)databaseQueue;
@end

