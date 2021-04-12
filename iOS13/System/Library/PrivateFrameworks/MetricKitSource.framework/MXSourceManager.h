/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)_createXPCConnection;
-(void)sendMetrics:(id)arg1 forDate:(id)arg2 andSourceID:(long long)arg3 ;
-(void)simulatePayloadDeliveryForClient:(id)arg1 ;
-(NSObject*<OS_os_log>)sourceManagerLogHandle;
-(void)setSourceManagerLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end

