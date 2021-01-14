/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol AVAudioSessionDelegateMediaPlayerOnly;
#import <AVFCore/AVFCore-Structs.h>
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

