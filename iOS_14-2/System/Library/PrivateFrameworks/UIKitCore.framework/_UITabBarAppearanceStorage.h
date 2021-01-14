/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIImage, UIColor, _UITabBarItemAppearanceStorage;

@interface _UITabBarAppearanceStorage : NSObject {

	UIImage* backgroundImage;
	UIImage* shadowImage;
	UIImage* selectionIndicatorImage;
	UIColor* barTintColor;
	UIColor* selectedImageTintColor;
	_UITabBarItemAppearanceStorage* tabItemAppearanceStorage;
	UIColor* _unselectedImageTintColor;

}

@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (nonatomic,retain) UIImage * selectionIndicatorImage; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) UIColor * selectedImageTintColor; 
@property (nonatomic,retain) UIColor * unselectedImageTintColor;                                     //@synthesize unselectedImageTintColor=_unselectedImageTintColor - In the implementation block
@property (nonatomic,retain) _UITabBarItemAppearanceStorage * tabItemAppearanceStorage; 
-(UIImage *)selectionIndicatorImage;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(void)setSelectedImageTintColor:(UIColor *)arg1 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(UIColor *)unselectedImageTintColor;
-(_UITabBarItemAppearanceStorage *)tabItemAppearanceStorage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIColor *)selectedImageTintColor;
-(void)setTabItemAppearanceStorage:(_UITabBarItemAppearanceStorage *)arg1 ;
-(void)setUnselectedImageTintColor:(UIColor *)arg1 ;
-(UIImage *)backgroundImage;
-(id)_tabItemAppearanceStorage;
-(UIColor *)barTintColor;
@end

