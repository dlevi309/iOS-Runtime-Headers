/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

