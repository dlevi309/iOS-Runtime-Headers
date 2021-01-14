/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/


#import <MobileTimerUI/MobileTimerUI-Structs.h>
@class UIColor;

@interface MTUIShadowInfo : NSObject {

	UIColor* _color;
	double _radius;
	double _scale;
	CGSize _offset;

}

@property (nonatomic,copy) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double radius;              //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) CGSize offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double scale;               //@synthesize scale=_scale - In the implementation block
-(void)setRadius:(double)arg1 ;
-(UIColor *)color;
-(double)scale;
-(CGSize)offset;
-(double)radius;
-(void)setColor:(UIColor *)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setOffset:(CGSize)arg1 ;
-(id)initWithColor:(id)arg1 radius:(double)arg2 offset:(CGSize)arg3 scale:(double)arg4 ;
@end

