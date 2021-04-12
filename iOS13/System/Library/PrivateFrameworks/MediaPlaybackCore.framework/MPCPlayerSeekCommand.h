/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class NSArray;


@protocol MPCPlayerSeekCommand <MPCPlayerCommand>
@property (nonatomic,copy,readonly) NSArray * preferredBackwardJumpIntervals; 
@property (nonatomic,copy,readonly) NSArray * preferredForwardJumpIntervals; 
@required
-(id)endSeek;
-(id)beginSeekWithDirection:(long long)arg1;
-(NSArray *)preferredBackwardJumpIntervals;
-(id)jumpByInterval:(double)arg1;
-(id)changePositionToElapsedInterval:(double)arg1;
-(NSArray *)preferredForwardJumpIntervals;

@end

