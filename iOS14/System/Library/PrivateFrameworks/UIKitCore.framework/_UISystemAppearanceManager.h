/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@class NSArray, UIWindowScene, UIScene, NSString;

@interface _UISystemAppearanceManager : NSObject <_UISceneComponentProviding> {

	BOOL _homeIndicatorAutoHidden;
	unsigned long long _screenEdgesDeferringSystemGestures;
	long long _userInterfaceStyle;
	long long _whitePointAdaptivityStyle;
	NSArray* _multitaskingDragExclusionRects;
	UIWindowScene* _windowScene;

}

@property (nonatomic,retain) UIWindowScene * windowScene;                                          //@synthesize windowScene=_windowScene - In the implementation block
@property (nonatomic,readonly) BOOL homeIndicatorAutoHidden;                                       //@synthesize homeIndicatorAutoHidden=_homeIndicatorAutoHidden - In the implementation block
@property (nonatomic,readonly) unsigned long long screenEdgesDeferringSystemGestures;              //@synthesize screenEdgesDeferringSystemGestures=_screenEdgesDeferringSystemGestures - In the implementation block
@property (nonatomic,readonly) long long userInterfaceStyle;                                       //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (nonatomic,readonly) long long whitePointAdaptivityStyle;                                //@synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle - In the implementation block
@property (nonatomic,readonly) NSArray * multitaskingDragExclusionRects;                           //@synthesize multitaskingDragExclusionRects=_multitaskingDragExclusionRects - In the implementation block
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScene *)_scene;
-(UIWindowScene *)windowScene;
-(unsigned long long)screenEdgesDeferringSystemGestures;
-(void)_setScene:(id)arg1 ;
-(long long)userInterfaceStyle;
-(id)initWithScene:(id)arg1 ;
-(BOOL)homeIndicatorAutoHidden;
-(void)updateUserInterfaceStyle;
-(long long)whitePointAdaptivityStyle;
-(void)setWindowScene:(UIWindowScene *)arg1 ;
-(void)updateHomeIndicatorAutoHidden;
-(NSArray *)multitaskingDragExclusionRects;
-(void)updateMultitaskingDragExclusionRects;
-(void)updateScreenEdgesDeferringSystemGestures;
-(void)updateWhitePointAdaptivityStyle;
@end

