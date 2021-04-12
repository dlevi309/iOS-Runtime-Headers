/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVPlayerItemMediaDataCollector.h>

@class AVPlayerItemMetadataCollectorInternal;

@interface AVPlayerItemMetadataCollector : AVPlayerItemMediaDataCollector {

	AVPlayerItemMetadataCollectorInternal* _metadataCollectorInternal;

}

@property (nonatomic,__weak,readonly) id<AVPlayerItemMetadataCollectorPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(id)init;
-(void)dealloc;
-(id<AVPlayerItemMetadataCollectorPushDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithIdentifiers:(id)arg1 classifyingLabels:(id)arg2 ;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detatchFromPlayerItem;
-(void)_updateTaggedRangeMetadataArray:(id)arg1 ;
-(id)_getFilteredMetadataGroups:(id)arg1 fromIdentifiers:(id)arg2 andClassifyingLabels:(id)arg3 modifiedIndexesOut:(id*)arg4 newIndexesOut:(id*)arg5 ;
-(BOOL)_isAttachedToPlayerItem;
@end

