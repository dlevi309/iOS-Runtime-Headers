/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


#import <ActionKit/ActionKit-Structs.h>
@interface WFOverlayImageTransform : NSObject {

	double _rotation;
	double _scale;
	double _opacity;
	CGPoint _center;
	CGRect _bounds;

}

@property (assign,nonatomic) CGPoint center;               //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) CGRect bounds;                //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) double rotation;              //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) double scale;                 //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double opacity;               //@synthesize opacity=_opacity - In the implementation block
-(CGRect)bounds;
-(void)setRotation:(double)arg1 ;
-(CGPoint)center;
-(id)init;
-(double)rotation;
-(double)scale;
-(double)opacity;
-(void)setBounds:(CGRect)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setScale:(double)arg1 ;
-(id)initWithCenter:(CGPoint)arg1 bounds:(CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 opacity:(double)arg5 ;
-(id)initForCenteringImage:(id)arg1 inBackgroundImage:(id)arg2 ;
-(void)applyToImageFile:(id)arg1 withOverlayImage:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

