/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPPeopleXPCClientInterface.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject, NSXPCConnection, NSSet, NSArray;

@interface RPPeopleDiscovery : NSObject <NSSecureCoding, RPPeopleXPCClientInterface> {

	BOOL _activateCalled;
	NSMutableDictionary* _discoveredPeople;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableSet* _rangingPersonIDs;
	NSObject*<OS_dispatch_source> _retryTimer;
	NSXPCConnection* _xpcCnx;
	BOOL _targetUserSession;
	unsigned _changeFlags;
	unsigned _discoveryFlags;
	int _discoveryMode;
	int _peopleDensity;
	unsigned _statusFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _peopleDensityChangedHandler;
	/*^block*/id _personFoundHandler;
	/*^block*/id _personLostHandler;
	/*^block*/id _personChangedHandler;
	NSSet* _rangingPeople;
	/*^block*/id _statusChangedHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) BOOL targetUserSession;                                  //@synthesize targetUserSession=_targetUserSession - In the implementation block
@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (assign,nonatomic) unsigned discoveryFlags;                                 //@synthesize discoveryFlags=_discoveryFlags - In the implementation block
@property (assign,nonatomic) int discoveryMode;                                       //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * discoveredPeople; 
@property (nonatomic,readonly) int peopleDensity;                                     //@synthesize peopleDensity=_peopleDensity - In the implementation block
@property (nonatomic,copy) id peopleDensityChangedHandler;                            //@synthesize peopleDensityChangedHandler=_peopleDensityChangedHandler - In the implementation block
@property (nonatomic,copy) id personFoundHandler;                                     //@synthesize personFoundHandler=_personFoundHandler - In the implementation block
@property (nonatomic,copy) id personLostHandler;                                      //@synthesize personLostHandler=_personLostHandler - In the implementation block
@property (nonatomic,copy) id personChangedHandler;                                   //@synthesize personChangedHandler=_personChangedHandler - In the implementation block
@property (nonatomic,copy) NSSet * rangingPeople;                                     //@synthesize rangingPeople=_rangingPeople - In the implementation block
@property (nonatomic,copy) id statusChangedHandler;                                   //@synthesize statusChangedHandler=_statusChangedHandler - In the implementation block
@property (nonatomic,readonly) unsigned statusFlags;                                  //@synthesize statusFlags=_statusFlags - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setChangeFlags:(unsigned)arg1 ;
-(NSArray *)discoveredPeople;
-(void)xpcPeopleStatusChanged:(unsigned)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(void)_updatePeopleDensity:(unsigned long long)arg1 ;
-(unsigned)changeFlags;
-(void)setStatusChangedHandler:(id)arg1 ;
-(BOOL)targetUserSession;
-(void)_invokeBlockActivateSafe:(/*^block*/id)arg1 ;
-(int)discoveryMode;
-(unsigned)discoveryFlags;
-(void)setDiscoveryFlags:(unsigned)arg1 ;
-(void)setTargetUserSession:(BOOL)arg1 ;
-(void)_lostAllPeople;
-(id)init;
-(void)xpcPersonID:(id)arg1 deviceID:(id)arg2 updatedMeasurement:(id)arg3 ;
-(id)personLostHandler;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSSet *)rangingPeople;
-(id)personFoundHandler;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPersonLostHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)addAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_ensureXPCStarted;
-(unsigned)statusFlags;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)description;
-(void)xpcPersonFound:(id)arg1 ;
-(void)_interrupted;
-(void)xpcPersonLost:(id)arg1 ;
-(int)peopleDensity;
-(void)removeAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidated;
-(void)setPeopleDensityChangedHandler:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)setRangingPeople:(NSSet *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)xpcPersonChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)setPersonFoundHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setDiscoveryMode:(int)arg1 ;
-(id)peopleDensityChangedHandler;
-(id)personChangedHandler;
-(id)interruptionHandler;
-(void)_scheduleRetry;
-(id)statusChangedHandler;
-(void)setPersonChangedHandler:(id)arg1 ;
@end

