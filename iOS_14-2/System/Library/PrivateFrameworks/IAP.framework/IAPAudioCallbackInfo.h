/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/IAP
*/


#import <IAP/IAP-Structs.h>
@class CPDistributedNotificationCenter, NSLock;

@interface IAPAudioCallbackInfo : NSObject {

	/*function pointer*/void* _deviceStateChangedCallback;
	void* _deviceStateChangedContext;
	/*function pointer*/void* _volumeChangedCallback;
	void* _volumeChangedContext;
	/*function pointer*/void* _pauseOnHeadphoneDisconnectChangedCallback;
	void* _pauseOnHeadphoneDisconnectChangedContext;
	/*function pointer*/void* _volumeControlSupportChangedCallback;
	void* _volumeControlSupportChangedContext;
	CPDistributedNotificationCenter* _dnCenter;
	CPDistributedNotificationCenter* _dnCenteriAP2;
	CFRunLoopRef _dnCenterRunLoop;
	NSLock* _lock;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_handleiAPDaemonDied:(id)arg1 ;
-(void)startNotificationCenterOnRunLoop:(CFRunLoopRef)arg1 ;
-(void)_deviceStateChanged:(id)arg1 ;
-(void)_volumeChanged:(id)arg1 ;
-(void)_pauseOnHeadphoneDisconnectChanged:(id)arg1 ;
-(void)_volumeControlSupportChanged:(id)arg1 ;
-(void)setupDeviceStateChangedCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 andRunLoop:(CFRunLoopRef)arg3 ;
-(void)clearDeviceStateChangedCallback;
-(void)setupVolumeChangedCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 andRunLoop:(CFRunLoopRef)arg3 ;
-(void)clearVolumeChangedCallback;
-(void)setupPauseOnHeadphoneDisconnectChangedCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 andRunLoop:(CFRunLoopRef)arg3 ;
-(void)clearPauseOnHeadphoneDisconnectChangedCallback;
-(void)setupVolumeControlSupportChangedCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 andRunLoop:(CFRunLoopRef)arg3 ;
-(void)clearVolumeControlSupportChangedCallback;
@end

