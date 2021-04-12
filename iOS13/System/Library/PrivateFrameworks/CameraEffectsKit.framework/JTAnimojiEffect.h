/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTEffect.h>

@class UIImage;

@interface JTAnimojiEffect : JTEffect

@property (nonatomic,readonly) UIImage * thumbnail; 
+(BOOL)supportsSecureCoding;
+(BOOL)isAvatarKitAvailable;
+(id)animojiIDs;
-(id)displayName;
-(UIImage *)thumbnail;
-(id)renderEffect;
-(id)initWithEffectID:(id)arg1 ;
-(id)_cachedRenderEffect;
-(CGAffineTransform)transform:(CGRect)arg1 basisOrigin:(int)arg2 ;
-(CGRect)_convertRenderEffectRect:(CGRect)arg1 toBasisRect:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(void)_convertRenderEffectPoints:(CGPoint*)arg1 toBasisRect:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(void)_convertRenderEffectPoints:(CGPoint*)arg1 numPoints:(unsigned long long)arg2 toBasisRect:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(void)_convertRenderEffectPoints:(CGPoint*)arg1 numPoints:(unsigned long long)arg2 fromBasisRect:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(CGAffineTransform)_affineTransformFromEffectRect:(CGRect)arg1 toSize:(CGSize)arg2 basisOrigin:(int)arg3 ;
@end

