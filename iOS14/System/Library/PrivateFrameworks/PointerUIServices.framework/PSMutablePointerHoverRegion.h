/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PointerUIServices.framework/PointerUIServices
*/

#import <PointerUIServices/PointerUIServices-Structs.h>
#import <PointerUIServices/PSPointerHoverRegion.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSValue, PSMatchMoveSource, PSPointerPortalSourceCollection, PSPointerShape;

@interface PSMutablePointerHoverRegion : PSPointerHoverRegion <NSCopying, NSMutableCopying, NSSecureCoding>

@property (assign,nonatomic) unsigned coordinateSpaceSourceContextID; 
@property (assign,nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID; 
@property (assign,nonatomic) CGRect contentBounds; 
@property (assign,nonatomic) double contentHoverInverseScale; 
@property (nonatomic,copy) NSValue * contentSlipValue; 
@property (nonatomic,copy) PSMatchMoveSource * contentMatchMoveSource; 
@property (assign,nonatomic) CGRect hitTestBounds; 
@property (assign,getter=isOverlayEffectVisible,nonatomic) BOOL overlayEffectVisible; 
@property (assign,nonatomic) long long overlayEffectStyle; 
@property (nonatomic,copy) PSPointerPortalSourceCollection * pointerPortalSourceCollection; 
@property (assign,nonatomic) unsigned long long pointerRecenteringAxes; 
@property (nonatomic,copy) PSPointerShape * pointerShape; 
@property (nonatomic,copy) NSValue * pointerSlipValue; 
@property (assign,nonatomic) double pointerVisualIntensity; 
@property (assign,nonatomic) unsigned long long preferredPointerMaterialLuminance; 
@property (assign,nonatomic) BOOL shouldPointerUnderlayContent; 
@property (assign,nonatomic) BOOL shouldPointerSuppressMirroring; 
-(void)setContentSlipValue:(NSValue *)arg1 ;
-(void)setContentHoverInverseScale:(double)arg1 ;
-(void)setPointerRecenteringAxes:(unsigned long long)arg1 ;
-(void)setPointerSlipValue:(NSValue *)arg1 ;
-(void)setPointerShape:(PSPointerShape *)arg1 ;
-(void)setShouldPointerSuppressMirroring:(BOOL)arg1 ;
-(void)setContentBounds:(CGRect)arg1 ;
-(void)setShouldPointerUnderlayContent:(BOOL)arg1 ;
-(void)setOverlayEffectStyle:(long long)arg1 ;
-(void)setPointerVisualIntensity:(double)arg1 ;
-(void)setPreferredPointerMaterialLuminance:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setCoordinateSpaceSourceContextID:(unsigned)arg1 ;
-(void)setCoordinateSpaceSourceLayerRenderID:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentMatchMoveSource:(PSMatchMoveSource *)arg1 ;
-(void)setPointerPortalSourceCollection:(PSPointerPortalSourceCollection *)arg1 ;
-(void)setHitTestBounds:(CGRect)arg1 ;
-(void)setOverlayEffectVisible:(BOOL)arg1 ;
@end

