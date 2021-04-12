/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
@end

