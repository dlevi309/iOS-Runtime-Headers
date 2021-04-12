/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class CALayer, UIColor;

@interface _NTKColorManager : NSObject {

	CALayer* _layer;
	UIColor* _color;

}

@property (nonatomic,retain) CALayer * layer;                       //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(UIColor *)contentColor;
-(BOOL)shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_updateFilterColor;
@end

