/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

@class NSArray;


@protocol HFCameraClipQueueing <NSObject>
@property (nonatomic,readonly) NSArray * queuableItems; 
@required
-(NSArray *)queuableItems;
-(void)removeQueueableItem:(id)arg1;
-(id)createQueueableItemForClipManager:(id)arg1 clip:(id)arg2;
-(void)insertQueueableItem:(id)arg1 afterItem:(id)arg2;
-(void)seekToOffset:(double)arg1 inItem:(id)arg2;

@end

