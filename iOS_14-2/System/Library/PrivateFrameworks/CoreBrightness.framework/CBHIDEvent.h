/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_os_log;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSObject, NSNumber, NSArray;

@interface CBHIDEvent : NSObject {

	double _sMachTimebaseFactor;
	NSObject*<OS_os_log> _logHandle;
	IOHIDEventRef _event;
	IOHIDServiceClientRef _service;
	NSNumber* _serviceRegistryID;

}

@property (assign) IOHIDEventRef event;                                   //@synthesize event=_event - In the implementation block
@property (assign) IOHIDServiceClientRef service;                         //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) float timestamp; 
@property (nonatomic,readonly) unsigned eventType; 
@property (nonatomic,readonly) NSArray * copyChildren; 
@property (nonatomic,readonly) NSNumber * serviceRegistryID;              //@synthesize serviceRegistryID=_serviceRegistryID - In the implementation block
+(id)newEvent:(IOHIDEventRef)arg1 andService:(IOHIDServiceClientRef)arg2 ;
-(unsigned)eventType;
-(float)timestamp;
-(int)integerValueForKey:(unsigned)arg1 ;
-(IOHIDEventRef)event;
-(void)setService:(IOHIDServiceClientRef)arg1 ;
-(void)setEvent:(IOHIDEventRef)arg1 ;
-(IOHIDServiceClientRef)service;
-(void)dealloc;
-(NSNumber *)serviceRegistryID;
-(id)initWithHIDEvent:(IOHIDEventRef)arg1 andService:(IOHIDServiceClientRef)arg2 ;
-(NSArray *)copyChildren;
-(float)floatValueForKey:(unsigned)arg1 ;
@end

