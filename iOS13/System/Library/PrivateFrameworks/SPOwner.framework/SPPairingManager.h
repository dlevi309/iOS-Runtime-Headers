/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/


@protocol SPPairingManagerXPCProtocol, OS_dispatch_queue;
@class FMXPCServiceDescription, FMXPCSession, NSObject;

@interface SPPairingManager : NSObject {

	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPPairingManagerXPCProtocol> _proxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;              //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPPairingManagerXPCProtocol> proxy;                     //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(FMXPCSession *)session;
-(void)setSession:(FMXPCSession *)arg1 ;
-(void)setProxy:(id<SPPairingManagerXPCProtocol>)arg1 ;
-(id<SPPairingManagerXPCProtocol>)proxy;
-(FMXPCServiceDescription *)serviceDescription;
-(id)remoteInterface;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(void)getLocalPairingDataWithCompletion:(/*^block*/id)arg1 ;
-(void)setAlwaysBeaconState:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)alwaysBeaconStateWithCompletion:(/*^block*/id)arg1 ;
-(void)currentBeaconingKeyWithCompletion:(/*^block*/id)arg1 ;
-(id)userAgentProxy;
@end

