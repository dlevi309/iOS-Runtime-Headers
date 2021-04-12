/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, HMFUnfairLock;

@interface HMIThermalMonitor : HMFObject {

	IOHIDEventSystemClientRef _client;
	int _thermalLevelNotificationToken;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	unsigned long long _thermalLevel;
	NSMutableDictionary* _services;
	HMFUnfairLock* _lock;

}

@property (readonly) NSMutableDictionary * services;               //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;               //@synthesize lock=_lock - In the implementation block
@property (readonly) unsigned long long thermalLevel;              //@synthesize thermalLevel=_thermalLevel - In the implementation block
+(id)sharedInstance;
-(NSMutableDictionary *)services;
-(id)init;
-(HMFUnfairLock *)lock;
-(unsigned long long)thermalLevel;
-(void)dealloc;
-(void)_updateThermalLevel;
-(BOOL)readValueFromSensor:(int)arg1 value:(double*)arg2 ;
-(BOOL)readMaxValue:(double*)arg1 ;
@end

