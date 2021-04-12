/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CUPowerSourceMonitor : NSObject {

	BOOL _activateCalled;
	NSMutableDictionary* _aggregateSources;
	NSMutableDictionary* _pendingAggregates;
	NSMutableDictionary* _powerSources;
	int _psNotifyTokenAccessoryAttach;
	int _psNotifyTokenAccessoryPowerSource;
	int _psNotifyTokenAccessoryTimeRemaining;
	int _psNotifyTokenAnyPowerSource;
	unsigned _changeFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _powerSourceFoundHandler;
	/*^block*/id _powerSourceLostHandler;
	/*^block*/id _powerSourceChangedHandler;

}

@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id powerSourceFoundHandler;                                //@synthesize powerSourceFoundHandler=_powerSourceFoundHandler - In the implementation block
@property (nonatomic,copy) id powerSourceLostHandler;                                 //@synthesize powerSourceLostHandler=_powerSourceLostHandler - In the implementation block
@property (nonatomic,copy) id powerSourceChangedHandler;                              //@synthesize powerSourceChangedHandler=_powerSourceChangedHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_update;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanup;
-(void)setChangeFlags:(unsigned)arg1 ;
-(unsigned)changeFlags;
-(void)_aggregatePowerSourceFound:(id)arg1 ;
-(void)_aggregatePowerSourceLost:(id)arg1 ;
-(void)_aggregatePowerSourceUpdate:(id)arg1 changes:(unsigned)arg2 ;
-(void)_updatePowerSources;
-(void)_handlePowerSourceFound:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(void)_handlePowerSourceLost:(id)arg1 sourceID:(id)arg2 ;
-(void)_handlePowerSourceUpdate:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(id)powerSourceFoundHandler;
-(void)setPowerSourceFoundHandler:(id)arg1 ;
-(id)powerSourceLostHandler;
-(void)setPowerSourceLostHandler:(id)arg1 ;
-(id)powerSourceChangedHandler;
-(void)setPowerSourceChangedHandler:(id)arg1 ;
@end

