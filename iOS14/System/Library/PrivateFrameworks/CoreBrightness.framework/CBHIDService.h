/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_os_log;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSObject;

@interface CBHIDService : NSObject {

	NSObject*<OS_os_log> _logHandle;
	IOHIDServiceClientRef _service;
	unsigned long long _registryID;
	IOHIDEventRef _event;
	BOOL _builtIn;

}

@property (readonly) IOHIDServiceClientRef service;              //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long registryID;              //@synthesize registryID=_registryID - In the implementation block
@property (assign) IOHIDEventRef event;                          //@synthesize event=_event - In the implementation block
@property (readonly) BOOL builtIn;                               //@synthesize builtIn=_builtIn - In the implementation block
-(id)copyPropertyForKey:(id)arg1 ;
-(id)init;
-(BOOL)builtIn;
-(IOHIDEventRef)event;
-(void)setEvent:(IOHIDEventRef)arg1 ;
-(unsigned long long)registryID;
-(IOHIDServiceClientRef)service;
-(void)dealloc;
-(BOOL)conformsToHIDService:(IOHIDServiceClientRef)arg1 ;
-(BOOL)updateEventData;
-(id)initWithHIDServiceClient:(IOHIDServiceClientRef)arg1 andIdentifier:(id)arg2 ;
-(BOOL)conformsToUsagePage:(unsigned long long)arg1 andUsage:(unsigned long long)arg2 ;
-(BOOL)setPropertyForKey:(id)arg1 withValue:(id)arg2 ;
@end

