/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

@interface _CFXNotificationTokenRegistration : _CFXNotificationRegistrationBase {

	unsigned long long _token;
	unsigned long long _options;
	/*^block*/id _handler;
	AB _registered;

}

@property (retain) id queue; 
@property (readonly) unsigned long long token;                         //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long options;                       //@synthesize options=_options - In the implementation block
@property (copy,readonly) id handler; 
@property (getter=isRegistered,readonly) BOOL registered; 
@property (readonly) CFStringRef name; 
@property (readonly) void* object; 
@property (readonly) void* observer; 
+(const SCD_Struct_CF2*)keyCallbacks;
+(id)createTokenRegistration:(int)arg1 token:(unsigned long long)arg2 connection:(id)arg3 notifyToken:(int)arg4 options:(unsigned long long)arg5 queue:(id)arg6 handler:(/*^block*/id)arg7 ;
-(void)dealloc;
-(CFStringRef)name;
-(id)initWithToken:(unsigned long long)arg1 options:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)setQueue:(id)arg1 ;
-(void)invalidate;
-(void)removeFromParent:(unsigned long long)arg1 ;
-(void)_invalidate;
-(void*)key;
-(/*^block*/id)copyHandler;
-(BOOL)isRegistered;
-(void)addToObserver:(id)arg1 ;
-(void)_removeFromParent;
-(void*)object;
-(void*)observer;
-(id)queue;
-(id)handler;
-(unsigned long long)token;
-(unsigned long long)options;
@end

