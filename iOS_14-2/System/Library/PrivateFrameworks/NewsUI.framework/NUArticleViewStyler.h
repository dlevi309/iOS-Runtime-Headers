/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleViewStyler.h>
@class UIColor;


@protocol NUArticleViewStyler
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) long long topBackgroundStatusBarStyle; 
@required
-(UIColor *)backgroundColor;
-(long long)statusBarStyle;
-(void)styleToolbar:(id)arg1;
-(void)styleTabBar:(id)arg1;
-(void)unstyleTabBar:(id)arg1 overrideRestoreColor:(id)arg2;
-(void)unstyleToolbar:(id)arg1 overrideRestoreColor:(id)arg2;
-(long long)topBackgroundStatusBarStyle;

@end


@class UIColor;

@interface NUArticleViewStyler : NSObject <NUArticleViewStyler> {

	UIColor* _backgroundColor;
	long long _statusBarStyle;
	long long _topBackgroundStatusBarStyle;
	UIColor* _tabBarTintColor;
	UIColor* _toolbarTintColor;

}

@property (nonatomic,retain) UIColor * tabBarTintColor;                            //@synthesize tabBarTintColor=_tabBarTintColor - In the implementation block
@property (nonatomic,retain) UIColor * toolbarTintColor;                           //@synthesize toolbarTintColor=_toolbarTintColor - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) long long statusBarStyle;                           //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (nonatomic,readonly) long long topBackgroundStatusBarStyle;              //@synthesize topBackgroundStatusBarStyle=_topBackgroundStatusBarStyle - In the implementation block
-(UIColor *)toolbarTintColor;
-(UIColor *)backgroundColor;
-(long long)statusBarStyle;
-(void)setToolbarTintColor:(UIColor *)arg1 ;
-(void)styleToolbar:(id)arg1 ;
-(void)styleTabBar:(id)arg1 ;
-(long long)statusBarStyleForBackgroundColor:(id)arg1 ;
-(UIColor *)tabBarTintColor;
-(void)setTabBarTintColor:(UIColor *)arg1 ;
-(void)unstyleTabBar:(id)arg1 overrideRestoreColor:(id)arg2 ;
-(void)unstyleToolbar:(id)arg1 overrideRestoreColor:(id)arg2 ;
-(long long)topBackgroundStatusBarStyle;
-(id)initWithBackgroundColor:(id)arg1 topBackgroundColor:(id)arg2 ;
@end

