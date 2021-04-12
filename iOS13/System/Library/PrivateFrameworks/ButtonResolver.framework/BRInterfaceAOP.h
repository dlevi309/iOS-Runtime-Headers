/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
*/

#import <ButtonResolver/ButtonResolver-Structs.h>
#import <ButtonResolver/BRInterface.h>

@class NSString, HAButtonHapticsLoader, NSMutableIndexSet, NSMutableArray, NSMutableDictionary;

@interface BRInterfaceAOP : BRInterface {

	IONotificationPortRef _notificationPort;
	unsigned _arrivalNotification;
	/*^block*/id _notificationBlock;
	NSString* _notificationName;
	HAButtonHapticsLoader* _loader;
	NSMutableIndexSet* _freeSlots;
	NSMutableArray* _slotArray;
	NSMutableDictionary* _stateDict;
	BOOL _isReady;
	BOOL _fastHaptics;
	unsigned _service;
	unsigned _connect;
	unsigned long long _maxAssetSlots;

}

@property (assign,nonatomic) unsigned service;                //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned connect;                //@synthesize connect=_connect - In the implementation block
@property (nonatomic,readonly) BOOL fastHaptics;              //@synthesize fastHaptics=_fastHaptics - In the implementation block
+(id)interface;
+(int)_convertForceFeel:(unsigned long long)arg1 ;
+(int)_convertClickState:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)propertyList;
-(BOOL)isReady;
-(unsigned)service;
-(unsigned)connect;
-(void)setService:(unsigned)arg1 ;
-(void)setConnect:(unsigned)arg1 ;
-(unsigned long long)maxAssetSlots;
-(unsigned long long)unusedAssetSlots;
-(BOOL)setGlobalConfigs:(id)arg1 error:(id*)arg2 ;
-(BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4 ;
-(BOOL)enableStates:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)playState:(unsigned long long)arg1 forSpeed:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)scheduleReadyNotificationWithBlock:(/*^block*/id)arg1 ;
-(id)initWithFastHaptics:(BOOL)arg1 ;
-(void)_receiveLoaderAvailableNotification:(id)arg1 ;
-(BOOL)_setGlobalAOPConfigsFromBRFConfigs:(id)arg1 ;
-(id)dataForSlot:(id)arg1 fromArray:(id)arg2 ;
-(BOOL)_setStateAOPConfigsFromStateData:(id)arg1 andSlotData:(id)arg2 ;
-(void)mergeStateChanges:(id)arg1 into:(id)arg2 ;
-(void)_findService;
-(BOOL)_setDefaultAOPConfigs;
-(BOOL)updateReadyState;
-(BOOL)_serviceSetProperty:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(BOOL)fastHaptics;
@end

