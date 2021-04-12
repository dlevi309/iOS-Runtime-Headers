/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class _CFXNotificationRegistrationContainer, _CFXNotificationRegistrar;

@interface _CFXNotificationRegistrationBase : NSObject {

	_CFXNotificationRegistrationContainer* _parent;
	os_unfair_lock_s _lock;

}

@property (__weak,readonly) _CFXNotificationRegistrationContainer * parent; 
@property (readonly) _CFXNotificationRegistrar * registrar; 
@property (readonly) void* key; 
+(const SCD_Struct_CF2*)keyCallbacks;
-(id)init;
-(void)dealloc;
-(void)removeFromParent:(unsigned long long)arg1 ;
-(_CFXNotificationRegistrationContainer *)parent;
-(void*)key;
-(id)initWithParent:(id)arg1 ;
-(void)setParent:(_CFXNotificationRegistrationContainer *)arg1 ;
-(_CFXNotificationRegistrar *)registrar;
@end

