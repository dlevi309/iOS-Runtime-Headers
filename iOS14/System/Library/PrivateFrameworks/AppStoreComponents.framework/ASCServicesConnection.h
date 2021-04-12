/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <libobjc.A.dylib/ASCServices.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface ASCServicesConnection : NSObject <ASCServices> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSXPCConnection* _connectionIfValid;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connectionIfValid;                   //@synthesize connectionIfValid=_connectionIfValid - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)sharedConnection;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)connectionWasInvalidated;
-(NSXPCConnection *)connection;
-(void)connectionWasInterrupted;
-(id)lockupFetcherService;
-(id)offerStateServiceWithDelegate:(id)arg1 ;
-(id)testConnection;
-(id)metricsService;
-(NSXPCConnection *)connectionIfValid;
-(void)setConnectionIfValid:(NSXPCConnection *)arg1 ;
-(id)serviceWithBlock:(/*^block*/id)arg1 ;
@end

