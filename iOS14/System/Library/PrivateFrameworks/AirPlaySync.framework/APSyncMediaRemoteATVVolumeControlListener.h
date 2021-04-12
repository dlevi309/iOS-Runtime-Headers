/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySync.framework/AirPlaySync
*/


#import <AirPlaySync/AirPlaySync-Structs.h>
@interface APSyncMediaRemoteATVVolumeControlListener : NSObject {

	const void* _callbackContext;
	/*function pointer*/void* _volumeControlTypeDidChange;

}
-(void)dealloc;
-(id)initWithContextAndCallback:(/*function pointer*/void*)arg1 callbackContext:(const void*)arg2 ;
-(void)_volumeControlTypeChanged:(CFDictionaryRef)arg1 ;
@end

