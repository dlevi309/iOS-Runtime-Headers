/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMDeviceOrientationManager : NSObject {

	id _internal;

}
+(void)initialize;
+(BOOL)isAvailable;
+(void)dummySelector:(id)arg1 ;
+(BOOL)isAlwaysOn;
-(id)initPrivate;
-(id)init;
-(id)deviceOrientationBlocking;
-(void)start;
-(void)signalAndReleaseSemaphoreIfNecessaryPrivate;
-(void)stop;
-(void)stopDeviceOrientationUpdates;
-(BOOL)isDeviceOrientationActive;
-(BOOL)isDeviceOrientationAvailable;
-(BOOL)orientationNotificationsDisabled;
-(void)setDeviceOrientationCallbackModePrivate:(int)arg1 ;
-(void)updateAggregateDictionaryPrivate;
-(void)onNotification:(id)arg1 ;
-(void)startDeviceOrientationUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startDeviceOrientationUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)stringForOrientation:(int)arg1 ;
-(void)deallocPrivate;
-(void)onDeviceOrientation:(const Sample*)arg1 ;
-(void)stopDeviceOrientationUpdatesPrivate;
-(void)onMotionPreferencesUpdated;
-(void)dealloc;
@end

