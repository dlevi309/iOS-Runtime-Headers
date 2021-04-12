/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class SpeedRanges, VideoMovie;


@protocol MiroClip_Shim <NSObject>
@property (assign,nonatomic) float speed; 
@property (nonatomic,readonly) SpeedRanges * speedRanges; 
@property (nonatomic,readonly) float frameRate; 
@property (nonatomic,readonly) VideoMovie * videoMovie; 
@required
-(void)setSpeed:(float)arg1;
-(float)speed;
-(float)frameRate;
-(id)copy;
-(SpeedRanges *)speedRanges;
-(VideoMovie *)videoMovie;

@end

