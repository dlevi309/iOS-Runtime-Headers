/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(long long)silentModeStatus;
-(void)_assertNotRunningOnAccessQueue;
-(BOOL)_registerRingerSwitchChangedNotifyToken;
-(long long)_silentModeStatusForRingerSwitchChangedNotifyToken:(int)arg1 ;
-(void)_cancelRingerSwitchChangedNotifyToken;
-(void)_updateSilentModeStatusUsingRingerSwitchChangedNotifyToken:(int)arg1 ;
-(void)_setSilentModeStatus:(long long)arg1 ;
@end

