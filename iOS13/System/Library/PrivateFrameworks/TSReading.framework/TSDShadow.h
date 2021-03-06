/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDMixing.h>
#import <TSReading/TSSPreset.h>
#import <TSReading/TSSPresetSource.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class TSUColor, NSString;

@interface TSDShadow : NSObject <TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying> {

	double mAngle;
	double mOffset;
	double mRadius;
	double mOpacity;
	CGColorRef mColor;
	BOOL mEnabled;

}

@property (nonatomic,readonly) double angle; 
@property (nonatomic,readonly) double offset; 
@property (nonatomic,readonly) CGPoint offsetDelta; 
@property (nonatomic,readonly) double radius; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) CGColorRef color; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) TSUColor * TSUColor; 
@property (nonatomic,readonly) NSString * presetKind; 
+(id)shadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(CGColorRef)arg5 enabled:(BOOL)arg6 ;
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
+(BOOL)canMixWithNilObjects;
+(id)mixableObjectClasses;
+(id)p_defaultShadowEnabled:(BOOL)arg1 ;
+(id)defaultShadow;
+(id)defaultDisabledShadow;
+(id)contactShadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 height:(double)arg4 opacity:(double)arg5 color:(CGColorRef)arg6 enabled:(BOOL)arg7 ;
+(id)shadowWithNSShadow:(id)arg1 ;
+(id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(CGColorRef)arg6 enabled:(BOOL)arg7 ;
+(id)keyPathsForValuesAffectingTSUColor;
+(BOOL)automaticallyNotifiesObserversOfTSUColor;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)mutableCopy;
-(BOOL)isEnabled;
-(CGColorRef)color;
-(double)radius;
-(double)angle;
-(double)opacity;
-(double)offset;
-(id)typeDescription;
-(BOOL)isThemeEquivalent:(id)arg1 ;
-(SEL)mapThemeAssetSelector;
-(NSString *)presetKind;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)mixedBaseObjectWithObject:(id)arg1 ;
-(id)shadowByTransformingByTransform:(CGAffineTransform)arg1 ;
-(unsigned long long)shadowType;
-(void)applyToContext:(CGContextRef)arg1 viewScale:(double)arg2 flipped:(BOOL)arg3 extraOffset:(CGSize)arg4 ;
-(CGPoint)offsetDelta;
-(CGRect)shadowBoundsForRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2 ;
-(double)clampOffset:(double)arg1 ;
-(double)clampRadius:(double)arg1 ;
-(double)clampOpacity:(double)arg1 ;
-(id)newShadowClampedForSwatches;
-(BOOL)isContactShadow;
-(BOOL)isDropShadow;
-(BOOL)isCurvedShadow;
-(BOOL)showForEditingText;
-(TSUColor *)TSUColor;
-(void)applyToContext:(CGContextRef)arg1 viewScale:(double)arg2 ;
-(void)applyToContext:(CGContextRef)arg1 viewScale:(double)arg2 flipped:(BOOL)arg3 ;
-(CGRect)boundsInNaturalSpaceForRep:(id)arg1 ;
-(CGRect)boundsForRep:(id)arg1 ;
-(CGImageRef)newShadowImageForRep:(id)arg1 withSize:(CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4 ;
-(CGRect)shadowBoundsForRect:(CGRect)arg1 ;
-(CGRect)shadowBoundsForRect:(CGRect)arg1 additionalAngle:(double)arg2 ;
-(BOOL)differenceRequiresRebuilding:(id)arg1 ;
-(id)NSShadow;
-(id)i_initWithOpacity:(double)arg1 color:(CGColorRef)arg2 enabled:(BOOL)arg3 ;
-(CGImageRef)i_newEmptyImageWithSize:(CGSize)arg1 ;
@end

