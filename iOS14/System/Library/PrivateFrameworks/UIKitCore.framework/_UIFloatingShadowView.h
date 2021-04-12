/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImage;

@interface _UIFloatingShadowView : UIView {

	UIView* _shadowView;
	CATransform3D _shadowTransform;
	BOOL _shadowEnabled;
	BOOL __disableOutsetShadowPath;
	double _shadowRadius;
	double _shadowOpacity;
	double _shadowVerticalOffset;
	double _shadowExpansion;
	UIImage* _shadowImage;
	double _cornerRadius;
	CGSize _shadowSize;
	CGRect _shadowContentsCenter;

}

@property (assign,getter=isShadowEnabled,nonatomic) BOOL shadowEnabled;              //@synthesize shadowEnabled=_shadowEnabled - In the implementation block
@property (assign,nonatomic) CGSize shadowSize;                                      //@synthesize shadowSize=_shadowSize - In the implementation block
@property (assign,nonatomic) double shadowRadius;                                    //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) double shadowOpacity;                                   //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) double shadowVerticalOffset;                            //@synthesize shadowVerticalOffset=_shadowVerticalOffset - In the implementation block
@property (assign,nonatomic) double shadowExpansion;                                 //@synthesize shadowExpansion=_shadowExpansion - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                                  //@synthesize shadowImage=_shadowImage - In the implementation block
@property (assign,nonatomic) CGRect shadowContentsCenter;                            //@synthesize shadowContentsCenter=_shadowContentsCenter - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL _disableOutsetShadowPath;                          //@synthesize _disableOutsetShadowPath=__disableOutsetShadowPath - In the implementation block
+(Class)layerClass;
-(double)shadowRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)shadowImage;
-(double)shadowOpacity;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(double)cornerRadius;
-(void)layoutSubviews;
-(CGSize)shadowSize;
-(void)_layoutShadow;
-(void)setShadowVerticalOffset:(double)arg1 ;
-(void)setShadowSize:(CGSize)arg1 ;
-(BOOL)isShadowEnabled;
-(double)shadowExpansion;
-(void)setCornerRadius:(double)arg1 ;
-(void)set_disableOutsetShadowPath:(BOOL)arg1 ;
-(void)setShadowExpansion:(double)arg1 ;
-(CGPathRef)_shadowPathForSize:(CGSize)arg1 radius:(double)arg2 ;
-(double)shadowVerticalOffset;
-(void)setShadowEnabled:(BOOL)arg1 ;
-(void)_setShadowImageIfNeeded;
-(BOOL)_disableOutsetShadowPath;
-(void)_updateShadowLayer;
-(void)setShadowContentsCenter:(CGRect)arg1 ;
-(CGRect)shadowContentsCenter;
@end

