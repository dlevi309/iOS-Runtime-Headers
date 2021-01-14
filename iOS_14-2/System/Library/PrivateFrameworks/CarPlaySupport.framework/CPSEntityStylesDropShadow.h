/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


#import <CarPlaySupport/CarPlaySupport-Structs.h>
@class UIColor;

@interface CPSEntityStylesDropShadow : NSObject {

	UIColor* _color;
	double _radius;
	double _opacity;
	CGSize _offset;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) CGSize offset;                //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double radius;                //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double opacity;               //@synthesize opacity=_opacity - In the implementation block
-(void)setRadius:(double)arg1 ;
-(UIColor *)color;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(CGSize)offset;
-(double)radius;
-(void)setColor:(UIColor *)arg1 ;
-(void)setOffset:(CGSize)arg1 ;
-(void)applyShadowToLayer:(id)arg1 ;
-(CGRect)rectsForSource:(CGRect)arg1 shadowRect:(CGRect*)arg2 unionRect:(CGRect*)arg3 positionTransform:(CGAffineTransform*)arg4 ;
@end

