/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(unsigned long long)registryID;
-(IOHIDEventRef)event;
-(void)setEvent:(IOHIDEventRef)arg1 ;
-(IOHIDServiceClientRef)service;
-(BOOL)builtIn;
-(id)copyPropertyForKey:(id)arg1 ;
-(BOOL)conformsToHIDService:(IOHIDServiceClientRef)arg1 ;
-(BOOL)updateEventData;
-(id)initWithHIDServiceClient:(IOHIDServiceClientRef)arg1 andIdentifier:(id)arg2 ;
-(BOOL)conformsToUsagePage:(unsigned long long)arg1 andUsage:(unsigned long long)arg2 ;
-(BOOL)setPropertyForKey:(id)arg1 withValue:(id)arg2 ;
@end

