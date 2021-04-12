/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
*/


@protocol ServiceInterface, OS_dispatch_queue;
@class AnalyticsWorkspace, NSMutableSet, NSXPCConnection, NSObject;

@interface NWNetworkOfInterestManager : NSObject {

	AnalyticsWorkspace* workspace;
	NSMutableSet* registryNOI;
	int notifyToken;
	BOOL closing;
	id _delegate;
	NSXPCConnection* _connection;
	id<ServiceInterface> _service;
	NSObject*<OS_dispatch_queue> _callerQueue;

}

@property (retain) NSXPCConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (retain) id<ServiceInterface> service;                          //@synthesize service=_service - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callerQueue;              //@synthesize callerQueue=_callerQueue - In the implementation block
@property (assign,nonatomic) id delegate;                                 //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id<ServiceInterface>)service;
-(void)destroy;
-(void)setService:(id<ServiceInterface>)arg1 ;
-(BOOL)_connect;
-(void)trackNOIAnyForInterfaceType:(long long)arg1 options:(id)arg2 ;
-(void)auditableLinkQualityForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_queue>)callerQueue;
-(void)haveNOIs:(id)arg1 tornDown:(BOOL)arg2 ;
-(void)updateNOI:(id)arg1 keyPath:(id)arg2 change:(id)arg3 ;
-(void)_unloadState;
-(void)_commonFinalizeRequestFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 isStaged:(BOOL)arg4 ;
-(void)_commonTrackRequestFor:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 options:(id)arg4 isCustom:(id)arg5 ;
-(void)canUseOnAlternateNOI:(id)arg1 appStates:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)trackAllBuiltinNOIsForInterfaceType:(long long)arg1 options:(id)arg2 ;
-(void)trackCustomNOI:(id)arg1 options:(id)arg2 ;
-(void)updatePredictionsForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)instantQualityForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)networkAttachmentInfoForScopedNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)linkThroughputOnNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)estimatedDataTransferTimeOnNOI:(id)arg1 withPayloadInfo:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)foregroundNetworkActivityUnderwayOn:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)canUseOnAlternateNOI:(id)arg1 apps:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)stopTrackingNOIs:(id)arg1 ;
-(BOOL)isClosing;
-(void)errorPredictionsForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dayOfWeekPredictionGroupingForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)trainingProgressForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)trafficInvitesHourlyDistributionForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setCallerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

