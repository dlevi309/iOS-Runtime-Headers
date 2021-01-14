/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPRemoteDisplayXPCClientInterface.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSXPCConnection, NSObject, NSArray;

@interface RPRemoteDisplayDiscovery : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface> {

	BOOL _activateCalled;
	NSMutableDictionary* _discoveredDevices;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	unsigned long long _controlFlags;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;
	unsigned long long _errorFlags;
	/*^block*/id _errorFlagsChangedHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) unsigned long long controlFlags;                         //@synthesize controlFlags=_controlFlags - In the implementation block
@property (nonatomic,copy,readonly) NSArray * discoveredDevices; 
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                   //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
@property (assign,nonatomic) unsigned long long errorFlags;                           //@synthesize errorFlags=_errorFlags - In the implementation block
@property (nonatomic,copy) id errorFlagsChangedHandler;                               //@synthesize errorFlagsChangedHandler=_errorFlagsChangedHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(id)deviceChangedHandler;
-(unsigned long long)controlFlags;
-(id)deviceFoundHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(id)deviceLostHandler;
-(void)_lostAllDevices;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(NSArray *)discoveredDevices;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_ensureXPCStarted;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)description;
-(void)_interrupted;
-(BOOL)shouldReportDevice:(id)arg1 ;
-(void)_invalidated;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setControlFlags:(unsigned long long)arg1 ;
-(id)invalidationHandler;
-(id)interruptionHandler;
-(void)remoteDisplayFoundDevice:(id)arg1 ;
-(void)remoteDisplayLostDevice:(id)arg1 ;
-(void)remoteDisplayChangedDevice:(id)arg1 changes:(unsigned)arg2 ;
-(void)remoteDisplayUpdateErrorFlags:(unsigned long long)arg1 ;
-(unsigned long long)errorFlags;
-(void)setErrorFlags:(unsigned long long)arg1 ;
-(id)errorFlagsChangedHandler;
-(void)setErrorFlagsChangedHandler:(id)arg1 ;
@end

