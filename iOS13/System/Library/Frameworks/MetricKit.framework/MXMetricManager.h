/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/MXXPCClient.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSArray, NSObject, NSXPCConnection, NSHashTable;

@interface MXMetricManager : NSObject <MXXPCClient> {

	int _metricToken;
	NSArray* _pastPayloads;
	NSObject*<OS_dispatch_queue> _iVarQueue;
	NSObject*<OS_os_log> _managerLogHandle;
	NSXPCConnection* _connection;
	NSHashTable* _subscribers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> iVarQueue;              //@synthesize iVarQueue=_iVarQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> managerLogHandle;               //@synthesize managerLogHandle=_managerLogHandle - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int metricToken;                                     //@synthesize metricToken=_metricToken - In the implementation block
@property (retain) NSArray * pastPayloads;                                        //@synthesize pastPayloads=_pastPayloads - In the implementation block
@property (nonatomic,retain) NSHashTable * subscribers;                           //@synthesize subscribers=_subscribers - In the implementation block
+(id)sharedManager;
+(id)makeLogHandleWithCategory:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)removeSubscriber:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSHashTable *)subscribers;
-(id)_createXPCConnection;
-(void)addSubscriber:(id)arg1 ;
-(void)setSubscribers:(NSHashTable *)arg1 ;
-(void)_checkAndDeliverMetricReports;
-(NSArray *)pastPayloads;
-(void)registrationProcessed;
-(NSObject*<OS_os_log>)managerLogHandle;
-(void)setPastPayloads:(NSArray *)arg1 ;
-(BOOL)_cachedPayloadAvailable;
-(NSObject*<OS_dispatch_queue>)iVarQueue;
-(void)setIVarQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setManagerLogHandle:(NSObject*<OS_os_log>)arg1 ;
-(int)metricToken;
-(void)setMetricToken:(int)arg1 ;
@end

