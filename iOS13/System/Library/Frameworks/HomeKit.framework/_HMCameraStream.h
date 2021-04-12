/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/_HMCameraSource.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@class NSUUID, NSNumber, NSString;

@interface _HMCameraStream : _HMCameraSource <HMFMessageReceiver> {

	unsigned long long _audioStreamSetting;
	NSNumber* _audioVolume;

}

@property (assign,nonatomic) unsigned long long audioStreamSetting;                           //@synthesize audioStreamSetting=_audioStreamSetting - In the implementation block
@property (nonatomic,retain) NSNumber * audioVolume;                                          //@synthesize audioVolume=_audioVolume - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(void)dealloc;
-(NSNumber *)audioVolume;
-(void)setAudioVolume:(NSNumber *)arg1 ;
-(void)_updateAudioVolume:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_issueUpdateAudioStreamSettingRequest:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleAudioStreamSettingUpdate:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 error:(id)arg3 ;
-(void)setAudioStreamSetting:(unsigned long long)arg1 ;
-(id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 context:(id)arg3 profileUniqueIdentifier:(id)arg4 aspectRatio:(id)arg5 audioStreamSetting:(unsigned long long)arg6 ;
-(unsigned long long)audioStreamSetting;
-(void)updateAudioVolume:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

