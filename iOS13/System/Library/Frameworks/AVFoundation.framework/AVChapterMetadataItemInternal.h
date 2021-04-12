/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol NSObjectNSCopying, OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, NSMutableArray, NSObject;

@interface AVChapterMetadataItemInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigAssetRef figAsset;
	long long chapterGroupIndex;
	long long chapterIndex;
	NSString* chapterType;
	NSString* extendedLanguageTag;
	NSString* languageCode;
	NSString* chapterDataType;
	id<NSObject><NSCopying> value;
	SCD_Struct_AV7 time;
	SCD_Struct_AV7 duration;
	long long valueStatus;
	int valueErrorCode;
	NSMutableArray* completions;
	NSObject*<OS_dispatch_queue> readWriteQueue;

}
@end

