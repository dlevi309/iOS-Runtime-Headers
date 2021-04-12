/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIAccessibility/AXFKAFocusRingShapeLayer.h>

@class AXFKAFocusRingBorderShapeLayer;

@interface AXFKAFocusDoubleRingShapeLayer : AXFKAFocusRingShapeLayer {

	AXFKAFocusRingBorderShapeLayer* _topBorderLayer;

}

@property (nonatomic,retain) AXFKAFocusRingBorderShapeLayer * topBorderLayer;              //@synthesize topBorderLayer=_topBorderLayer - In the implementation block
-(void)updateAppearance;
-(void)_updateTopLayerPath;
-(id)init;
-(CGColorRef)strokeColorForTopLayer;
-(id)topLayerFocusRingColorForTintColor:(id)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(AXFKAFocusRingBorderShapeLayer *)topBorderLayer;
-(void)setTopBorderLayer:(AXFKAFocusRingBorderShapeLayer *)arg1 ;
-(double)lineWidthForTopLayer;
@end

