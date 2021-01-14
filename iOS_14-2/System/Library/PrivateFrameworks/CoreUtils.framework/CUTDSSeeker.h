/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CUTDSXPCClientInterface.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString, NSMutableSet;

@interface CUTDSSeeker : NSObject <CUTDSXPCClientInterface, NSSecureCoding> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSXPCConnection* _xpcCnx;
	BOOL _directedOnly;
	BOOL _passive;
	int _dataLinkType;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _endpointFoundHandler;
	/*^block*/id _endpointLostHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSString* _serviceType;
	NSString* _xpcServiceName;
	NSMutableSet* _endpoints;
	unsigned long long _tdsHashProvide;
	unsigned long long _tdsHashSeek;

}

@property (nonatomic,retain) NSMutableSet * endpoints;                                //@synthesize endpoints=_endpoints - In the implementation block
@property (assign,nonatomic) unsigned long long tdsHashProvide;                       //@synthesize tdsHashProvide=_tdsHashProvide - In the implementation block
@property (assign,nonatomic) unsigned long long tdsHashSeek;                          //@synthesize tdsHashSeek=_tdsHashSeek - In the implementation block
@property (assign,nonatomic) int dataLinkType;                                        //@synthesize dataLinkType=_dataLinkType - In the implementation block
@property (assign,nonatomic) BOOL directedOnly;                                       //@synthesize directedOnly=_directedOnly - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id endpointFoundHandler;                                   //@synthesize endpointFoundHandler=_endpointFoundHandler - In the implementation block
@property (nonatomic,copy) id endpointLostHandler;                                    //@synthesize endpointLostHandler=_endpointLostHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL passive;                                            //@synthesize passive=_passive - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * xpcServiceName;                                 //@synthesize xpcServiceName=_xpcServiceName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEndpoints:(NSMutableSet *)arg1 ;
-(NSMutableSet *)endpoints;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(BOOL)passive;
-(void)_ensureXPCStarted;
-(NSString *)xpcServiceName;
-(void)setXpcServiceName:(NSString *)arg1 ;
-(void)xpcTDSProviderStateChanged:(unsigned)arg1 ;
-(void)xpcTDSSeekerEndpointFound:(id)arg1 ;
-(void)xpcTDSSeekerEndpointLost:(id)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setEndpointFoundHandler:(id)arg1 ;
-(void)setEndpointLostHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)updateEndpointsForDevices:(id)arg1 ;
-(unsigned long long)tdsHashSeek;
-(unsigned long long)tdsHashProvide;
-(BOOL)directedOnly;
-(int)dataLinkType;
-(void)setDataLinkType:(int)arg1 ;
-(void)setDirectedOnly:(BOOL)arg1 ;
-(void)_activateDirectWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateXPCWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(void)setTdsHashProvide:(unsigned long long)arg1 ;
-(void)setTdsHashSeek:(unsigned long long)arg1 ;
-(void)setPassive:(BOOL)arg1 ;
-(void)_interrupted;
-(id)endpointFoundHandler;
-(id)endpointLostHandler;
-(void)_invalidated;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)serviceType;
-(id)invalidationHandler;
-(NSString *)label;
-(id)interruptionHandler;
-(void)dealloc;
@end

