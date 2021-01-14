/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSObject;

@interface FigVideoLayerInternal : NSObject {

	BOOL isPresentationLayer;
	BOOL visible;
	OpaqueFigSimpleMutexRef serializationMutex;
	NSObject*<OS_dispatch_queue> notificationSerialQueue;

}
@end

