/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSMutableArray, NSArray;

@interface FMMixParameters : NSObject {

	NSMutableArray* _volumeKeyFrames;

}

@property (nonatomic,retain) NSArray * volumeKeyFrames;              //@synthesize volumeKeyFrames=_volumeKeyFrames - In the implementation block
-(id)init;
-(id)description;
-(BOOL)appendVolumeKeyframe:(id)arg1 ;
-(NSArray *)volumeKeyFrames;
-(id)lastVolumeKeyFrame;
-(void)setVolumeKeyFrames:(NSArray *)arg1 ;
-(float)volumeValueAtTime:(long long)arg1 ;
-(void)insertVolumeKeyframe:(id)arg1 ;
-(BOOL)volumeKeyframesAreValid;
-(BOOL)removeRedundantVolumeKeyFrames;
@end

