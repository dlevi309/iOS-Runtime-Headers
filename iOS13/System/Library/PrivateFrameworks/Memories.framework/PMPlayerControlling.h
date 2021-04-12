/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol PMPlayerControlling <NSObject>
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (nonatomic,readonly) int currentFrameTime; 
@required
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1;
-(int)currentFrameTime;

@end

