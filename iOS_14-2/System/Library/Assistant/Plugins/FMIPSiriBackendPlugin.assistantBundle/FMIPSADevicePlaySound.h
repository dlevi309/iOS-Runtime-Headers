/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/FMIPSiriBackendPlugin.assistantBundle/FMIPSiriBackendPlugin
*/

#import <SAObjects/SADPDevicePlaySound.h>

@protocol OS_dispatch_queue;
@class _TtC8FMClient7Session, NSObject;

@interface FMIPSADevicePlaySound : SADPDevicePlaySound {

	_TtC8FMClient7Session* _clientSession;
	NSObject*<OS_dispatch_queue> _commandQueue;

}

@property (nonatomic,retain) _TtC8FMClient7Session * clientSession;                  //@synthesize clientSession=_clientSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)commandQueue;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)setCommandQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setClientSession:(_TtC8FMClient7Session *)arg1 ;
-(_TtC8FMClient7Session *)clientSession;
-(void)invalidateClientSession;
-(void)initializePlay;
-(void)performPlaySoundWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)requiredFieldsPresent:(id)arg1 ;
-(id)playbackDevices:(id)arg1 ;
@end

