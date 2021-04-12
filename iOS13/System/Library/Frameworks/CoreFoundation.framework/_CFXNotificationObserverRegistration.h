/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

@interface _CFXNotificationObserverRegistration : _CFXNotificationRegistrationContainer {

	void* _observer;

}

@property (readonly) void* observer;              //@synthesize observer=_observer - In the implementation block
+(Class)childClass;
-(void*)key;
-(void*)observer;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
-(id)initWithObserver:(void*)arg1 parent:(id)arg2 ;
-(void)find:(SCD_Struct_CF10*)arg1 ;
-(void)match:(SCD_Struct_CF10*)arg1 ;
-(void)resetObserverAndChildren:(void*)arg1 ;
@end

