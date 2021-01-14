/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

