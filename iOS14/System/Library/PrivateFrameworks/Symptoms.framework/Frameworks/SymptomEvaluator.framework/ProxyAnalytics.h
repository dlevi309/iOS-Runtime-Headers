/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol ProxyAnalyticsDelegate;
@class NSXPCConnection;

@interface ProxyAnalytics : NSObject {

	id<ProxyAnalyticsDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) id<ProxyAnalyticsDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(id<ProxyAnalyticsDelegate>)delegate;
-(void)setDelegate:(id<ProxyAnalyticsDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
-(void)performAppPeriodicTasks;
-(void)performAppExperiencePeriodicTasks;
-(void)trainModelAndScore:(BOOL)arg1 lastScoreDate:(id)arg2 ;
-(void)performPersistentStoreHealthCheck;
@end

