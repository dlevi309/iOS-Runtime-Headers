/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

@interface _CFXNotificationNameRegistration : _CFXNotificationRegistrationContainer {

	CFStringRef _name;

}

@property (readonly) CFStringRef name;              //@synthesize name=_name - In the implementation block
+(const SCD_Struct_CF2*)keyCallbacks;
+(Class)childClass;
-(void)dealloc;
-(CFStringRef)name;
-(void*)key;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
-(void)find:(void*)arg1 observer:(void*)arg2 matching:(SCD_Struct_CF10*)arg3 ;
-(void)match:(void*)arg1 observer:(void*)arg2 matching:(SCD_Struct_CF10*)arg3 ;
-(id)initWithName:(CFStringRef)arg1 options:(unsigned long long)arg2 parent:(id)arg3 ;
-(id)acquireObject:(void*)arg1 ;
@end

