/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIFeedbackContinuousPlayable <NSObject>
@property (assign,nonatomic) double duration; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@required
-(BOOL)isPlaying;
-(void)setDuration:(double)arg1;
-(void)stop;
-(double)duration;

@end

