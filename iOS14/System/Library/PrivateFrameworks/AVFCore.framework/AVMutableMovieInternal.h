/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_semaphore;
#import <AVFCore/AVFCore-Structs.h>
@class NSURL, NSData, NSDictionary, NSObject, NSMutableArray, AVDispatchOnce;

@interface AVMutableMovieInternal : NSObject {

	OpaqueFigMutableMovieRef figMutableMovie;
	OpaqueFigFormatReaderRef formatReader;
	OpaqueFigAssetRef figAsset;
	NSURL* URL;
	NSData* data;
	NSDictionary* initializationOptions;
	NSObject*<OS_dispatch_semaphore> trackWaitingSemaphore;
	NSObject*<OS_dispatch_semaphore> metadataWaitingSemaphore;
	NSMutableArray* tracks;
	AVDispatchOnce* makeTracksArrayOnce;

}
@end

