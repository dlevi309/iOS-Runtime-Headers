/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/MXXPCClient.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSArray, NSObject, NSXPCConnection, NSHashTable;

@interface MXMetricManager : NSObject <MXXPCClient> {

	int _metricToken;
	NSArray* _pastPayloads;
	NSArray* _pastDiagnosticPayloads;
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
@property (retain) NSArray * pastDiagnosticPayloads;                              //@synthesize pastDiagnosticPayloads=_pastDiagnosticPayloads - In the implementation block
@property (nonatomic,retain) NSHashTable * subscribers;                           //@synthesize subscribers=_subscribers - In the implementation block
+(id)sharedManager;
+(id)makeLogHandleWithCategory:(id)arg1 ;
-(id)init;
-(NSHashTable *)subscribers;
-(id)_createXPCConnection;
-(void)addSubscriber:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)removeSubscriber:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
-(void)setSubscribers:(NSHashTable *)arg1 ;
-(void)_checkAndDeliverMetricReports;
-(void)_checkAndDeliverDiagnosticReports;
-(NSArray *)pastPayloads;
-(NSArray *)pastDiagnosticPayloads;
-(void)registrationProcessed;
-(NSObject*<OS_os_log>)managerLogHandle;
-(void)setPastPayloads:(NSArray *)arg1 ;
-(void)setPastDiagnosticPayloads:(NSArray *)arg1 ;
-(BOOL)_cachedPayloadAvailable;
-(NSObject*<OS_dispatch_queue>)iVarQueue;
-(void)setIVarQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setManagerLogHandle:(NSObject*<OS_os_log>)arg1 ;
-(int)metricToken;
-(void)setMetricToken:(int)arg1 ;
@end

