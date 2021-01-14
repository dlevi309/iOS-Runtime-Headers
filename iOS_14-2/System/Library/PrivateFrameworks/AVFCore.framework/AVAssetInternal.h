/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
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

