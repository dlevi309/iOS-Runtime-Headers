/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRenderMode:(long long)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)applyIdentityFilterEffects;
-(void)applyRequestedFilterEffects;
-(void)_applyScaleHintAsRequested:(BOOL)arg1 ;
-(long long)renderMode;
-(void)willMoveToWindow:(id)arg1 ;
-(CABackdropLayer *)backdropLayer;
-(_UIVisualEffectViewBackdropCaptureGroup *)captureGroup;
-(void)removeFromCurrentCaptureGroup;
-(void)setCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
@end

