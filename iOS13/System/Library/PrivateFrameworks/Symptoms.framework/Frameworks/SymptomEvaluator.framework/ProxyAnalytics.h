/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<ProxyAnalyticsDelegate>)delegate;
-(void)setDelegate:(id<ProxyAnalyticsDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)trainModelAndScore:(BOOL)arg1 lastScoreDate:(id)arg2 ;
-(void)performPersistentStoreHealthCheck;
@end

