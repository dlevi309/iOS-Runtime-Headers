/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

@interface _CFXNotificationObjectRegistration : _CFXNotificationRegistrationContainer {

	void* _object;

}

@property (readonly) void* object;              //@synthesize object=_object - In the implementation block
+(Class)childClass;
+(const SCD_Struct_CF2*)stringKeyCallbacks;
-(void*)key;
-(void*)object;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
-(id)initWithObject:(void*)arg1 parent:(id)arg2 ;
-(id)acquireObserver:(void*)arg1 options:(unsigned long long)arg2 ;
-(void)find:(void*)arg1 matching:(SCD_Struct_CF10*)arg2 ;
-(void)match:(void*)arg1 matching:(SCD_Struct_CF10*)arg2 ;
@end

