/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
*/


#import <AudioServerApplication/AudioServerApplication-Structs.h>
@class NSArray, NSString, ASAAudioDevice;

@interface ASAPlaythrough : NSObject {

	/*function pointer*/void* _procID;
	SCD_Struct_AS0* _ioContext;
	NSArray* _channelMapping;
	unsigned _aggregateID;
	NSString* _aggregateUID;
	BOOL _playing;
	ASAAudioDevice* _audioDevice;

}

@property (retain) ASAAudioDevice * audioDevice;              //@synthesize audioDevice=_audioDevice - In the implementation block
@property (assign) BOOL playing;                              //@synthesize playing=_playing - In the implementation block
-(BOOL)start;
-(void)setPlaying:(BOOL)arg1 ;
-(BOOL)stop;
-(ASAAudioDevice *)audioDevice;
-(BOOL)playing;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 usingChannelMapping:(id)arg2 ;
-(void)_createIOContext;
-(void)_destroyIOContext;
-(void)_freeIOContext:(SCD_Struct_AS0*)arg1 ;
-(id)initWithDevices:(id)arg1 usingMasterDevice:(id)arg2 andClockDeviceUID:(id)arg3 withName:(id)arg4 isPrivate:(BOOL)arg5 usingChannelMapping:(id)arg6 ;
-(void)setAudioDevice:(ASAAudioDevice *)arg1 ;
@end

