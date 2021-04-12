/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(float)timestamp;
-(IOHIDEventRef)event;
-(void)setEvent:(IOHIDEventRef)arg1 ;
-(unsigned)eventType;
-(IOHIDServiceClientRef)service;
-(void)setService:(IOHIDServiceClientRef)arg1 ;
-(NSNumber *)serviceRegistryID;
-(id)initWithHIDEvent:(IOHIDEventRef)arg1 andService:(IOHIDServiceClientRef)arg2 ;
-(NSArray *)copyChildren;
-(int)integerValueForKey:(unsigned)arg1 ;
-(float)floatValueForKey:(unsigned)arg1 ;
@end

