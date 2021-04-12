/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIPointerEffect, UIPointerShape, UITargetedPreview;

@interface UIPointerStyle : NSObject <NSCopying> {

	BOOL _determineScaleAutomatically;
	BOOL _suppressesMirroring;
	long long _type;
	unsigned long long _options;
	unsigned long long _constrainedAxes;
	UIPointerEffect* _effect;
	UIPointerShape* _pointerShape;

}

@property (assign,nonatomic) long long type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long constrainedAxes;                 //@synthesize constrainedAxes=_constrainedAxes - In the implementation block
@property (nonatomic,readonly) UITargetedPreview * targetedPreview; 
@property (nonatomic,retain) UIPointerEffect * effect;                           //@synthesize effect=_effect - In the implementation block
@property (nonatomic,retain) UIPointerShape * pointerShape;                      //@synthesize pointerShape=_pointerShape - In the implementation block
@property (nonatomic,readonly) double contentScale; 
@property (nonatomic,readonly) BOOL pointerUnderlapsContent; 
@property (assign,nonatomic) BOOL _suppressesMirroring;                          //@synthesize suppressesMirroring=_suppressesMirroring - In the implementation block
+(id)styleWithEffect:(id)arg1 shape:(id)arg2 ;
+(id)hiddenPointerStyle;
+(id)styleWithShape:(id)arg1 constrainedAxes:(unsigned long long)arg2 ;
+(id)_systemPointerStyle;
-(void)setEffect:(UIPointerEffect *)arg1 ;
-(UIPointerEffect *)effect;
-(CGPoint)_contentSlipMappedToRegionSize:(CGSize)arg1 ;
-(CGPoint)_pointerSlipMappedToRegionSize:(CGSize)arg1 ;
-(BOOL)_suppressesMirroring;
-(void)setPointerShape:(UIPointerShape *)arg1 ;
-(BOOL)pointerUnderlapsContent;
-(double)_pointerIntensityForMaterialLuminance:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(void)setType:(long long)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(UIPointerShape *)pointerShape;
-(CGPoint)_pointerSlipFactor;
-(CGPoint)_contentSlipFactor;
-(void)set_suppressesMirroring:(BOOL)arg1 ;
-(BOOL)_canTransitionInPlaceToStyle:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)contentScale;
-(UITargetedPreview *)targetedPreview;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)constrainedAxes;
-(void)setConstrainedAxes:(unsigned long long)arg1 ;
@end

