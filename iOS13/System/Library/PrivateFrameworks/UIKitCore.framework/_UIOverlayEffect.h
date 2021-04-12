/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)color;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(double)alpha;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
@end

