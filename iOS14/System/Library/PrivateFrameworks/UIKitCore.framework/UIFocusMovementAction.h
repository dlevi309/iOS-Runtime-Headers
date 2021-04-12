/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <BaseBoard/BSAction.h>

@class _UIFocusMovementInfo, _UIFocusInputDeviceInfo;

@interface UIFocusMovementAction : BSAction

@property (nonatomic,readonly) _UIFocusMovementInfo * focusMovementInfo; 
@property (nonatomic,readonly) _UIFocusInputDeviceInfo * inputDeviceInfo; 
@property (nonatomic,readonly) BOOL shouldPerformHapticFeedback; 
@property (nonatomic,readonly) CGRect focusedFrame; 
-(BOOL)shouldPerformHapticFeedback;
-(id)initWithFocusMovementInfo:(id)arg1 inputDeviceInfo:(id)arg2 shouldPerformHapticFeedback:(BOOL)arg3 focusedFrameInSceneCoordinateSpace:(CGRect)arg4 ;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(id)initWithFocusMovementInfo:(id)arg1 inputDeviceInfo:(id)arg2 shouldPerformHapticFeedback:(BOOL)arg3 ;
-(long long)UIActionType;
-(_UIFocusMovementInfo *)focusMovementInfo;
-(CGRect)focusedFrame;
-(id)initWithFocusMovementInfo:(id)arg1 ;
@end

