/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PVEffect, NSMutableDictionary, NSLock, NSDictionary;

@interface JTEffect : NSObject <NSSecureCoding, NSCopying> {

	NSString* _effectID;
	int _type;
	PVEffect* _renderEffect;
	NSMutableDictionary* _effectParameters;
	NSMutableDictionary* _dirtyEffectParameters;
	NSLock* _paramLock;
	BOOL _isNone;
	CGSize _renderSize;

}

@property (nonatomic,readonly) NSString * effectID;                             //@synthesize effectID=_effectID - In the implementation block
@property (nonatomic,readonly) BOOL isNone;                                     //@synthesize isNone=_isNone - In the implementation block
@property (nonatomic,readonly) int type;                                        //@synthesize type=_type - In the implementation block
@property (assign) BOOL forceRenderAtPosterFrame; 
@property (assign) BOOL forceDisableLooping; 
@property (nonatomic,copy) NSDictionary * effectParameters; 
@property (assign,nonatomic) CGSize renderSize;                                 //@synthesize renderSize=_renderSize - In the implementation block
@property (assign,nonatomic) double outputAspect; 
@property (nonatomic,readonly) BOOL renderEffectResourcesAreReady; 
+(BOOL)supportsSecureCoding;
+(BOOL)effectIDIsNone:(id)arg1 ;
+(BOOL)posterFrameCannotBeCached:(id)arg1 ;
+(double)rotationFromAffineTransform:(CGAffineTransform)arg1 ;
+(CGPoint)scaleFromAffineTransform:(CGAffineTransform)arg1 ;
+(BOOL)loopedRangeRenderCanBeCached:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)displayName;
-(void)setParameter:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isNone;
-(CGSize)renderSize;
-(NSDictionary *)effectParameters;
-(void)setRenderSize:(CGSize)arg1 ;
-(void)setEffectParameters:(NSDictionary *)arg1 ;
-(id)parameterForKey:(id)arg1 ;
-(id)accessibilityName;
-(NSString *)effectID;
-(void)setForceRenderAtPosterFrame:(BOOL)arg1 ;
-(BOOL)enablePresentationState:(BOOL)arg1 ;
-(id)renderEffect;
-(id)initWithEffectID:(id)arg1 ;
-(id)_cachedRenderEffect;
-(CGAffineTransform)transform:(CGRect)arg1 basisOrigin:(int)arg2 ;
-(CGRect)_convertRenderEffectRect:(CGRect)arg1 toBasisRect:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(void)_convertRenderEffectPoints:(CGPoint*)arg1 toBasisRect:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(void)_convertRenderEffectPoints:(CGPoint*)arg1 numPoints:(unsigned long long)arg2 toBasisRect:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(void)_convertRenderEffectPoints:(CGPoint*)arg1 numPoints:(unsigned long long)arg2 fromBasisRect:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(CGAffineTransform)_affineTransformFromEffectRect:(CGRect)arg1 toSize:(CGSize)arg2 basisOrigin:(int)arg3 ;
-(SCD_Struct_JT16)rangeForPresentationRange:(SCD_Struct_JT16)arg1 ;
-(CGAffineTransform)applyTransform:(CGAffineTransform)arg1 withComponentTime:(SCD_Struct_JT6)arg2 relativeTo:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(BOOL)renderEffectResourcesAreReady;
-(BOOL)loadRenderEffect;
-(void)setBuildInAnimation:(BOOL)arg1 ;
-(id)serializableEffectParameters;
-(BOOL)forceRenderAtPosterFrame;
-(void)setOutputAspect:(double)arg1 ;
-(BOOL)isConfiguredForOutputAspect:(double)arg1 ;
-(void)setIsInInteractiveMode:(BOOL)arg1 ;
-(BOOL)isInInteractiveMode;
-(id)parametersClassWhitelist;
-(void)_createCachedRenderEffect_noLock;
-(double)outputAspect;
-(BOOL)isConfiguredForOutputAspectMatchingSize:(CGSize)arg1 ;
-(void)setForceDisableLooping:(BOOL)arg1 ;
-(BOOL)forceDisableLooping;
-(BOOL)buildInAnimation;
-(void)setBuildOutAnimation:(BOOL)arg1 ;
-(BOOL)buildOutAnimation;
-(id)getParentTransformAnimation;
-(void)setParentTransformAnimation:(id)arg1 ;
-(void)setTransform:(id)arg1 relativeTo:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(void)setTopLevelAdditionalScale:(CGPoint)arg1 ;
-(void)removeTopLevelAdditionalScale;
@end

