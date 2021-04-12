/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@protocol AVAudioPlayerDelegate, OS_dispatch_queue;
#import <AVFAudio/AVFAudio-Structs.h>
@class NSData, NSURL, NSDictionary, AVAudioFormat, NSArray, AVAudioSession, NSObject;

@interface AudioPlayerImpl : NSObject {

	id<AVAudioPlayerDelegate> _delegate;
	NSData* _data;
	NSURL* _url;
	NSDictionary* _actualSettings;
	AVAudioFormat* _format;
	BOOL _playRetain;
	NSArray* _channelAssignments;
	AVAudioSession* _audioSession;
	BOOL _sessionListenerWasSet;
	unsigned long long _endInterruptionFlags;
	AVAudioPlayerCpp* _localPlayer;
	NSObject*<OS_dispatch_queue> _gcd;

}
-(id)init;
-(void)dealloc;
@end

