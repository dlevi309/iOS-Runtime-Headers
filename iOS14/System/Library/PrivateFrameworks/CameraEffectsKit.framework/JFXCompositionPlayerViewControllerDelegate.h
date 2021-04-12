/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JFXCompositionPlayerViewControllerDelegate <NSObject>
@optional
-(void)playbackDidStart:(id)arg1;
-(void)playbackTimeDidChange:(id)arg1 currentTime:(int)arg2;
-(void)playbackDidStop:(id)arg1 currentTime:(int)arg2;
-(void)playbackAreaTapped:(id)arg1 normalizedClipPoint:(CGPoint)arg2 normalizedMinimumSize:(CGSize)arg3 atTime:(int)arg4;
-(void)playbackAreaPanned:(id)arg1 gesture:(id)arg2 normalizedClipPoint:(CGPoint)arg3 normalizedMinimumSize:(CGSize)arg4 translationDelta:(CGPoint)arg5 atTime:(int)arg6 timeScale:(int)arg7;
-(void)playbackAreaPinched:(id)arg1 gesture:(id)arg2 normalizedClipPoints:(id)arg3 normalizedCenterPoint:(CGPoint)arg4 normalizedMinimumSize:(CGSize)arg5 scaleDelta:(double)arg6 atTime:(int)arg7 timeScale:(int)arg8;
-(void)playbackAreaRotated:(id)arg1 gesture:(id)arg2 normalizedClipPoints:(id)arg3 normalizedCenterPoint:(CGPoint)arg4 normalizedMinimumSize:(CGSize)arg5 rotateDelta:(double)arg6 atTime:(int)arg7;
-(void)playbackAreaDoubleTapped:(id)arg1;
-(void)updateFromPlayer:(id)arg1;
-(id)animationPropertiesForCompositionTransition:(id)arg1;

@end

