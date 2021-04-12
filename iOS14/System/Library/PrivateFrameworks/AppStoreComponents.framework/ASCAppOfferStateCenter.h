/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <libobjc.A.dylib/ASCAppOfferStateDelegate.h>

@protocol ASCServices;
@class ASCWorkspace, NSMapTable, ASCJitterBackoff, ASCPendingPromises, AMSPromise, NSString;

@interface ASCAppOfferStateCenter : NSObject <ASCAppOfferStateDelegate> {

	id<ASCServices> _connection;
	ASCWorkspace* _workspace;
	NSMapTable* _stateMachines;
	ASCJitterBackoff* _reconnectBackoff;
	ASCPendingPromises* _pendingActionPromises;
	AMSPromise* _service;

}

@property (nonatomic,readonly) id<ASCServices> connection;                              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) ASCWorkspace * workspace;                                //@synthesize workspace=_workspace - In the implementation block
@property (nonatomic,readonly) NSMapTable * stateMachines;                              //@synthesize stateMachines=_stateMachines - In the implementation block
@property (nonatomic,readonly) ASCJitterBackoff * reconnectBackoff;                     //@synthesize reconnectBackoff=_reconnectBackoff - In the implementation block
@property (nonatomic,readonly) ASCPendingPromises * pendingActionPromises;              //@synthesize pendingActionPromises=_pendingActionPromises - In the implementation block
@property (nonatomic,retain) AMSPromise * service;                                      //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)sharedCenter;
-(ASCWorkspace *)workspace;
-(NSString *)description;
-(id<ASCServices>)connection;
-(void)setService:(AMSPromise *)arg1 ;
-(AMSPromise *)service;
-(void)dealloc;
-(void)connectToService;
-(void)daemonConnectionWasLost:(id)arg1 ;
-(void)daemonDidRebootstrap:(id)arg1 ;
-(void)stopObservingStateForOffer:(id)arg1 ;
-(id)performActionOfOffer:(id)arg1 withActivity:(id)arg2 ;
-(id)reinstallWatchAppWithID:(id)arg1 ;
-(id)reinstallWatchSystemAppWithBundleID:(id)arg1 ;
-(id)stateMachineForOffer:(id)arg1 ;
-(void)offer:(id)arg1 didChangeState:(id)arg2 withMetadata:(id)arg3 flags:(long long)arg4 ;
-(void)offer:(id)arg1 didChangeStatusText:(id)arg2 ;
-(id)initWithConnection:(id)arg1 workspace:(id)arg2 ;
-(NSMapTable *)stateMachines;
-(ASCJitterBackoff *)reconnectBackoff;
-(void)tryReconnect;
-(void)useOfferStateMachineFallback;
-(ASCPendingPromises *)pendingActionPromises;
-(void)scheduleTryReconnect;
-(id)performActionOfOffer:(id)arg1 withActivity:(id)arg2 usingService:(id)arg3 ;
-(id)performFallbackActionForOffer:(id)arg1 ;
@end

