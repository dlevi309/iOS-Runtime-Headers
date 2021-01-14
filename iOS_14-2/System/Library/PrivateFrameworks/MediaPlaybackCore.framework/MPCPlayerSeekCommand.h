/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class NSArray;


@protocol MPCPlayerSeekCommand <MPCPlayerCommand>
@property (nonatomic,copy,readonly) NSArray * preferredBackwardJumpIntervals; 
@property (nonatomic,copy,readonly) NSArray * preferredForwardJumpIntervals; 
@required
-(id)beginSeekWithDirection:(long long)arg1;
-(id)endSeek;
-(NSArray *)preferredBackwardJumpIntervals;
-(id)jumpByInterval:(double)arg1;
-(id)changePositionToElapsedInterval:(double)arg1;
-(NSArray *)preferredForwardJumpIntervals;

@end

