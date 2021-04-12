/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
*/

#import <ButtonResolver/ButtonResolver-Structs.h>
#import <ButtonResolver/BRInterface.h>

@class NSMutableDictionary, NSMutableSet;

@interface BRInterfaceKeyboard : BRInterface {

	IOHIDEventSystemClientRef _client;
	NSMutableDictionary* _propertyCache;
	unsigned long long _doublePressTimeoutUs;
	unsigned long long _triplePressTimeoutUs;
	unsigned long long _longPressTimeoutUs;
	BOOL _isReady;
	unsigned long long _maxAssetSlots;
	unsigned long long _unusedAssetSlots;
	NSMutableSet* _services;

}

@property (nonatomic,readonly) NSMutableSet * services;              //@synthesize services=_services - In the implementation block
+(id)interface;
-(NSMutableSet *)services;
-(BOOL)_enableState:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)_disableState:(unsigned long long)arg1 ;
-(BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_setConfig:(id)arg1 forState:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_servicesSetProperty:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(void)_findServices;
-(id)description;
-(BOOL)isReady;
-(BOOL)setGlobalConfigs:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)maxAssetSlots;
-(unsigned long long)unusedAssetSlots;
-(BOOL)enableStates:(id)arg1 error:(id*)arg2 ;
-(void)scheduleReadyNotificationWithBlock:(/*^block*/id)arg1 ;
-(BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4 ;
-(id)propertyList;
-(BOOL)_setCachedPropertiesOnService:(IOHIDServiceClientRef)arg1 ;
-(void)dealloc;
@end

