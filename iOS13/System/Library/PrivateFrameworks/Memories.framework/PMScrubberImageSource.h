/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol OS_dispatch_queue;
#import <Memories/Memories-Structs.h>
@class AVAssetImageGenerator, NSMutableDictionary, NSMutableArray, NSLock, NSObject;

@interface PMScrubberImageSource : NSObject {

	AVAssetImageGenerator* _imageGenerator;
	NSMutableDictionary* _cachedImages;
	NSMutableDictionary* _requestCompletionHandlers;
	NSMutableArray* _pendingTimestampRequests;
	BOOL _requestToProcessPendingThumbnailsQueued;
	BOOL _cancelled;
	NSLock* _cancelledLock;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	CGSize _maximumThumbnailSize;

}

@property (assign,nonatomic) CGSize maximumThumbnailSize;                              //@synthesize maximumThumbnailSize=_maximumThumbnailSize - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> isolationQueue;              //@synthesize isolationQueue=_isolationQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMaximumThumbnailSize:(CGSize)arg1 ;
-(void)processPendingThumbnailRequests;
-(CGSize)maximumThumbnailSize;
-(void)setupImageGeneratorWithAVAsset:(id)arg1 ;
-(void)enqueueThumbnailRequestForTimestamp:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)cancelPendingThubmnailRequests;
@end

