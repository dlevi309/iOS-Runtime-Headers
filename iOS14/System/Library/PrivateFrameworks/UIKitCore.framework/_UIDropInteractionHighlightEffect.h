/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDropInteractionEffect.h>

@class UIColor, CAShapeLayer, NSString;

@interface _UIDropInteractionHighlightEffect : NSObject <UIDropInteractionEffect> {

	long long _visualState;
	double _highlightWidth;
	double _cornerRadius;
	double _highlightInset;
	UIColor* _highlightColor;
	CAShapeLayer* _shapeLayer;

}

@property (nonatomic,retain) CAShapeLayer * shapeLayer;              //@synthesize shapeLayer=_shapeLayer - In the implementation block
@property (assign,nonatomic) double highlightWidth;                  //@synthesize highlightWidth=_highlightWidth - In the implementation block
@property (assign,nonatomic) double cornerRadius;                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double highlightInset;                  //@synthesize highlightInset=_highlightInset - In the implementation block
@property (nonatomic,copy) UIColor * highlightColor;                 //@synthesize highlightColor=_highlightColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)cornerRadius;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(CAShapeLayer *)shapeLayer;
-(double)highlightWidth;
-(double)highlightInset;
-(void)setShapeLayer:(CAShapeLayer *)arg1 ;
-(CGRect)clippingRectInView:(id)arg1 forView:(id)arg2 ;
-(CGRect)highlightRectInView:(id)arg1 forDragInteraction:(id)arg2 withContext:(id)arg3 ;
-(id)updateShapeLayerForFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)removeShapeLayer;
-(void)setHighlightWidth:(double)arg1 ;
-(void)setHighlightInset:(double)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIColor *)highlightColor;
-(void)dealloc;
@end

