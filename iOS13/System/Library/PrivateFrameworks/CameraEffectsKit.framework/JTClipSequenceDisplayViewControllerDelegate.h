/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JTClipSequenceDisplayViewControllerDelegate <NSObject>
@optional
-(void)playbackDidStart:(id)arg1;
-(void)playbackDidStop:(id)arg1 currentTime:(int)arg2;
-(void)playbackTimeDidChange:(id)arg1 currentTime:(int)arg2;
-(void)playbackAreaTapped:(id)arg1 normalizedClipPoint:(CGPoint)arg2 atTime:(int)arg3;
-(void)playbackAreaPanned:(id)arg1 gesture:(id)arg2 normalizedClipPoint:(CGPoint)arg3 translationDelta:(CGPoint)arg4 atTime:(int)arg5 timeScale:(int)arg6;
-(void)playbackAreaPinched:(id)arg1 gesture:(id)arg2 normalizedClipPoints:(id)arg3 normalizedCenterPoint:(CGPoint)arg4 scaleDelta:(double)arg5 atTime:(int)arg6 timeScale:(int)arg7;
-(void)playbackAreaRotated:(id)arg1 gesture:(id)arg2 normalizedClipPoints:(id)arg3 normalizedCenterPoint:(CGPoint)arg4 rotateDelta:(double)arg5 atTime:(int)arg6;
-(void)playbackAreaDoubleTapped:(id)arg1;
-(void)updateFromPlayer:(id)arg1;
-(double)animationDurationForCompositionTransition:(id)arg1 shouldScale:(BOOL*)arg2;

@end

