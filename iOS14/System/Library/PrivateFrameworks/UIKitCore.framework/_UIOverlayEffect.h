/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIVisualEffect.h>

@class NSString, UIImage, UIColor;

@interface _UIOverlayEffect : UIVisualEffect {

	NSString* _filterType;
	UIImage* _image;
	UIColor* _color;
	double _alpha;

}

@property (nonatomic,copy) NSString * filterType;              //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,retain) UIImage * image;                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) UIColor * color;                    //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double alpha;                     //@synthesize alpha=_alpha - In the implementation block
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(double)alpha;
-(UIColor *)color;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)image;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
@end

