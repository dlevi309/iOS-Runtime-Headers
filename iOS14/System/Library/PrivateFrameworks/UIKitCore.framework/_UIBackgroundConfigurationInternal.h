/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView, UIColor, UIVisualEffect;


@protocol _UIBackgroundConfigurationInternal <NSObject,NSCopying>
@property (nonatomic,retain) UIView * customView; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) NSDirectionalEdgeInsets backgroundInsets; 
@property (assign,nonatomic) unsigned long long edgesAddingLayoutMarginsToBackgroundInsets; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,copy) UIVisualEffect * visualEffect; 
@property (nonatomic,retain) UIColor * strokeColor; 
@property (assign,nonatomic) double strokeWidth; 
@property (assign,nonatomic) double strokeOutset; 
@property (assign,setter=_setMaskedCorners:,getter=_maskedCorners,nonatomic) unsigned long long maskedCorners; 
@property (assign,setter=_setCornerRadius:,nonatomic) double _cornerRadius; 
@property (assign,setter=_setShadowType:,nonatomic) long long _shadowType; 
@property (getter=_hasBackgroundColor,nonatomic,readonly) BOOL hasBackgroundColor; 
@property (getter=_hasStroke,nonatomic,readonly) BOOL hasStroke; 
@property (getter=_hasBackgroundFill,nonatomic,readonly) BOOL hasBackgroundFill; 
@required
-(void)setVisualEffect:(id)arg1;
-(UIColor *)strokeColor;
-(UIVisualEffect *)visualEffect;
-(unsigned long long)_maskedCorners;
-(id)resolvedBackgroundColorForTintColor:(id)arg1;
-(NSDirectionalEdgeInsets)backgroundInsets;
-(BOOL)_hasStroke;
-(void)_setMaskedCorners:(unsigned long long)arg1;
-(id)resolvedStrokeColorForTintColor:(id)arg1;
-(double)_cornerRadius;
-(BOOL)_hasBackgroundFill;
-(void)setBackgroundColor:(id)arg1;
-(void)setEdgesAddingLayoutMarginsToBackgroundInsets:(unsigned long long)arg1;
-(UIColor *)backgroundColor;
-(double)cornerRadius;
-(void)_setShadowType:(long long)arg1;
-(BOOL)_hasBackgroundColor;
-(BOOL)_backgroundFillIsEqual:(id)arg1 withTintColor:(id)arg2;
-(void)setBackgroundInsets:(NSDirectionalEdgeInsets)arg1;
-(UIView *)customView;
-(id)_updatedConfigurationForState:(id)arg1;
-(void)setCustomView:(id)arg1;
-(double)strokeWidth;
-(void)setStrokeColor:(id)arg1;
-(void)_setCornerRadius:(double)arg1;
-(void)setStrokeOutset:(double)arg1;
-(long long)_shadowType;
-(void)setCornerRadius:(double)arg1;
-(void)setStrokeWidth:(double)arg1;
-(double)strokeOutset;
-(unsigned long long)edgesAddingLayoutMarginsToBackgroundInsets;

@end

