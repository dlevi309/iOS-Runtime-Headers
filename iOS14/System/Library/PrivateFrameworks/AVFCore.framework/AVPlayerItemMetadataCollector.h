/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVPlayerItemMediaDataCollector.h>

@class AVPlayerItemMetadataCollectorInternal;

@interface AVPlayerItemMetadataCollector : AVPlayerItemMediaDataCollector {

	AVPlayerItemMetadataCollectorInternal* _metadataCollectorInternal;

}

@property (nonatomic,__weak,readonly) id<AVPlayerItemMetadataCollectorPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(id)init;
-(id)initWithIdentifiers:(id)arg1 classifyingLabels:(id)arg2 ;
-(id)_getFilteredMetadataGroups:(id)arg1 fromIdentifiers:(id)arg2 andClassifyingLabels:(id)arg3 modifiedIndexesOut:(id*)arg4 newIndexesOut:(id*)arg5 ;
-(BOOL)_isAttachedToPlayerItem;
-(id<AVPlayerItemMetadataCollectorPushDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detatchFromPlayerItem;
-(void)dealloc;
-(void)_updateTaggedRangeMetadataArray:(id)arg1 ;
@end

