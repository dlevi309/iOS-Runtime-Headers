/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
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
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 windowScene:(id)arg3 ;
-(id)_settings;
-(id)_mapSettings;
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
-(double)bannerHeight;
-(void)setBannerHeight:(double)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)_commonInit;
-(id)initWithWindowScene:(id)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)notificationLayoutGuideDidChange;
-(void)_updateMapStyleTrait;
-(CRSUIApplicationSceneSettingsDiffInspector *)settingsDiffInspector;
-(UILayoutGuide *)notificationLayoutGuide;
-(void)setSettingsDiffInspector:(CRSUIApplicationSceneSettingsDiffInspector *)arg1 ;
@end

