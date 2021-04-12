/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_semaphore;
#import <AVFCore/AVFCore-Structs.h>
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

