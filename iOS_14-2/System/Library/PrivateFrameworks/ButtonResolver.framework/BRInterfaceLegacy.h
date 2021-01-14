/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
*/

#import <ButtonResolver/ButtonResolver-Structs.h>
#import <ButtonResolver/BRInterface.h>

@class NSMutableArray;

@interface BRInterfaceLegacy : BRInterface {

	BOOL _isReady;
	IOHIDEventSystemClientRef _client;
	NSMutableArray* _services;
	/*^block*/id _block;
	unsigned long long _doublePressTimeoutUs;
	unsigned long long _triplePressTimeoutUs;
	unsigned long long _doubleTapTimeoutUs;
	unsigned long long _tripleTapTimeoutUs;
	unsigned long long _longPressTimeoutUs;
	BOOL _tapOnly;
	unsigned long long _maxAssetSlots;
	unsigned long long _unusedAssetSlots;

}

@property (assign,nonatomic) BOOL tapOnly;              //@synthesize tapOnly=_tapOnly - In the implementation block
+(id)interface;
+(BOOL)_isTapState:(unsigned long long)arg1 ;
-(BOOL)_enableState:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)_disableState:(unsigned long long)arg1 ;
-(BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_setConfig:(id)arg1 forState:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setTapOnly:(BOOL)arg1 ;
-(BOOL)_servicesSetProperty:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(BOOL)tapOnly;
-(void)_findServices;
-(id)description;
-(BOOL)isReady;
-(BOOL)setGlobalConfigs:(id)arg1 error:(id*)arg2 ;
-(void)serviceAddedHandler:(IOHIDServiceClientRef)arg1 ;
-(unsigned long long)maxAssetSlots;
-(unsigned long long)unusedAssetSlots;
-(BOOL)enableStates:(id)arg1 error:(id*)arg2 ;
-(void)scheduleReadyNotificationWithBlock:(/*^block*/id)arg1 ;
-(BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4 ;
-(id)propertyList;
-(BOOL)_setDefaultServicePropertiesOnService:(IOHIDServiceClientRef)arg1 ;
-(void)dealloc;
@end

