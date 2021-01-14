/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)bounds;
-(CGPoint)position;
-(float)opacity;
-(void)setBounds:(CGRect)arg1 ;
-(void)setOpacity:(float)arg1 ;
-(void)setTransform:(CATransform3D)arg1 ;
-(CATransform3D)transform;
-(void)setPosition:(CGPoint)arg1 ;
-(id)initWithDeviceMaskImage:(id)arg1 solidColor:(id)arg2 ;
-(id)initWithDeviceMaskImage:(id)arg1 ;
-(void)update:(double)arg1 visibility:(double)arg2 layer:(id)arg3 renderParams:(SCD_Struct_AR19)arg4 ;
-(void)setLayerParent:(id)arg1 ;
@end

