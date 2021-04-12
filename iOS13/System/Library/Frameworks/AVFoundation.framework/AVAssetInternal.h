/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol AVLoggingIdentifier;
@class AVWeakReference, AVDispatchOnce, NSArray, NSString;

@interface AVAssetInternal : NSObject {

	AVWeakReference* weakReference;
	AVDispatchOnce* loadChapterInfoOnce;
	NSArray* chapterGroupInfo;
	NSString* anchorChapterType;
	NSArray* availableChapterLanguages;
	NSArray* availableCanonicalizedChapterLanguages;
	NSArray* availableChapterLocales;
	id<AVLoggingIdentifier> loggingIdentifier;

}
@end

