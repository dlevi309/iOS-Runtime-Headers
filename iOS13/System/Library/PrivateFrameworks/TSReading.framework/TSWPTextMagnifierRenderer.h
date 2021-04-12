/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TSWPTextMagnifierRendererDelegate;
@class CALayer;

@interface TSWPTextMagnifierRenderer : UIView {

	id<TSWPTextMagnifierRendererDelegate> _delegate;
	CALayer* _underlayLayer;
	CALayer* _canvasLayer;
	CALayer* _overlayLayer;
	int _autoscrollDirections;

}

@property (assign,nonatomic) id<TSWPTextMagnifierRendererDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int autoscrollDirections;                                    //@synthesize autoscrollDirections=_autoscrollDirections - In the implementation block
-(void)dealloc;
-(id<TSWPTextMagnifierRendererDelegate>)delegate;
-(void)setDelegate:(id<TSWPTextMagnifierRendererDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setNeedsDisplay;
-(void)setAutoscrollDirections:(int)arg1 ;
-(void)tearDown;
-(void)canvasNeedsDisplay;
-(id)p_createChildLayer;
-(int)autoscrollDirections;
@end

