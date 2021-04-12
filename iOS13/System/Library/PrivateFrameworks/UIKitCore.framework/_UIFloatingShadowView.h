/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setShadowRadius:(double)arg1 ;
-(CGSize)shadowSize;
-(void)setShadowSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(void)layoutSubviews;
-(void)setShadowExpansion:(double)arg1 ;
-(void)setShadowVerticalOffset:(double)arg1 ;
-(void)setShadowContentsCenter:(CGRect)arg1 ;
-(void)setShadowEnabled:(BOOL)arg1 ;
-(void)_updateShadowLayer;
-(double)cornerRadius;
-(void)_setShadowImageIfNeeded;
-(void)_layoutShadow;
-(BOOL)isShadowEnabled;
-(double)shadowExpansion;
-(BOOL)_disableOutsetShadowPath;
-(CGPathRef)_shadowPathForSize:(CGSize)arg1 radius:(double)arg2 ;
-(UIImage *)shadowImage;
-(CGRect)shadowContentsCenter;
-(void)setShadowImage:(UIImage *)arg1 ;
-(double)shadowOpacity;
-(double)shadowVerticalOffset;
-(void)set_disableOutsetShadowPath:(BOOL)arg1 ;
@end

