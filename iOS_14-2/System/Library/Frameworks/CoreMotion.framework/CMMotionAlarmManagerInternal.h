/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, NSMutableDictionary;

@interface CMMotionAlarmManagerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSMutableDictionary* fAlarms;
	BOOL fListening;

}
+(id)instance;
-(id)init;
-(void)_teardown;
-(void)_stopListeners;
-(void)_startListeners;
-(void)_handleAlarmFire:(id)arg1 ;
-(BOOL)_registerAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)_unregisterAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)_acknowledgeAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)_launchRemoteAppWithError:(id*)arg1 delegate:(id)arg2 ;
-(void)dealloc;
@end

