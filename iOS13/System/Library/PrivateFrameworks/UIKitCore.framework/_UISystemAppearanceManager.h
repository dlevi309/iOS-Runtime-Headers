/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@class UIWindowScene, NSString, UIScene;

@interface _UISystemAppearanceManager : NSObject <_UISceneComponentProviding> {

	BOOL _homeIndicatorAutoHidden;
	unsigned long long _screenEdgesDeferringSystemGestures;
	long long _userInterfaceStyle;
	long long _whitePointAdaptivityStyle;
	UIWindowScene* _windowScene;

}

@property (nonatomic,retain) UIWindowScene * windowScene;                                          //@synthesize windowScene=_windowScene - In the implementation block
@property (nonatomic,readonly) BOOL homeIndicatorAutoHidden;                                       //@synthesize homeIndicatorAutoHidden=_homeIndicatorAutoHidden - In the implementation block
@property (nonatomic,readonly) unsigned long long screenEdgesDeferringSystemGestures;              //@synthesize screenEdgesDeferringSystemGestures=_screenEdgesDeferringSystemGestures - In the implementation block
@property (nonatomic,readonly) long long userInterfaceStyle;                                       //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (nonatomic,readonly) long long whitePointAdaptivityStyle;                                //@synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene; 
-(long long)userInterfaceStyle;
-(void)setWindowScene:(UIWindowScene *)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(UIWindowScene *)windowScene;
-(void)updateScreenEdgesDeferringSystemGestures;
-(void)updateHomeIndicatorAutoHidden;
-(void)updateUserInterfaceStyle;
-(void)updateWhitePointAdaptivityStyle;
-(BOOL)homeIndicatorAutoHidden;
-(unsigned long long)screenEdgesDeferringSystemGestures;
-(long long)whitePointAdaptivityStyle;
@end

