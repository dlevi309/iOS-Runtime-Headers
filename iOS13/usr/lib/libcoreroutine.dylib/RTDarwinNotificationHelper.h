/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@class NSMutableDictionary;

@interface RTDarwinNotificationHelper : NSObject {

	NSMutableDictionary* _registrations;

}

@property (nonatomic,retain) NSMutableDictionary * registrations;              //@synthesize registrations=_registrations - In the implementation block
-(id)init;
-(void)dealloc;
-(void)postNotification:(id)arg1 ;
-(NSMutableDictionary *)registrations;
-(void)setRegistrations:(NSMutableDictionary *)arg1 ;
-(void)removeObserverForNotificationName:(id)arg1 ;
-(void)_handleDarwinNotificationCallback:(id)arg1 ;
-(void)addObserverForNotificationName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)stateForNotificationName:(id)arg1 ;
-(void)addObserver:(id)arg1 center:(CFNotificationCenterRef)arg2 key:(id)arg3 callback:(/*function pointer*/void*)arg4 info:(void*)arg5 suspensionBehavior:(long long)arg6 ;
-(void)removeObserver:(id)arg1 center:(CFNotificationCenterRef)arg2 key:(id)arg3 info:(void*)arg4 ;
@end

