/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class UIColor;

@interface LPShadowStyle : NSObject {

	double _radius;
	double _opacity;
	UIColor* _color;

}

@property (assign,nonatomic) double radius;                //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double opacity;               //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
+(id)cardHeadingIconShadow;
-(void)setRadius:(double)arg1 ;
-(id)init;
-(UIColor *)color;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(double)radius;
-(void)setColor:(UIColor *)arg1 ;
@end

