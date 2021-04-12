/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol AVAudioSessionDelegateMediaPlayerOnly;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, NSDictionary;

@interface AVAudioSessionMediaPlayerOnlyInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigPlayerRef figPlayer;
	BOOL isAppAudioSession;
	BOOL isActive;
	NSString* category;
	NSString* mode;
	NSDictionary* activationContext;
	BOOL usingLongFormAudio;
	id<AVAudioSessionDelegateMediaPlayerOnly> delegate;

}
@end

