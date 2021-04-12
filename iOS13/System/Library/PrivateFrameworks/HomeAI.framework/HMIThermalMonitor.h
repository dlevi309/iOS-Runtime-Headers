/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, HMFUnfairLock;

@interface HMIThermalMonitor : HMFObject {

	IOHIDEventSystemClientRef _client;
	NSMutableDictionary* _services;
	HMFUnfairLock* _lock;

}

@property (readonly) NSMutableDictionary * services;              //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;              //@synthesize lock=_lock - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(HMFUnfairLock *)lock;
-(NSMutableDictionary *)services;
-(BOOL)readValueFromSensor:(int)arg1 value:(double*)arg2 ;
-(BOOL)readMaxValue:(double*)arg1 ;
@end

