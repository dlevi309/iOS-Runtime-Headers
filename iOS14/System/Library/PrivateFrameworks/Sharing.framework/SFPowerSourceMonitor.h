/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class CUCoalescer, NSMutableDictionary, NSObject;

@interface SFPowerSourceMonitor : NSObject {

	LogCategory* _ucat;
	BOOL _activateCalled;
	long long _previousSourcesCount;
	unsigned short _powerSourcesUpdateIndex;
	CUCoalescer* _updateCoalescer;
	NSMutableDictionary* _powerSources;
	int _psNotifyTokenAccessoryAttach;
	int _psNotifyTokenAccessoryPowerSource;
	int _psNotifyTokenAccessoryTimeRemaining;
	int _psNotifyTokenAnyPowerSource;
	BOOL _skipCoalescing;
	unsigned _changeFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _powerSourcesFoundHandler;
	/*^block*/id _powerSourcesLostHandler;
	/*^block*/id _powerSourcesChangedHandler;

}

@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL skipCoalescing;                                     //@synthesize skipCoalescing=_skipCoalescing - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesFoundHandler;                               //@synthesize powerSourcesFoundHandler=_powerSourcesFoundHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesLostHandler;                                //@synthesize powerSourcesLostHandler=_powerSourcesLostHandler - In the implementation block
@property (nonatomic,copy) id powerSourcesChangedHandler;                             //@synthesize powerSourcesChangedHandler=_powerSourcesChangedHandler - In the implementation block
-(void)setChangeFlags:(unsigned)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(unsigned)changeFlags;
-(void)_cleanup;
-(id)powerSourcesFoundHandler;
-(void)_handlePowerSourcesFound:(id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPowerSourcesLostHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_handlePowerSourcesLost:(id)arg1 ;
-(BOOL)skipCoalescing;
-(void)setSkipCoalescing:(BOOL)arg1 ;
-(id)powerSourcesLostHandler;
-(void)_updatePowerSourcesWithInfo:(void*)arg1 sources:(CFArrayRef)arg2 sourcesCount:(long long)arg3 ;
-(void)_foundPowerSource:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(id)powerSourcesChangedHandler;
-(void)_updatePowerSources;
-(void)_update;
-(void)invalidate;
-(void)_updatePowerSource:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3 ;
-(void)_removePowerSources:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setPowerSourcesFoundHandler:(id)arg1 ;
-(id)invalidationHandler;
-(BOOL)powerSourcesListWithOutInfo:(const void*)arg1 outSources:(const _CFArray*)arg2 outSourcesCount:(long long*)arg3 ;
-(void)_triggerUpdatePowerSources;
-(void)setPowerSourcesChangedHandler:(id)arg1 ;
-(void)dealloc;
-(void)_handlePowerSourcesChanged:(id)arg1 changes:(unsigned)arg2 ;
@end

