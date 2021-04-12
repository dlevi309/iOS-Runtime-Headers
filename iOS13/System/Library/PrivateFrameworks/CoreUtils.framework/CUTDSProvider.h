/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CUTDSXPCClientInterface.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface CUTDSProvider : NSObject <CUTDSXPCClientInterface, NSSecureCoding> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSXPCConnection* _xpcCnx;
	BOOL _directedOnly;
	BOOL _triggered;
	int _dataLinkType;
	unsigned _state;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSString* _serviceType;
	/*^block*/id _stateChangedHandler;
	NSString* _xpcServiceName;
	unsigned long long _tdsHashActivate;
	unsigned long long _tdsHashProvide;
	unsigned long long _tdsHashSeek;

}

@property (assign,nonatomic) unsigned long long tdsHashActivate;                      //@synthesize tdsHashActivate=_tdsHashActivate - In the implementation block
@property (assign,nonatomic) unsigned long long tdsHashProvide;                       //@synthesize tdsHashProvide=_tdsHashProvide - In the implementation block
@property (assign,nonatomic) unsigned long long tdsHashSeek;                          //@synthesize tdsHashSeek=_tdsHashSeek - In the implementation block
@property (assign,nonatomic) int dataLinkType;                                        //@synthesize dataLinkType=_dataLinkType - In the implementation block
@property (assign,nonatomic) BOOL directedOnly;                                       //@synthesize directedOnly=_directedOnly - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) unsigned state;                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id stateChangedHandler;                                    //@synthesize stateChangedHandler=_stateChangedHandler - In the implementation block
@property (nonatomic,readonly) BOOL triggered;                                        //@synthesize triggered=_triggered - In the implementation block
@property (nonatomic,copy) NSString * xpcServiceName;                                 //@synthesize xpcServiceName=_xpcServiceName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(unsigned)state;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)serviceType;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(BOOL)triggered;
-(void)setServiceType:(NSString *)arg1 ;
-(id)stateChangedHandler;
-(void)setStateChangedHandler:(id)arg1 ;
-(void)_ensureXPCStarted;
-(NSString *)xpcServiceName;
-(void)setXpcServiceName:(NSString *)arg1 ;
-(void)xpcTDSProviderStateChanged:(unsigned)arg1 ;
-(void)xpcTDSSeekerEndpointFound:(id)arg1 ;
-(void)xpcTDSSeekerEndpointLost:(id)arg1 ;
-(BOOL)updateForDevices:(id)arg1 ;
-(void)updateDeviceActivateHash:(const char*)arg1 ;
-(unsigned long long)tdsHashActivate;
-(unsigned long long)tdsHashSeek;
-(unsigned long long)tdsHashProvide;
-(BOOL)directedOnly;
-(int)dataLinkType;
-(void)setDataLinkType:(int)arg1 ;
-(void)_activateDirectWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateXPCWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(void)setDirectedOnly:(BOOL)arg1 ;
-(void)setTdsHashActivate:(unsigned long long)arg1 ;
-(void)setTdsHashProvide:(unsigned long long)arg1 ;
-(void)setTdsHashSeek:(unsigned long long)arg1 ;
@end

