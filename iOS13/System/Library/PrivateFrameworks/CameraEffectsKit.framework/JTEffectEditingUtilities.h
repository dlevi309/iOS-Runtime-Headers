/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JTEffectEditingUtilities : NSObject
+(void)setStreamingMode:(BOOL)arg1 ;
+(void)addTransformToEffect:(id)arg1 transform:(CGAffineTransform)arg2 relativeToBounds:(CGRect)arg3 time:(SCD_Struct_JT6)arg4 restrictToBounds:(BOOL)arg5 ;
+(void)updateEffectText:(id)arg1 newText:(id)arg2 ;
+(BOOL)canApplyEffectAsTracked;
+(void)configureOverlayForInsertion:(id)arg1 atScaleRelativeToComposition:(double)arg2 includeTracking:(BOOL)arg3 previewViewCorrectionTransform:(CGAffineTransform)arg4 ;
+(void)configureOverlayForInsertion:(id)arg1 atNormalizedCompositionPoint:(CGPoint)arg2 scaleX:(double)arg3 scaleY:(double)arg4 rotationAngle:(double)arg5 includeTracking:(BOOL)arg6 previewViewCorrectionTransform:(CGAffineTransform)arg7 ;
+(BOOL)canEditTextForEffect:(id)arg1 ;
+(void)updateEffectVisibility:(id)arg1 value:(BOOL)arg2 ;
+(id)hitTestEffectsAtPosterFrame:(id)arg1 atNormalizedPoint:(CGPoint)arg2 atTime:(SCD_Struct_JT6)arg3 includeTracking:(BOOL)arg4 minimumHitTestArea:(CGSize)arg5 ;
+(void)disableAnimationForEffects:(id)arg1 ;
+(id)textForEffect:(id)arg1 ;
+(id)hitTestEffectsAtPosterFrame:(id)arg1 atPoint:(CGPoint)arg2 relativeToBounds:(CGRect)arg3 atTime:(SCD_Struct_JT6)arg4 includeTracking:(BOOL)arg5 ;
+(CGRect)frameForEffect:(id)arg1 atTime:(SCD_Struct_JT6)arg2 relativeToBounds:(CGRect)arg3 includeTracking:(BOOL)arg4 minimumHitTestArea:(CGSize)arg5 ;
+(id)viewInfoForEffect:(id)arg1 forViewBoundsAtPosterFrame:(CGRect)arg2 time:(SCD_Struct_JT6)arg3 includeDropShadow:(BOOL)arg4 ;
+(CGPoint)removeButtonPositionForEffect:(id)arg1 atTime:(SCD_Struct_JT6)arg2 atPosterFrameRelativeToBounds:(CGRect)arg3 includeTracking:(BOOL)arg4 viewCorrectionTransform:(CGAffineTransform)arg5 ;
+(id)createTextEditingPropertiesForEffect:(id)arg1 relativeTo:(CGRect)arg2 atTime:(SCD_Struct_JT6)arg3 displayScale:(double)arg4 ;
+(void)beginTextEditingForEffect:(id)arg1 ;
+(void)updateEffectToDefaultTextIfEmpty:(id)arg1 ;
+(void)endTextEditingForEffect:(id)arg1 ;
+(unsigned long long)maximumTextLengthForEffect:(id)arg1 ;
+(CGPoint)spacingBetweenCenterPointOfEffect:(id)arg1 point:(CGPoint)arg2 relativeToBounds:(CGRect)arg3 atTime:(SCD_Struct_JT6)arg4 includeTracking:(BOOL)arg5 ;
+(id)trackingTransformWithEffect:(id)arg1 effectFrame:(id)arg2 objectTransform:(id)arg3 fractionComplete:(double)arg4 ;
+(id)hitTestEffects:(id)arg1 atPoint:(CGPoint)arg2 relativeToBounds:(CGRect)arg3 atTime:(SCD_Struct_JT6)arg4 includeTracking:(BOOL)arg5 ;
+(void)changeTrackingTypeIfNecessary:(id)arg1 forTouchPoint:(CGPoint)arg2 withBounds:(CGRect)arg3 completion:(/*^block*/id)arg4 ;
+(CGRect)frameForEffect:(id)arg1 atTime:(SCD_Struct_JT6)arg2 relativeToBounds:(CGRect)arg3 ;
+(void)enableAnimationForEffects:(id)arg1 animationStartTime:(SCD_Struct_JT6)arg2 ;
+(CGRect)compositionBounds;
+(CGRect)rectForCustomizedOverlay:(id)arg1 relativeToBounds:(CGRect)arg2 scaleX:(double)arg3 scaleY:(double)arg4 ;
+(CGRect)CFX_motionRectForEffectFromFaceTrackRect:(CGRect)arg1 forEffect:(id)arg2 relativeToSize:(CGSize)arg3 ;
+(CGSize)CFX_compositionSize;
+(CGPoint)CFX_placementPointForOverlay:(id)arg1 withBounds:(CGRect)arg2 inCompositionRect:(CGRect)arg3 ;
+(CGRect)CFX_frameForEffect:(id)arg1 fitToBounds:(CGRect)arg2 ;
+(CGRect)CFX_screenRectForOverlayRect:(CGRect)arg1 inCompositionRect:(CGRect)arg2 withFaceAnchor:(id)arg3 ;
+(CGPoint)CFX_screenPointFromCompositionPoint:(CGPoint)arg1 locatedOnFace:(BOOL)arg2 withFaceAnchor:(id)arg3 bufferSize:(CGSize)arg4 ;
+(id)CFX_hitTestEffects:(id)arg1 withinEffectPoints:(id)arg2 atTime:(SCD_Struct_JT6)arg3 forcePosterFrame:(BOOL)arg4 includeTracking:(BOOL)arg5 minimumHitTestArea:(CGSize)arg6 ;
+(int)CFX_trackingTypeForOverlayIntersectionWithFaceRect:(id)arg1 withCurrentTrackingType:(int)arg2 ;
+(CGRect)CFX_faceTrackRectForEffectFromUIKitCGRect:(CGRect)arg1 forEffect:(id)arg2 relativeToSize:(CGSize)arg3 ;
+(CGPoint)CFX_compositionPointFromScreenPoint:(CGPoint)arg1 locatedOnFace:(BOOL)arg2 withFaceAnchor:(id)arg3 bufferSize:(CGSize)arg4 ;
+(CGPoint)CFX_faceTrackPointFromCGPoint:(CGPoint)arg1 overlay:(id)arg2 relativeToSize:(CGSize)arg3 ;
+(CGPoint)CFX_convertPoint:(CGPoint)arg1 fromSize:(CGSize)arg2 toSize:(CGSize)arg3 invertY:(BOOL)arg4 ;
+(CGPoint)CFX_originAfterApplyingCenteredCropOnPoint:(CGPoint)arg1 outerSize:(CGSize)arg2 innerSize:(CGSize)arg3 ;
+(CGPoint)CFX_closeButtonInsetForEffect:(id)arg1 viewBounds:(CGRect)arg2 ;
+(void)CFX_ApplyTextFlipIfNeeded:(id)arg1 transform:(CGAffineTransform)arg2 ;
+(BOOL)isStreamingMode;
+(BOOL)shouldRenderTextWithMotionWhileEditingTextForEffect:(id)arg1 ;
+(void)setTextRenderingEnabledForEffect:(id)arg1 value:(BOOL)arg2 ;
+(id)hitTestEffectsAtPosterFrame:(id)arg1 atNormalizedPoints:(id)arg2 atTime:(SCD_Struct_JT6)arg3 includeTracking:(BOOL)arg4 ;
+(id)hitTestEffects:(id)arg1 atNormalizedPoint:(CGPoint)arg2 atTime:(SCD_Struct_JT6)arg3 includeTracking:(BOOL)arg4 ;
+(id)overlayHitTestPointsForFrame:(CGRect)arg1 compositionSize:(CGSize)arg2 ;
+(BOOL)areFaceTrackedEffects:(id)arg1 ;
+(CGRect)currentFaceRectRelativeToBounds:(CGRect)arg1 ;
+(void)setTrackingTypeForEffect:(id)arg1 trackingType:(int)arg2 ;
@end

