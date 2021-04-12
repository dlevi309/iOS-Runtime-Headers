/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
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
+(id)focusLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)parentLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)selectedLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)selectedParentLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)layerWithStyle:(long long)arg1 kind:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setPath:(CGPathRef)arg1 ;
-(unsigned long long)kind;
-(void)setKind:(unsigned long long)arg1 ;
-(id)tintColor;
-(void)setInterfaceStyle:(long long)arg1 ;
-(void)updateAppearance;
-(long long)interfaceStyle;
-(BOOL)increaseContrast;
-(AXFKAFocusRingBorderShapeLayer *)bottomBorderLayer;
-(void)setBottomBorderLayer:(AXFKAFocusRingBorderShapeLayer *)arg1 ;
-(double)borderScale;
-(double)insetForFocusRingBorder:(id)arg1 ;
-(BOOL)useLargeRing;
-(CGColorRef)ringColorRef;
-(BOOL)useDefaultRingColor;
-(void)_updateBottomLayerPath;
-(CGColorRef)strokeColorForBottomLayer;
-(double)lineWidthForBottomLayer;
-(id)fillColorForBottomLayer;
-(id)bottomFocusRingColorForTintColor:(id)arg1 ;
@end

