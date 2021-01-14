/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
*/


@protocol MFQueueManagement
@property (readonly,nonatomic) id<MFQueuePlayerItem> currentQueueItem; 
@required
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg1;
-(id<MFQueuePlayerItem>)currentQueueItem;
-(void)restoreQueue:(/*^block*/id)arg1;
-(void)clearPlaybackQueue;

@end

