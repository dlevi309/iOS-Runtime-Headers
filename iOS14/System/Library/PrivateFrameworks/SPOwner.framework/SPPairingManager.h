/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProxy:(id<SPPairingManagerXPCProtocol>)arg1 ;
-(id)userAgentProxy;
-(id<SPPairingManagerXPCProtocol>)proxy;
-(id)init;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(FMXPCServiceDescription *)serviceDescription;
-(void)alwaysBeaconStateWithCompletion:(/*^block*/id)arg1 ;
-(void)setAlwaysBeaconState:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)remoteInterface;
-(FMXPCSession *)session;
-(void)currentBeaconingKeyWithCompletion:(/*^block*/id)arg1 ;
-(void)setSession:(FMXPCSession *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)getLocalPairingDataWithCompletion:(/*^block*/id)arg1 ;
@end

