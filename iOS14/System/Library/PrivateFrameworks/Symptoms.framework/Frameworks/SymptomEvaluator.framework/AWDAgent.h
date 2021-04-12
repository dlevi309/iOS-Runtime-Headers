/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection, NSSet;

@interface AWDAgent : NSObject {

	BOOL _isHelper;
	id dropboxObserver;
	NSObject*<OS_dispatch_queue> _queue;
	AWDServerConnection* _symptomsAWDConnection;
	AWDServerConnection* _libnetcoreAWDConnection;
	AWDServerConnection* _cfnetworkAWDConnection;
	NSSet* _awdSymptomsConfiguredMetricIds;
	NSSet* _awdLibnetcoreConfiguredMetricIds;
	NSSet* _awdCFNetworkConfiguredMetricIds;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (retain) AWDServerConnection * symptomsAWDConnection;                     //@synthesize symptomsAWDConnection=_symptomsAWDConnection - In the implementation block
@property (retain) AWDServerConnection * libnetcoreAWDConnection;                   //@synthesize libnetcoreAWDConnection=_libnetcoreAWDConnection - In the implementation block
@property (retain) AWDServerConnection * cfnetworkAWDConnection;                    //@synthesize cfnetworkAWDConnection=_cfnetworkAWDConnection - In the implementation block
@property (nonatomic,retain) NSSet * awdSymptomsConfiguredMetricIds;                //@synthesize awdSymptomsConfiguredMetricIds=_awdSymptomsConfiguredMetricIds - In the implementation block
@property (nonatomic,retain) NSSet * awdLibnetcoreConfiguredMetricIds;              //@synthesize awdLibnetcoreConfiguredMetricIds=_awdLibnetcoreConfiguredMetricIds - In the implementation block
@property (nonatomic,retain) NSSet * awdCFNetworkConfiguredMetricIds;               //@synthesize awdCFNetworkConfiguredMetricIds=_awdCFNetworkConfiguredMetricIds - In the implementation block
+(id)defaultInstance;
-(void)postMetricForSignificantEvent:(int)arg1 errorContext:(int)arg2 error:(id)arg3 status:(int)arg4 ;
-(id)init;
-(void)postMetric:(id)arg1 withIdentifier:(unsigned)arg2 ;
-(void)_postMetricForSignificantEvent:(int)arg1 orEventName:(id)arg2 errorContext:(int)arg3 error:(id)arg4 status:(int)arg5 ;
-(AWDServerConnection *)cfnetworkAWDConnection;
-(NSSet *)awdSymptomsConfiguredMetricIds;
-(void)setLibnetcoreAWDConnection:(AWDServerConnection *)arg1 ;
-(BOOL)overridePostMetricConfig;
-(NSSet *)awdLibnetcoreConfiguredMetricIds;
-(AWDServerConnection *)libnetcoreAWDConnection;
-(void)setCfnetworkAWDConnection:(AWDServerConnection *)arg1 ;
-(void)postMetric:(id)arg1 withIdentifier:(unsigned)arg2 libnetcore:(BOOL)arg3 ;
-(void)setAwdCFNetworkConfiguredMetricIds:(NSSet *)arg1 ;
-(void)setAwdLibnetcoreConfiguredMetricIds:(NSSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_handleQuery:(unsigned)arg1 ;
-(void)setAwdSymptomsConfiguredMetricIds:(NSSet *)arg1 ;
-(void)bulkPostMetrics:(id)arg1 withIdentifier:(unsigned)arg2 libnetcore:(BOOL)arg3 ;
-(BOOL)shouldSendMetric:(unsigned)arg1 ;
-(void)setSymptomsAWDConnection:(AWDServerConnection *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSSet *)awdCFNetworkConfiguredMetricIds;
-(void)postMetricForSignificantEventWithName:(id)arg1 errorContext:(int)arg2 error:(id)arg3 status:(int)arg4 ;
-(AWDServerConnection *)symptomsAWDConnection;
-(void)dealloc;
@end

