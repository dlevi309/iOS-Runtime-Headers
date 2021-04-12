/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUControlAppearance, NSMutableDictionary, NSDictionary, SUTabBarAppearance, SUToolbarAppearance;

@interface SUUIAppearance : NSObject <NSCopying> {

	SUControlAppearance* _backButtonAppearance;
	SUControlAppearance* _confirmationButtonAppearance;
	SUControlAppearance* _destructiveButtonAppearance;
	SUControlAppearance* _exitStoreButtonAppearance;
	SUControlAppearance* _forwardButtonAppearance;
	BOOL _isDefaultAppearance;
	NSMutableDictionary* _navigationBarBackgroundImages;
	NSDictionary* _navigationBarTitleTextAttributes;
	NSMutableDictionary* _navigationButtonAppearance;
	NSMutableDictionary* _segmentedControlAppearance;
	SUTabBarAppearance* _tabBarAppearance;
	SUToolbarAppearance* _toolbarAppearance;

}

@property (nonatomic,copy) SUControlAppearance * backButtonAppearance;                      //@synthesize backButtonAppearance=_backButtonAppearance - In the implementation block
@property (nonatomic,copy) SUControlAppearance * confirmationButtonAppearance;              //@synthesize confirmationButtonAppearance=_confirmationButtonAppearance - In the implementation block
@property (nonatomic,copy) SUControlAppearance * destructiveButtonAppearance;               //@synthesize destructiveButtonAppearance=_destructiveButtonAppearance - In the implementation block
@property (nonatomic,copy) SUControlAppearance * exitStoreButtonAppearance;                 //@synthesize exitStoreButtonAppearance=_exitStoreButtonAppearance - In the implementation block
@property (nonatomic,copy) SUControlAppearance * forwardButtonAppearance;                   //@synthesize forwardButtonAppearance=_forwardButtonAppearance - In the implementation block
@property (nonatomic,copy) NSDictionary * navigationBarTitleTextAttributes;                 //@synthesize navigationBarTitleTextAttributes=_navigationBarTitleTextAttributes - In the implementation block
@property (nonatomic,copy) SUTabBarAppearance * tabBarAppearance;                           //@synthesize tabBarAppearance=_tabBarAppearance - In the implementation block
@property (nonatomic,copy) SUToolbarAppearance * toolbarAppearance;                         //@synthesize toolbarAppearance=_toolbarAppearance - In the implementation block
+(id)defaultAppearance;
+(id)_defaultTabBarAppearance;
+(id)_defaultShadowWithColor:(id)arg1 offset:(CGSize)arg2 ;
+(id)_defaultBackButtonAppearance;
+(id)_defaultConfirmationButtonAppearance;
+(id)_defaultDestructiveButtonAppearance;
+(id)_defaultForwardButtonAppearance;
+(id)_defaultButtonAppearance;
+(id)_defaultDoneButtonAppearance;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SUControlAppearance *)backButtonAppearance;
-(void)setBackButtonAppearance:(SUControlAppearance *)arg1 ;
-(void)styleBarButtonItem:(id)arg1 ;
-(SUTabBarAppearance *)tabBarAppearance;
-(void)styleNavigationBar:(id)arg1 ;
-(void)styleTabBarItem:(id)arg1 ;
-(void)styleExitStoreButtonItem:(id)arg1 ;
-(void)styleToolbar:(id)arg1 ;
-(void)_styleBackBarButtonItem:(id)arg1 ;
-(void)styleConfirmationButtonItem:(id)arg1 ;
-(void)styleSegmentedControl:(id)arg1 tintStyle:(long long)arg2 ;
-(void)setNavigationBarBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2 ;
-(void)setTabBarAppearance:(SUTabBarAppearance *)arg1 ;
-(void)setNavigationBarTitleTextAttributes:(NSDictionary *)arg1 ;
-(void)setNavigationButtonAppearance:(id)arg1 forStyle:(long long)arg2 ;
-(id)_copySegmentedControlKeyWithStyle:(long long)arg1 tintStyle:(long long)arg2 ;
-(void)setSegmentedControlAppearance:(id)arg1 forStyle:(long long)arg2 tintStyle:(long long)arg3 ;
-(id)navigationButtonAppearanceForStyle:(long long)arg1 ;
-(SUControlAppearance *)confirmationButtonAppearance;
-(SUControlAppearance *)destructiveButtonAppearance;
-(NSDictionary *)navigationBarTitleTextAttributes;
-(id)segmentedControlAppearanceForStyle:(long long)arg1 tintStyle:(long long)arg2 ;
-(SUToolbarAppearance *)toolbarAppearance;
-(SUControlAppearance *)exitStoreButtonAppearance;
-(SUControlAppearance *)forwardButtonAppearance;
-(id)navigationBarBackgroundImageForBarMetrics:(long long)arg1 ;
-(void)styleDestructiveButton:(id)arg1 ;
-(void)styleForwardButtonItem:(id)arg1 ;
-(void)styleTabBar:(id)arg1 ;
-(void)setConfirmationButtonAppearance:(SUControlAppearance *)arg1 ;
-(void)setDestructiveButtonAppearance:(SUControlAppearance *)arg1 ;
-(void)setExitStoreButtonAppearance:(SUControlAppearance *)arg1 ;
-(void)setForwardButtonAppearance:(SUControlAppearance *)arg1 ;
-(void)setToolbarAppearance:(SUToolbarAppearance *)arg1 ;
@end

