/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class AXFKAFocusRingBorderShapeLayer;

@interface AXFKAFocusRingShapeLayer : CAShapeLayer {

	AXFKAFocusRingBorderShapeLayer* _bottomBorderLayer;
	unsigned long long _kind;
	long long _interfaceStyle;

}

@property (nonatomic,retain) AXFKAFocusRingBorderShapeLayer * bottomBorderLayer;              //@synthesize bottomBorderLayer=_bottomBorderLayer - In the implementation block
@property (nonatomic,readonly) CGColorRef ringColorRef; 
@property (nonatomic,readonly) BOOL useLargeRing; 
@property (nonatomic,readonly) BOOL increaseContrast; 
@property (nonatomic,readonly) BOOL useDefaultRingColor; 
@property (assign,nonatomic) unsigned long long kind;                                         //@synthesize kind=_kind - In the implementation block
@property (assign,nonatomic) long long interfaceStyle;                                        //@synthesize interfaceStyle=_interfaceStyle - In the implementation block
+(id)layerWithStyle:(long long)arg1 kind:(unsigned long long)arg2 ;
+(id)focusLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)parentLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)selectedLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)selectedParentLayerForUserInterfaceStyle:(long long)arg1 ;
-(void)setInterfaceStyle:(long long)arg1 ;
-(void)updateAppearance;
-(BOOL)useDefaultRingColor;
-(id)init;
-(double)insetForFocusRingBorder:(id)arg1 ;
-(BOOL)increaseContrast;
-(void)setBottomBorderLayer:(AXFKAFocusRingBorderShapeLayer *)arg1 ;
-(void)_updateBottomLayerPath;
-(CGColorRef)strokeColorForBottomLayer;
-(double)lineWidthForBottomLayer;
-(id)fillColorForBottomLayer;
-(id)bottomFocusRingColorForTintColor:(id)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(double)borderScale;
-(unsigned long long)kind;
-(long long)interfaceStyle;
-(void)setKind:(unsigned long long)arg1 ;
-(AXFKAFocusRingBorderShapeLayer *)bottomBorderLayer;
-(BOOL)useLargeRing;
-(id)tintColor;
-(CGColorRef)ringColorRef;
-(void)dealloc;
@end

