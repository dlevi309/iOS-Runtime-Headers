/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/


@protocol OS_dispatch_queue;
#import <ReplayKit/ReplayKit-Structs.h>
@class NSObject, NSDate;

@interface RPAppAudioCaptureManager : NSObject {

	NSObject*<OS_dispatch_queue> _audioDispatchQueue;
	/*^block*/id _appAudioOutputHandler;
	/*^block*/id _appTapDidStartHandler;
	SCD_Struct_RP0* _audioRecorderQueue;
	BOOL _resumed;
	NSDate* _lastAudioDate;
	AudioStreamBasicDescription _audioBasicDescription;
	SCD_Struct_RP2 _lastAudioPresentationTime;

}
+(AudioStreamBasicDescription)audioStreamBasicDescriptionWithStereo:(BOOL)arg1 ;
-(id)init;
-(void)stop;
-(BOOL)handleStartAudioQueueFailed:(int)arg1 didFailHandler:(/*^block*/id)arg2 ;
-(void)startWithProcessID:(int)arg1 outputHandler:(/*^block*/id)arg2 didStartHandler:(/*^block*/id)arg3 ;
-(void)resumeWithProcessID:(int)arg1 ;
@end

