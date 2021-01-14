/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@protocol ASCServices;
@class ASCPendingPromises;

@interface ASCMetrics : NSObject {

	id<ASCServices> _connection;
	ASCPendingPromises* _pendingProcesses;

}

@property (nonatomic,readonly) id<ASCServices> connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) ASCPendingPromises * pendingProcesses;              //@synthesize pendingProcesses=_pendingProcesses - In the implementation block
+(id)sharedMetrics;
-(id)initWithConnection:(id)arg1 ;
-(id<ASCServices>)connection;
-(void)dealloc;
-(void)daemonConnectionWasLost:(id)arg1 ;
-(id)processViewMetrics:(id)arg1 atInvocationPoint:(id)arg2 withActivity:(id)arg3 ;
-(id)processViewRenderWithPredicate:(id)arg1 ;
-(id)processMetricsData:(id)arg1 withActivity:(id)arg2 ;
-(void)logErrorMessage:(id)arg1 ;
-(ASCPendingPromises *)pendingProcesses;
-(id)processMetricsData:(id)arg1 pageFields:(id)arg2 activity:(id)arg3 ;
-(id)recordCampaignToken:(id)arg1 providerToken:(id)arg2 withLockup:(id)arg3 ;
@end

