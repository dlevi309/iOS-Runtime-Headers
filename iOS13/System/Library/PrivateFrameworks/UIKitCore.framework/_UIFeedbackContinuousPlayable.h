/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIFeedbackContinuousPlayable <NSObject>
@property (assign,nonatomic) double duration; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@required
-(void)stop;
-(double)duration;
-(void)setDuration:(double)arg1;
-(BOOL)isPlaying;

@end

