/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@class NSMutableDictionary;

@interface RTDarwinNotificationHelper : NSObject {

	NSMutableDictionary* _registrations;

}

@property (nonatomic,retain) NSMutableDictionary * registrations;              //@synthesize registrations=_registrations - In the implementation block
-(NSMutableDictionary *)registrations;
-(id)init;
-(unsigned long long)stateForNotificationName:(id)arg1 ;
-(void)removeObserverForNotificationName:(id)arg1 ;
-(void)_handleDarwinNotificationCallback:(id)arg1 ;
-(void)addObserver:(id)arg1 center:(CFNotificationCenterRef)arg2 key:(id)arg3 callback:(/*function pointer*/void*)arg4 info:(void*)arg5 suspensionBehavior:(long long)arg6 ;
-(void)postNotification:(id)arg1 ;
-(void)addObserverForNotificationName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setRegistrations:(NSMutableDictionary *)arg1 ;
-(void)removeObserver:(id)arg1 center:(CFNotificationCenterRef)arg2 key:(id)arg3 info:(void*)arg4 ;
-(void)dealloc;
@end

