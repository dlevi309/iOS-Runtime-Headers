/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface TLSilentModeController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	int _ringerSwitchChangedNotifyToken;
	long long _silentModeStatus;

}

@property (readonly) long long silentModeStatus; 
+(id)sharedSilentModeController;
-(id)init;
-(void)_assertNotRunningOnAccessQueue;
-(void)_assertRunningOnAccessQueue;
-(void)dealloc;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(long long)silentModeStatus;
-(BOOL)_registerRingerSwitchChangedNotifyToken;
-(long long)_silentModeStatusForRingerSwitchChangedNotifyToken:(int)arg1 ;
-(void)_cancelRingerSwitchChangedNotifyToken;
-(void)_updateSilentModeStatusUsingRingerSwitchChangedNotifyToken:(int)arg1 ;
-(void)_setSilentModeStatus:(long long)arg1 ;
@end

