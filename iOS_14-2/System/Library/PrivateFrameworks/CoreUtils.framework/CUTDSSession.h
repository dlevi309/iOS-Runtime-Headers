/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CUTDSXPCClientInterface.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, CUTDSEndpoint, NSString;

@interface CUTDSSession : NSObject <CUTDSXPCClientInterface, NSSecureCoding> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	CUTDSEndpoint* _endpoint;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSString* _xpcServiceName;
	unsigned long long _tdsHashActivate;

}

@property (assign,nonatomic) unsigned long long tdsHashActivate;                      //@synthesize tdsHashActivate=_tdsHashActivate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) CUTDSEndpoint * endpoint;                                //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * xpcServiceName;                                 //@synthesize xpcServiceName=_xpcServiceName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEndpoint:(CUTDSEndpoint *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CUTDSEndpoint *)endpoint;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_ensureXPCStarted;
-(NSString *)xpcServiceName;
-(void)setXpcServiceName:(NSString *)arg1 ;
-(void)xpcTDSProviderStateChanged:(unsigned)arg1 ;
-(void)xpcTDSSeekerEndpointFound:(id)arg1 ;
-(void)xpcTDSSeekerEndpointLost:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(unsigned long long)tdsHashActivate;
-(void)_activateDirectWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateXPCWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(void)setTdsHashActivate:(unsigned long long)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(id)interruptionHandler;
-(void)dealloc;
@end

