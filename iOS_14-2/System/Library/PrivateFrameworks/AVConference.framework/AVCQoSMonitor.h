/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue, AVCQoSMonitorDelegate;
@class NSObject, AVConferenceXPCClient, NSMutableArray, NSMutableDictionary, NSArray;

@interface AVCQoSMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _stateQueue;
	id<AVCQoSMonitorDelegate> _delegate;
	AVConferenceXPCClient* _connection;
	NSMutableArray* _registeredStreamTokens;
	NSMutableDictionary* _reportingIntervals;

}

@property (assign,nonatomic,__weak) id<AVCQoSMonitorDelegate> delegate; 
@property (nonatomic,readonly) NSArray * streamTokens;                               //@synthesize registeredStreamTokens=_registeredStreamTokens - In the implementation block
-(id<AVCQoSMonitorDelegate>)delegate;
-(void)setDelegate:(id<AVCQoSMonitorDelegate>)arg1 ;
-(void)dealloc;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(void)terminateConnection;
-(BOOL)generateInvalidStreamTokenWithError:(id*)arg1 ;
-(id)initWithStreamToken:(long long)arg1 queue:(id)arg2 error:(id*)arg3 ;
-(void)requestQoSReport;
-(id)registerStreamToken:(long long)arg1 ;
-(long long)reportingIntervalForStreamToken:(long long)arg1 ;
-(NSArray *)streamTokens;
@end

