/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/SFProxCardXPCClientInterface.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSString, SFBluetoothPairingSession, SFProxCardSessionClient, SFService, SFSession, CUBluetoothClient, NSObject, SDStatusMonitor;

@interface SFShareAudioService : NSObject <SFProxCardXPCClientInterface> {

	NSString* _guestDeviceAddress;
	NSString* _headphonesAddress;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	SFBluetoothPairingSession* _pairingSession;
	SFProxCardSessionClient* _proxCardSessionClient;
	/*^block*/id _responseHandler;
	SFService* _sfService;
	SFSession* _sfSession;
	CUBluetoothClient* _searchBTClient;
	NSObject*<OS_dispatch_source> _searchTimer;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SDStatusMonitor* _statusMonitor;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SDStatusMonitor * statusMonitor;                         //@synthesize statusMonitor=_statusMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activate;
-(void)xpcPerformAction:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sfServiceStart;
-(void)_handleSessionStarted:(id)arg1 ;
-(SDStatusMonitor *)statusMonitor;
-(void)setStatusMonitor:(SDStatusMonitor *)arg1 ;
-(void)_handleSessionEnded:(id)arg1 error:(id)arg2 ;
-(void)_handleShareAudioRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleShareAudioRequest2:(id)arg1 contact:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleShareAudioResponse:(int)arg1 error:(id)arg2 ;
-(void)_handleShareAudioSearchTimeout;
-(void)_handleShareAudioFoundDevice:(id)arg1 ;
-(void)_handleShareAudioPairingCompleted:(id)arg1 error:(id)arg2 ;
@end

