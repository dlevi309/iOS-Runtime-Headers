/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
*/

#import <UIKitCore/UIView.h>

@class UIBezierPath, CAShapeLayer;

@interface _HKShapeView : UIView

@property (nonatomic,retain) UIBezierPath * path; 
@property (nonatomic,readonly) CAShapeLayer * shapeLayer; 
+(Class)layerClass;
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CAShapeLayer *)shapeLayer;
@end

