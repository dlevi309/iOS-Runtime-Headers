/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/MTIDSecretStore.h>

@class NSXPCConnection, NSString;

@interface MTIDXPCSecretStore : NSObject <MTIDSecretStore> {

	NSXPCConnection* _xpcConnection;
	double _scheduledReleaseTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)xpcConnection;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_setupXPCConnection;
-(id)debugInfo;
-(id)secretForScheme:(id)arg1 options:(id)arg2 ;
-(void)clearLocalData;
-(void)_releaseXPCConnection;
-(void)_extendXPCConnectionLife;
@end

