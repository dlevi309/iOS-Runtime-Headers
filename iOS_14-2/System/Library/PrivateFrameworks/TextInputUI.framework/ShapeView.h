/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <UIKitCore/UIView.h>

@class UIBezierPath, CAShapeLayer;

@interface ShapeView : UIView {

	UIBezierPath* _path;

}

@property (nonatomic,retain) UIBezierPath * path;                      //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * shapeLayer; 
+(Class)layerClass;
-(void)setPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)path;
-(CAShapeLayer *)shapeLayer;
@end

