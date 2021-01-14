/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <Rapport/Rapport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPPrivateDiscoveryXPCClientInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface RPPrivateDiscovery : NSObject <NSSecureCoding, RPPrivateDiscoveryXPCClientInterface> {

	BOOL _activateCalled;
	BOOL _changesPending;
	BOOL _direct;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSXPCConnection* _xpcCnx;
	unsigned _clientID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _endpointFoundHandler;
	/*^block*/id _endpointLostHandler;
	/*^block*/id _endpointChangedHandler;
	/*^block*/id _errorHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSString* _serviceType;

}

@property (assign,nonatomic) unsigned clientID;                                       //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id endpointFoundHandler;                                   //@synthesize endpointFoundHandler=_endpointFoundHandler - In the implementation block
@property (nonatomic,copy) id endpointLostHandler;                                    //@synthesize endpointLostHandler=_endpointLostHandler - In the implementation block
@property (nonatomic,copy) id endpointChangedHandler;                                 //@synthesize endpointChangedHandler=_endpointChangedHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)clientID;
-(void)_updateIfNeededWithBlock:(/*^block*/id)arg1 ;
-(id)errorHandler;
-(void)setClientID:(unsigned)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidateDirect;
-(void)_ensureXPCStarted;
-(void)setServiceType:(NSString *)arg1 ;
-(void)activate;
-(void)setEndpointFoundHandler:(id)arg1 ;
-(void)setEndpointLostHandler:(id)arg1 ;
-(void)setEndpointChangedHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)description;
-(void)_interrupted;
-(id)endpointFoundHandler;
-(id)endpointLostHandler;
-(id)endpointChangedHandler;
-(void)_invalidated;
-(void)_update;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)serviceType;
-(id)invalidationHandler;
-(NSString *)label;
-(id)interruptionHandler;
-(void)dealloc;
-(void)_activateDirect;
-(void)_activateXPC:(BOOL)arg1 ;
-(void)xpcPrivateDiscoveryEndpointFound:(id)arg1 ;
-(void)xpcPrivateDiscoveryEndpointLost:(id)arg1 ;
-(void)xpcPrivateDiscoveryEndpointChanged:(id)arg1 ;
@end

