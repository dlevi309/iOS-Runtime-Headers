/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/AXFKAFocusRingShapeLayer.h>

@class AXFKAFocusRingBorderShapeLayer;

@interface AXFKAFocusDoubleRingShapeLayer : AXFKAFocusRingShapeLayer {

	AXFKAFocusRingBorderShapeLayer* _topBorderLayer;

}

@property (nonatomic,retain) AXFKAFocusRingBorderShapeLayer * topBorderLayer;              //@synthesize topBorderLayer=_topBorderLayer - In the implementation block
-(id)init;
-(void)setPath:(CGPathRef)arg1 ;
-(void)updateAppearance;
-(AXFKAFocusRingBorderShapeLayer *)topBorderLayer;
-(void)setTopBorderLayer:(AXFKAFocusRingBorderShapeLayer *)arg1 ;
-(void)_updateTopLayerPath;
-(double)lineWidthForTopLayer;
-(CGColorRef)strokeColorForTopLayer;
-(id)topLayerFocusRingColorForTintColor:(id)arg1 ;
@end

