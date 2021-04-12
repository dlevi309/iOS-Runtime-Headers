/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)contentColor;
-(CALayer *)layer;
-(UIColor *)color;
-(BOOL)shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setLayer:(CALayer *)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)_updateFilterColor;
@end

