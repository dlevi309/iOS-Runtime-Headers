/*
* Generated on Thursday, January 14, 2021 at 2:29:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class CAShapeLayer;

@interface AXSFFocusRingShapeLayer : CAShapeLayer {

	CAShapeLayer* _innerBorder;
	CAShapeLayer* _outerBorder;

}

@property (nonatomic,retain) CAShapeLayer * innerBorder;              //@synthesize innerBorder=_innerBorder - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerBorder;              //@synthesize outerBorder=_outerBorder - In the implementation block
+(id)layer;
+(id)focusLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)parentLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)selectedLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)selectedParentLayerForUserInterfaceStyle:(long long)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setInnerBorder:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)innerBorder;
-(void)setOuterBorder:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)outerBorder;
@end

