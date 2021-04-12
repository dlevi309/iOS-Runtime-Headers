/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIPointerEffect, UIPointerShape, UITargetedPreview;

@interface UIPointerStyle : NSObject <NSCopying> {

	BOOL _determineScaleAutomatically;
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
+(id)styleWithEffect:(id)arg1 shape:(id)arg2 ;
+(id)styleWithShape:(id)arg1 constrainedAxes:(unsigned long long)arg2 ;
+(id)hiddenPointerStyle;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setEffect:(UIPointerEffect *)arg1 ;
-(UIPointerEffect *)effect;
-(UITargetedPreview *)targetedPreview;
-(UIPointerShape *)pointerShape;
-(void)setConstrainedAxes:(unsigned long long)arg1 ;
-(CGPoint)_contentSlipMappedToRegionSize:(CGSize)arg1 ;
-(CGPoint)_pointerSlipMappedToRegionSize:(CGSize)arg1 ;
-(double)contentScale;
-(unsigned long long)constrainedAxes;
-(void)setPointerShape:(UIPointerShape *)arg1 ;
-(BOOL)pointerUnderlapsContent;
-(double)_pointerIntensityForMaterialLuminance:(unsigned long long)arg1 ;
-(CGPoint)_pointerSlipFactor;
-(CGPoint)_contentSlipFactor;
-(BOOL)_canTransitionInPlaceToStyle:(id)arg1 ;
@end

