/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_semaphore;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSObject, AVWeakReference;

@interface AVMutableMovieTrackInternal : NSObject {

	OpaqueFigMutableMovieRef figMutableMovie;
	int trackID;
	OpaqueFigAssetTrackRef figAssetTrack;
	NSObject*<OS_dispatch_semaphore> metadataWaitingSemaphore;
	AVWeakReference* figAssetTrackNotificationListenerWeakReference;
	OpaqueFigAssetTrackRef figAssetTrackNotificationSource;

}
@end

