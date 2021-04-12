/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@class CALayer;

@interface ARCoachingDeviceController : NSObject {

	CALayer* _deviceLayer;
	CALayer* _holeLayer;
	CALayer* _shineLayer;
	CALayer* _deviceMaskLayer;
	CALayer* _shineInnerLayer;
	double _aspectRatio;

}

@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) CATransform3D transform; 
@property (assign,nonatomic) float opacity; 
-(CATransform3D)transform;
-(CGPoint)position;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setTransform:(CATransform3D)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(id)initWithDeviceMaskImage:(id)arg1 solidColor:(id)arg2 ;
-(id)initWithDeviceMaskImage:(id)arg1 ;
-(void)update:(double)arg1 visibility:(double)arg2 layer:(id)arg3 renderParams:(SCD_Struct_AR172)arg4 ;
-(void)setLayerParent:(id)arg1 ;
@end

