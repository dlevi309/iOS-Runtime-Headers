/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/


@protocol OS_dispatch_queue;
#import <ReplayKit/ReplayKit-Structs.h>
@class NSDate, NSObject;

@interface RPAppAudioCaptureManager : NSObject {

	BOOL _resumed;
	/*^block*/id _appAudioOutputHandler;
	NSDate* _lastAudioDate;
	/*^block*/id _appTapDidStartHandler;
	NSObject*<OS_dispatch_queue> _audioDispatchQueue;
	SCD_Struct_RP0* _audioRecorderQueue;
	AudioStreamBasicDescription _audioBasicDescription;

}

@property (assign,nonatomic) SCD_Struct_RP2* audioRecorderQueue;                             //@synthesize audioRecorderQueue=_audioRecorderQueue - In the implementation block
@property (nonatomic,copy) id appAudioOutputHandler;                                         //@synthesize appAudioOutputHandler=_appAudioOutputHandler - In the implementation block
@property (assign,nonatomic) BOOL resumed;                                                   //@synthesize resumed=_resumed - In the implementation block
@property (nonatomic,retain) NSDate * lastAudioDate;                                         //@synthesize lastAudioDate=_lastAudioDate - In the implementation block
@property (nonatomic,copy) id appTapDidStartHandler;                                         //@synthesize appTapDidStartHandler=_appTapDidStartHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> audioDispatchQueue;                //@synthesize audioDispatchQueue=_audioDispatchQueue - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription audioBasicDescription;              //@synthesize audioBasicDescription=_audioBasicDescription - In the implementation block
-(void)stop;
-(BOOL)resumed;
-(void)setResumed:(BOOL)arg1 ;
-(id)initWithAudioStreamBasicDescription:(AudioStreamBasicDescription)arg1 ;
-(void)setAudioDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAudioBasicDescription:(AudioStreamBasicDescription)arg1 ;
-(NSObject*<OS_dispatch_queue>)audioDispatchQueue;
-(void)setAppAudioOutputHandler:(id)arg1 ;
-(void)setAudioRecorderQueue:(SCD_Struct_RP2*)arg1 ;
-(BOOL)handleStartAudioQueueFailed:(int)arg1 didFailHandler:(/*^block*/id)arg2 ;
-(void)setAppTapDidStartHandler:(id)arg1 ;
-(id)appAudioOutputHandler;
-(void)startWithProcessID:(int)arg1 outputHandler:(/*^block*/id)arg2 didStartHandler:(/*^block*/id)arg3 ;
-(void)setLastAudioDate:(NSDate *)arg1 ;
-(void)resumeWithProcessID:(int)arg1 ;
-(NSDate *)lastAudioDate;
-(id)appTapDidStartHandler;
-(AudioStreamBasicDescription)audioBasicDescription;
-(SCD_Struct_RP2*)audioRecorderQueue;
@end

