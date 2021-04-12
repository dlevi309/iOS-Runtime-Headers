/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIBezierPath, UIColor, CAShapeLayer;

@interface _UIGlintyShapeView : UIView {

	UIBezierPath* _path;
	UIColor* _fillColor;
	UIColor* _strokeColor;

}

@property (nonatomic,readonly) CAShapeLayer * shapeLayer; 
@property (nonatomic,readonly) UIBezierPath * path;                    //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) UIColor * fillColor;                    //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,readonly) UIColor * strokeColor;                  //@synthesize strokeColor=_strokeColor - In the implementation block
+(Class)layerClass;
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)fillColor;
-(CAShapeLayer *)shapeLayer;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
@end

