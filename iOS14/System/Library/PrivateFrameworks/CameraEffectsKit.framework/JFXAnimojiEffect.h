/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXEffect.h>

@class UIImage;

@interface JFXAnimojiEffect : JFXEffect

@property (nonatomic,readonly) UIImage * thumbnail; 
+(BOOL)supportsSecureCoding;
+(id)createMemojiEffectWithContentsOfFile:(id)arg1 identifier:(id)arg2 ;
+(id)createAnimojiEffectForID:(id)arg1 ;
+(id)animojiIDs;
+(BOOL)isAvatarKitAvailable;
-(id)dataRepresentation;
-(UIImage *)thumbnail;
-(id)displayName;
-(id)renderEffect;
-(unsigned long long)avatarVersionNumber;
-(id)initWithEffectID:(id)arg1 ;
-(PVCGPointQuad)_convertRenderEffectPoints:(PVCGPointQuad)arg1 toBasisRect:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(void)_convertRenderEffectPoints:(CGPoint*)arg1 numPoints:(unsigned long long)arg2 toBasisRect:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(void)_convertRenderEffectPoints:(CGPoint*)arg1 numPoints:(unsigned long long)arg2 fromBasisRect:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(CGAffineTransform)_affineTransformFromEffectRect:(CGRect)arg1 toSize:(CGSize)arg2 basisOrigin:(int)arg3 ;
-(CGAffineTransform)transform:(CGRect)arg1 basisOrigin:(int)arg2 ;
@end

