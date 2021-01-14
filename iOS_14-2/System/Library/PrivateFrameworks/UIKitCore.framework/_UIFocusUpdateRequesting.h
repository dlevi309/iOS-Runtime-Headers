/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIFocusSystem, _UIFocusInputDeviceInfo, UIFocusAnimationCoordinator;


@protocol _UIFocusUpdateRequesting <NSObject>
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem; 
@property (getter=isMovementRequest,nonatomic,readonly) BOOL movementRequest; 
@property (nonatomic,readonly) BOOL shouldPlayFocusSound; 
@property (nonatomic,readonly) BOOL requiresNextFocusedItem; 
@property (nonatomic,readonly) BOOL requiresEnvironmentValidation; 
@property (nonatomic,readonly) BOOL allowsFocusingCurrentItem; 
@property (nonatomic,readonly) BOOL allowsDeferral; 
@property (nonatomic,readonly) BOOL allowsFocusRestoration; 
@property (nonatomic,readonly) BOOL shouldPerformHapticFeedback; 
@property (nonatomic,readonly) _UIFocusInputDeviceInfo * inputDeviceInfo; 
@property (nonatomic,readonly) UIFocusAnimationCoordinator * animationCoordinator; 
@required
-(UIFocusSystem *)focusSystem;
-(BOOL)shouldPlayFocusSound;
-(BOOL)isMovementRequest;
-(BOOL)allowsDeferral;
-(BOOL)shouldPerformHapticFeedback;
-(UIFocusAnimationCoordinator *)animationCoordinator;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(BOOL)requiresEnvironmentValidation;
-(BOOL)allowsFocusingCurrentItem;
-(BOOL)allowsFocusRestoration;
-(BOOL)requiresNextFocusedItem;

@end

