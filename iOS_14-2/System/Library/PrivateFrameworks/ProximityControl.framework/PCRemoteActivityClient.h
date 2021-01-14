/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityControl.framework/ProximityControl
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PCActivatable.h>

@protocol OS_dispatch_queue, NSXPCProxyCreating;
@class NSObject;

@interface PCRemoteActivityClient : NSObject <NSSecureCoding, PCActivatable> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _updateHandler;
	id<NSXPCProxyCreating> _xpcCnx;

}

@property (nonatomic,retain) id<NSXPCProxyCreating> xpcCnx;                           //@synthesize xpcCnx=_xpcCnx - In the implementation block
@property (nonatomic,copy) id updateHandler;                                          //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setUpdateHandler:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<NSXPCProxyCreating>)xpcCnx;
-(id)updateHandler;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)interrupted;
-(void)_interrupted;
-(void)_invalidated;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(id)interruptionHandler;
-(void)dealloc;
-(void)setXpcCnx:(id<NSXPCProxyCreating>)arg1 ;
-(void)_xpcEnsureStarted;
-(void)startObservingDeviceWithIdentifier:(id)arg1 ;
-(void)stopObservingDeviceWithIdentifier:(id)arg1 ;
-(void)stopObservingAllDevices;
-(void)_xpcEnsureStopped;
@end

