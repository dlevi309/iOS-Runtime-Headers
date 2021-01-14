/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_connect;
-(void)stopTrackingNOIs:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)foregroundNetworkActivityUnderwayOn:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dayOfWeekPredictionGroupingForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)trackCustomNOI:(id)arg1 options:(id)arg2 ;
-(void)destroy;
-(void)updatePredictionsForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)instantQualityForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)trafficInvitesHourlyDistributionForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)callerQueue;
-(void)_commonFinalizeRequestFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 isStaged:(BOOL)arg4 ;
-(void)haveNOIs:(id)arg1 tornDown:(BOOL)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)errorPredictionsForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)updateNOI:(id)arg1 keyPath:(id)arg2 change:(id)arg3 ;
-(void)networkAttachmentInfoForScopedNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSXPCConnection *)connection;
-(void)setCallerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)canUseOnAlternateNOI:(id)arg1 apps:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setService:(id<ServiceInterface>)arg1 ;
-(BOOL)isClosing;
-(void)_commonTrackRequestFor:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 options:(id)arg4 isCustom:(id)arg5 ;
-(void)_unloadState;
-(void)estimatedDataTransferTimeOnNOI:(id)arg1 withPayloadInfo:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)trainingProgressForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)auditableLinkQualityForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)canUseOnAlternateNOI:(id)arg1 appStates:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)linkThroughputOnNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setQueue:(id)arg1 ;
-(void)interfaceTimelineForNOI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)trackNOIAnyForInterfaceType:(long long)arg1 options:(id)arg2 ;
-(void)trackAllBuiltinNOIsForInterfaceType:(long long)arg1 options:(id)arg2 ;
-(id<ServiceInterface>)service;
-(void)dealloc;
@end

