/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
*/


#import <MobileInstallation/MobileInstallation-Structs.h>
@class NSXPCConnection;

@interface MIHelperServiceFrameworkClient : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedInstance;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_invalidateObject;
-(BOOL)purgeInstallCoordinationPromiseStagingDirectoryForUUID:(id)arg1 keepStagingDirectory:(BOOL)arg2 error:(id*)arg3 ;
-(id)createWrappedAppForInstalledBundleIdentifier:(id)arg1 inTargetDirectory:(id)arg2 installationInfo:(id)arg3 onBehalfOf:(SCD_Struct_MI1)arg4 error:(id*)arg5 ;
-(id)updateWrappedAppAt:(id)arg1 forInstalledBundleIdentifier:(id)arg2 installationInfo:(id)arg3 onBehalfOf:(SCD_Struct_MI1)arg4 error:(id*)arg5 ;
-(BOOL)removeWrappedAppWithBundleID:(id)arg1 atURL:(id)arg2 error:(id*)arg3 ;
-(id)_sharedConnection;
-(void)dealloc;
@end

