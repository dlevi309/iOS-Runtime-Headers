/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol CFXFullScreenTextEditViewControllerDelegate <NSObject>
@optional
-(BOOL)fullScreenTextEditViewController:(id)arg1 shouldDisableEditingAnimationForEffect:(id)arg2;

@required
-(void)fullScreenTextEditViewController:(id)arg1 didBeginEditingEffect:(id)arg2;
-(void)fullScreenTextEditViewController:(id)arg1 didFinishEditingEffect:(id)arg2 withUpdatedText:(id)arg3;
-(void)fullScreenTextEditViewController:(id)arg1 didFinishEditingByRemovingEffect:(id)arg2;
-(void)fullScreenTextEditViewController:(id)arg1 willBeginAnimationBeforeEditingEffect:(id)arg2;
-(void)fullScreenTextEditViewController:(id)arg1 didBeginAnimationBeforeEditingEffect:(id)arg2 completion:(/*^block*/id)arg3;
-(void)fullScreenTextEditViewController:(id)arg1 willBeginAnimationAfterEditingEffect:(id)arg2 updatedText:(id)arg3;
-(void)fullScreenTextEditViewController:(id)arg1 didFinishAnimationAfterEditingEffect:(id)arg2 completion:(/*^block*/id)arg3;
-(long long)faceTrackingInterfaceOrientationForfullScreenTextEditViewController:(id)arg1;

@end

