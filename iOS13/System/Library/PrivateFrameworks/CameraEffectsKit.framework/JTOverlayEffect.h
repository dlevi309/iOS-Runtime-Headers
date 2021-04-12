/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTTextEffect.h>

@class NSString, JTTrackedEffectProperties;

@interface JTOverlayEffect : JTTextEffect {

	NSString* _accessibilityOverlayEffectLabel;
	JTTrackedEffectProperties* _trackingProps;

}

@property (assign) float opacity; 
@property (nonatomic,copy) NSString * accessibilityOverlayEffectLabel;               //@synthesize accessibilityOverlayEffectLabel=_accessibilityOverlayEffectLabel - In the implementation block
@property (assign,getter=isTextFlipped,nonatomic) BOOL flipText; 
@property (assign,getter=isTailFlipped,nonatomic) BOOL flipTail; 
@property (nonatomic,retain) JTTrackedEffectProperties * trackingProps;              //@synthesize trackingProps=_trackingProps - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)effectIDToImageSequenceIDMap;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(unsigned long long)maxCharacters;
-(id)accessibilityName;
-(void)setForceRenderAtPosterFrame:(BOOL)arg1 ;
-(void)setTransformAnimation:(id)arg1 ;
-(BOOL)enablePresentationState:(BOOL)arg1 ;
-(JTTrackedEffectProperties *)trackingProps;
-(id)initWithEffectID:(id)arg1 ;
-(BOOL)isTextFlipped;
-(CGRect)imageFrame:(SCD_Struct_JT6)arg1 atPosterFrameTimeRelativeTo:(CGRect)arg2 basisOrigin:(int)arg3 includeDropShadow:(BOOL)arg4 ;
-(void)applyScaleToFitFrame:(CGRect)arg1 withComponentTime:(SCD_Struct_JT6)arg2 relativeRect:(CGRect)arg3 ;
-(BOOL)setImageSequencePathToDownloadedAssets;
-(double)pickerScale;
-(void)setSingleLineScaleThreshold:(double)arg1 ;
-(void)setTrackingProps:(JTTrackedEffectProperties *)arg1 ;
-(double)customPickerRotation;
-(id)customPrimaryFillColor;
-(NSString *)accessibilityOverlayEffectLabel;
-(void)setAccessibilityOverlayEffectLabel:(NSString *)arg1 ;
-(id)serializableEffectParameters;
-(BOOL)supportsFlippingText;
-(void)imagePoints:(CGPoint*)arg1 time:(SCD_Struct_JT6)arg2 relativeTo:(CGRect)arg3 basisOrigin:(int)arg4 includeDropShadow:(BOOL)arg5 ;
-(void)imagePointsAtPosterFrameTime:(CGPoint*)arg1 time:(SCD_Struct_JT6)arg2 relativeTo:(CGRect)arg3 basisOrigin:(int)arg4 includeDropShadow:(BOOL)arg5 ;
-(CGRect)JT_convertBounds:(CGRect)arg1 relativeTo:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(id)JT_convertTransform:(id)arg1 relativeTo:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(void)applyInverseOfTransformAnimation:(id)arg1 withComponentTime:(SCD_Struct_JT6)arg2 relativeRect:(CGRect)arg3 ;
-(BOOL)objectBoundsAtPosterFrame:(CGRect*)arg1 relativeTo:(CGRect)arg2 basisOrigin:(int)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5 ;
-(BOOL)objectBounds:(CGRect*)arg1 time:(SCD_Struct_JT6)arg2 relativeTo:(CGRect)arg3 basisOrigin:(int)arg4 includeDropShadow:(BOOL)arg5 includeMasks:(BOOL)arg6 ;
-(id)transformAtPosterFrame:(SCD_Struct_JT6)arg1 relativeTo:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(id)transformAtTime:(SCD_Struct_JT6)arg1 relativeTo:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(id)objectTransformRelativeTo:(CGRect)arg1 basisOrigin:(int)arg2 ;
-(id)clipTransformAtTime:(SCD_Struct_JT6)arg1 relativeTo:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(id)JT_viewInfoForViewBounds:(CGRect)arg1 time:(SCD_Struct_JT6)arg2 isPosterFrame:(BOOL)arg3 includeDropShadow:(BOOL)arg4 ;
-(BOOL)hitTest:(CGPoint)arg1 time:(SCD_Struct_JT6)arg2 relativeTo:(CGRect)arg3 basisOrigin:(int)arg4 withMinimumOverlaySize:(CGSize)arg5 ;
-(BOOL)JT_isPoint:(CGPoint)arg1 inPolyWithPoints:(CGPoint*)arg2 numPoints:(unsigned)arg3 withMinimumOverlaySize:(CGSize)arg4 ;
-(BOOL)hitTestAtPosterFrameTime:(CGPoint)arg1 time:(SCD_Struct_JT6)arg2 relativeTo:(CGRect)arg3 basisOrigin:(int)arg4 withMinimumOverlaySize:(CGSize)arg5 ;
-(CGPoint)hitAreaScale;
-(BOOL)isAppearanceEqual:(id)arg1 ;
-(void)setRenderStartOffset:(SCD_Struct_JT6)arg1 ;
-(void)setFlipText:(BOOL)arg1 ;
-(void)setFlipTail:(BOOL)arg1 ;
-(BOOL)isTailFlipped;
-(BOOL)supportsFlippingTail;
-(CGRect)imageFrame:(SCD_Struct_JT6)arg1 relativeTo:(CGRect)arg2 basisOrigin:(int)arg3 includeDropShadow:(BOOL)arg4 ;
-(id)copyOfOverlayWithFrameAt:(CGRect)arg1 withClip:(id)arg2 relativeToRect:(CGRect)arg3 currentPlaybackTime:(int)arg4 ;
-(id)viewInfoForViewBoundsAtPosterFrame:(CGRect)arg1 time:(SCD_Struct_JT6)arg2 includeDropShadow:(BOOL)arg3 ;
-(id)viewInfoForViewBounds:(CGRect)arg1 atTime:(SCD_Struct_JT6)arg2 includeDropShadow:(BOOL)arg3 ;
-(BOOL)hitTest:(CGPoint)arg1 time:(SCD_Struct_JT6)arg2 relativeTo:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(BOOL)hitTestAtPosterFrameTime:(CGPoint)arg1 time:(SCD_Struct_JT6)arg2 relativeTo:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(CGPoint)closeButtonInset;
-(BOOL)includeDropShadowWhenPositioningCloseButton;
@end

