/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <Rapport/Rapport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPCompanionLinkXPCClientInterface.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSXPCConnection, NSString, NSArray;

@interface RPDiscovery : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface> {

	BOOL _activateCalled;
	NSMutableDictionary* _endpointMap;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_source> _retryTimer;
	LogCategory* _ucat;
	NSXPCConnection* _xpcCnx;
	BOOL _targetUserSession;
	unsigned _changeFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	unsigned long long _controlFlags;
	/*^block*/id _foundHandler;
	/*^block*/id _lostHandler;
	/*^block*/id _changedHandler;
	NSString* _serviceType;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL targetUserSession;                                  //@synthesize targetUserSession=_targetUserSession - In the implementation block
@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (assign,nonatomic) unsigned long long controlFlags;                         //@synthesize controlFlags=_controlFlags - In the implementation block
@property (copy,readonly) NSArray * discoveredEndpoints; 
@property (nonatomic,copy) id foundHandler;                                           //@synthesize foundHandler=_foundHandler - In the implementation block
@property (nonatomic,copy) id lostHandler;                                            //@synthesize lostHandler=_lostHandler - In the implementation block
@property (nonatomic,copy) id changedHandler;                                         //@synthesize changedHandler=_changedHandler - In the implementation block
@property (nonatomic,retain) NSString * serviceType;                                  //@synthesize serviceType=_serviceType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)serviceType;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)controlFlags;
-(void)setControlFlags:(unsigned long long)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(NSArray *)discoveredEndpoints;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setChangeFlags:(unsigned)arg1 ;
-(unsigned)changeFlags;
-(id)descriptionWithLevel:(int)arg1 ;
-(BOOL)_ensureXPCStarted;
-(void)_lostAllEndpoints;
-(BOOL)targetUserSession;
-(void)setTargetUserSession:(BOOL)arg1 ;
-(id)changedHandler;
-(void)setChangedHandler:(id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(void)xpcDiscoveryFoundEndpoint:(id)arg1 ;
-(void)xpcDiscoveryLostEndpoint:(id)arg1 ;
-(void)xpcDiscoveryChangedEndpoint:(id)arg1 ;
-(void)_scheduleRetry;
-(id)foundHandler;
-(void)setFoundHandler:(id)arg1 ;
-(id)lostHandler;
-(void)setLostHandler:(id)arg1 ;
@end

