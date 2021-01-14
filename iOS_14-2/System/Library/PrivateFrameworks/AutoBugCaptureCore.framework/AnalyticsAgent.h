/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection, NSSet;

@interface AnalyticsAgent : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AWDServerConnection* _symptomsAWDConnection;
	NSSet* _awdSymptomsConfiguredMetricIds;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (retain) AWDServerConnection * symptomsAWDConnection;                   //@synthesize symptomsAWDConnection=_symptomsAWDConnection - In the implementation block
@property (nonatomic,retain) NSSet * awdSymptomsConfiguredMetricIds;              //@synthesize awdSymptomsConfiguredMetricIds=_awdSymptomsConfiguredMetricIds - In the implementation block
+(id)sharedInstance;
+(int)awdHandledResult:(short)arg1 ;
+(int)awdDampeningType:(short)arg1 ;
+(void)updateAWDReport:(id)arg1 withEvents:(id)arg2 ;
+(id)_awdSymptomsDiagnosticNotificationTokenMetricForTokenString:(id)arg1 ;
+(id)_awdSymptomsDiagnosticIncidentReportMetricForDiagnosticCase:(id)arg1 ;
+(id)_awdSignificantOperationalEventMetricForSignificantEvent:(int)arg1 orEventName:(id)arg2 errorContext:(int)arg3 error:(id)arg4 status:(int)arg5 ;
-(void)postMetricForSignificantEvent:(int)arg1 errorContext:(int)arg2 error:(id)arg3 status:(int)arg4 ;
-(NSSet *)awdSymptomsConfiguredMetricIds;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_handleQuery:(unsigned)arg1 ;
-(void)setAwdSymptomsConfiguredMetricIds:(NSSet *)arg1 ;
-(void)setSymptomsAWDConnection:(AWDServerConnection *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)postMetricForSignificantEventWithName:(id)arg1 errorContext:(int)arg2 error:(id)arg3 status:(int)arg4 ;
-(AWDServerConnection *)symptomsAWDConnection;
-(void)postDiagnosticIncidentReportForCase:(id)arg1 ;
-(void)_registerAWDQueriableMetric:(unsigned)arg1 ;
-(id)initWithSymptomsAWDConnection:(id)arg1 queue:(id)arg2 ;
-(void)_postMetric:(id)arg1 metricIdentifier:(unsigned)arg2 ;
-(void)apnsPostNotificationToken:(id)arg1 ;
-(void)postMetric:(id)arg1 metricIdentifier:(unsigned)arg2 ;
-(void)apnsPostTokenConversionError;
-(void)apnsPostAPNSNotEnabled;
-(void)apnsPostTokenNotSet;
-(void)apnsPostTokenEmpty;
@end

