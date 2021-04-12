/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(id)initPrivate;
-(void)startDeviceOrientationUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)deviceOrientationBlocking;
-(void)stopDeviceOrientationUpdates;
-(void)deallocPrivate;
-(void)onDeviceOrientation:(const Sample*)arg1 ;
-(void)onMotionPreferencesUpdated;
-(void)stopDeviceOrientationUpdatesPrivate;
-(void)onNotification:(id)arg1 ;
-(void)setDeviceOrientationCallbackModePrivate:(int)arg1 ;
-(void)startDeviceOrientationUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)isDeviceOrientationAvailable;
-(void)signalAndReleaseSemaphoreIfNecessaryPrivate;
-(void)updateAggregateDictionaryPrivate;
-(BOOL)orientationNotificationsDisabled;
-(id)stringForOrientation:(int)arg1 ;
-(BOOL)isDeviceOrientationActive;
@end

