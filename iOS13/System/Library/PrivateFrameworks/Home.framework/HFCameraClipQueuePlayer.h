/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <AVFoundation/AVQueuePlayer.h>

@class HFCameraClipPlayerItem, NSArray;

@interface HFCameraClipQueuePlayer : AVQueuePlayer

@property (nonatomic,readonly) HFCameraClipPlayerItem * currentItem; 
@property (nonatomic,copy,readonly) NSArray * items; 
-(NSArray *)items;
-(HFCameraClipPlayerItem *)currentItem;
-(id)initWithItems:(id)arg1 ;
@end

