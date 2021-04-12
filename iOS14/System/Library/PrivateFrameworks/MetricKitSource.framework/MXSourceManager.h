/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricKitSource.framework/MetricKitSource
*/

#import <libobjc.A.dylib/MXSourceXPCClient.h>

@protocol OS_os_log;
@class NSObject, NSXPCConnection;

@interface MXSourceManager : NSObject <MXSourceXPCClient> {

	NSObject*<OS_os_log> _sourceManagerLogHandle;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSObject*<OS_os_log> sourceManagerLogHandle;              //@synthesize sourceManagerLogHandle=_sourceManagerLogHandle - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                             //@synthesize connection=_connection - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_createXPCConnection;
-(void)sendDiagnostic:(id)arg1 forDate:(id)arg2 andSourceID:(long long)arg3 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)sendMetrics:(id)arg1 forDate:(id)arg2 andSourceID:(long long)arg3 ;
-(void)simulatePayloadDeliveryForClient:(id)arg1 ;
-(NSObject*<OS_os_log>)sourceManagerLogHandle;
-(void)setSourceManagerLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end

