/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <UIKitCore/UIWindow.h>
#import <libobjc.A.dylib/_UISceneSettingsDiffAction.h>

@class UILayoutGuide, CRSUIApplicationSceneSettingsDiffInspector, NSLayoutConstraint, NSString;

@interface CRSUIWindow : UIWindow <_UISceneSettingsDiffAction> {

	UILayoutGuide* _notificationLayoutGuide;
	CRSUIApplicationSceneSettingsDiffInspector* _settingsDiffInspector;
	double _bannerHeight;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) CRSUIApplicationSceneSettingsDiffInspector * settingsDiffInspector;              //@synthesize settingsDiffInspector=_settingsDiffInspector - In the implementation block
@property (assign,nonatomic) double bannerHeight;                                                             //@synthesize bannerHeight=_bannerHeight - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                                           //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * notificationLayoutGuide;                                       //@synthesize notificationLayoutGuide=_notificationLayoutGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_settings;
-(id)initWithWindowScene:(id)arg1 ;
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(double)bannerHeight;
-(void)setBannerHeight:(double)arg1 ;
-(void)notificationLayoutGuideDidChange;
-(CRSUIApplicationSceneSettingsDiffInspector *)settingsDiffInspector;
-(UILayoutGuide *)notificationLayoutGuide;
-(void)setSettingsDiffInspector:(CRSUIApplicationSceneSettingsDiffInspector *)arg1 ;
@end

