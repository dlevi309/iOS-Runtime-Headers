/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/TRIXPCInternalServiceProtocol.h>

@protocol TRITaskQueuing, TRITrialInternalEntitled;
@class TRIServerContext;

@interface TRIInternalServiceRequestHandler : NSObject <TRIXPCInternalServiceProtocol> {

	TRIServerContext* _serverContext;
	id<TRITaskQueuing> _taskQueue;
	id<TRITrialInternalEntitled> _entitlementWitness;

}
-(void)taskRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)experimentRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)experimentNotificationsWithExperimentId:(id)arg1 cloudKitContainer:(int)arg2 teamId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)submitTask:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)lastFetchDateForContainer:(int)arg1 teamId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setLastFetchDate:(id)arg1 forContainer:(int)arg2 teamId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 defaultsFileURL:(id)arg3 teamId:(id)arg4 appContainerId:(id)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 completion:(/*^block*/id)arg8 ;
-(void)deregisterNamespaceWithNamespaceName:(id)arg1 teamId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startDownloadNamespaceWithName:(id)arg1 teamId:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dynamicNamespaceRecordsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithServerContext:(id)arg1 taskQueue:(id)arg2 entitlementWitness:(id)arg3 ;
@end

