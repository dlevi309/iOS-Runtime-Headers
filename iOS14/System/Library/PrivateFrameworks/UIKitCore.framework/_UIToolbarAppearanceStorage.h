/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIBarAppearanceStorage.h>

@class UIImage;

@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage {

	BOOL _hidesShadow;
	UIImage* _backgroundImage;
	UIImage* _miniBackgroundImage;
	UIImage* _topBackgroundImage;
	UIImage* _miniTopBackgroundImage;
	UIImage* _shadowImage;
	UIImage* _topShadowImage;

}

@property (nonatomic,retain) UIImage * backgroundImage;                     //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * miniBackgroundImage;                 //@synthesize miniBackgroundImage=_miniBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * topBackgroundImage;                  //@synthesize topBackgroundImage=_topBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * miniTopBackgroundImage;              //@synthesize miniTopBackgroundImage=_miniTopBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                         //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,retain) UIImage * topShadowImage;                      //@synthesize topShadowImage=_topShadowImage - In the implementation block
@property (assign,nonatomic) BOOL hidesShadow;                              //@synthesize hidesShadow=_hidesShadow - In the implementation block
+(long long)typicalBarPosition;
-(void)setHidesShadow:(BOOL)arg1 ;
-(UIImage *)topBackgroundImage;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(UIImage *)topShadowImage;
-(UIImage *)miniTopBackgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIImage *)miniBackgroundImage;
-(BOOL)hidesShadow;
-(void)setMiniBackgroundImage:(UIImage *)arg1 ;
-(void)setTopBackgroundImage:(UIImage *)arg1 ;
-(void)setTopShadowImage:(UIImage *)arg1 ;
-(UIImage *)backgroundImage;
-(void)setMiniTopBackgroundImage:(UIImage *)arg1 ;
@end

