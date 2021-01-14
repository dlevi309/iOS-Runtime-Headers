/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/


@protocol OS_dispatch_queue;
@class AVFlashlight, NSObject, NSHashTable;

@interface SBUIFlashlightController : NSObject {

	AVFlashlight* _flashlight;
	NSObject*<OS_dispatch_queue> _flashlightQueue;
	unsigned long long _level;
	NSHashTable* _observers;
	BOOL _overheated;
	BOOL _available;

}

@property (getter=isAvailable,nonatomic,readonly) BOOL available;                //@synthesize available=_available - In the implementation block
@property (getter=isOverheated,nonatomic,readonly) BOOL overheated;              //@synthesize overheated=_overheated - In the implementation block
@property (assign,nonatomic) unsigned long long level; 
+(id)sharedInstance;
-(void)removeAllObservers;
-(void)_postOverheatedChangeNotification:(BOOL)arg1 ;
-(BOOL)isAvailable;
-(void)addObserver:(id)arg1 ;
-(BOOL)isOverheated;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setFlashlightLevel:(float)arg1 ;
-(void)warmUp;
-(void)coolDown;
-(id)init;
-(unsigned long long)_loadFlashlightLevel;
-(void)turnFlashlightOffForReason:(id)arg1 ;
-(void)_postLevelChangeNotification:(unsigned long long)arg1 ;
-(void)_postAvailabilityChangeNotification:(BOOL)arg1 ;
-(unsigned long long)level;
-(void)_turnPowerOff;
-(void)removeObserver:(id)arg1 ;
-(void)_updateStateWithAvailable:(BOOL)arg1 level:(unsigned long long)arg2 overheated:(BOOL)arg3 ;
-(void)turnFlashlightOnForReason:(id)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(void)_storeFlashlightLevel:(unsigned long long)arg1 ;
-(void)_turnPowerOn;
@end

