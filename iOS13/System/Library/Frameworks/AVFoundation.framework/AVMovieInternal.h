/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVAssetInspectorLoader, NSURL, NSData, NSDictionary, NSArray, AVDispatchOnce;

@interface AVMovieInternal : NSObject {

	AVAssetInspectorLoader* loader;
	NSURL* URL;
	NSData* data;
	NSDictionary* initializationOptions;
	NSArray* tracks;
	AVDispatchOnce* makeTracksArrayOnce;

}
@end

