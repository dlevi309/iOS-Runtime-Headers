/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIView.h>

@class UIBezierPath, UIColor;

@interface PXShapeView : UIView {

	UIBezierPath* _path;
	UIColor* _fillColor;

}

@property (nonatomic,copy) UIBezierPath * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
+(Class)layerClass;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)path;
-(id)shapeLayer;
@end

