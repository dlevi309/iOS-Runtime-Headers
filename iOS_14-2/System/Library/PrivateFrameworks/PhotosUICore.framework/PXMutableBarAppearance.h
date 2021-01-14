/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class UIColor;


@protocol PXMutableBarAppearance <NSObject>
@property (assign,nonatomic) BOOL prefersStatusBarVisible; 
@property (assign,nonatomic) long long barAppearancePreferredStatusBarStyle; 
@property (assign,nonatomic) BOOL prefersNavigationBarVisible; 
@property (assign,nonatomic) BOOL prefersToolbarVisible; 
@property (assign,nonatomic) BOOL prefersTabBarVisible; 
@property (nonatomic,copy) UIColor * navigationBarTintColor; 
@required
-(BOOL)prefersNavigationBarVisible;
-(BOOL)prefersToolbarVisible;
-(BOOL)prefersTabBarVisible;
-(void)setNavigationBarTintColor:(id)arg1;
-(void)setPrefersStatusBarVisible:(BOOL)arg1;
-(void)setPrefersNavigationBarVisible:(BOOL)arg1;
-(void)setPrefersToolbarVisible:(BOOL)arg1;
-(void)setPrefersTabBarVisible:(BOOL)arg1;
-(BOOL)prefersStatusBarVisible;
-(long long)barAppearancePreferredStatusBarStyle;
-(void)setBarAppearancePreferredStatusBarStyle:(long long)arg1;
-(UIColor *)navigationBarTintColor;

@end

