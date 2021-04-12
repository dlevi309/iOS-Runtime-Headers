/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(void)setTabItemAppearanceStorage:(_UITabBarItemAppearanceStorage *)arg1 ;
-(_UITabBarItemAppearanceStorage *)tabItemAppearanceStorage;
-(id)_tabItemAppearanceStorage;
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(UIColor *)selectedImageTintColor;
-(void)setSelectedImageTintColor:(UIColor *)arg1 ;
-(UIColor *)unselectedImageTintColor;
-(void)setUnselectedImageTintColor:(UIColor *)arg1 ;
@end

