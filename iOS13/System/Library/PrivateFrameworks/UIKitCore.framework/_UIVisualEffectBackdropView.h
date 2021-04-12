/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIVisualEffectSubview.h>

@class _UIVisualEffectViewBackdropCaptureGroup, CABackdropLayer;

@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview {

	_UIVisualEffectViewBackdropCaptureGroup* _captureGroup;

}

@property (assign,nonatomic) long long renderMode; 
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * captureGroup; 
@property (nonatomic,readonly) CABackdropLayer * backdropLayer; 
+(Class)layerClass;
-(CABackdropLayer *)backdropLayer;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)removeFromCurrentCaptureGroup;
-(void)setRenderMode:(long long)arg1 ;
-(void)setCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(void)applyRequestedFilterEffects;
-(void)applyIdentityFilterEffects;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_applyScaleHintAsRequested:(BOOL)arg1 ;
-(long long)renderMode;
-(_UIVisualEffectViewBackdropCaptureGroup *)captureGroup;
@end

