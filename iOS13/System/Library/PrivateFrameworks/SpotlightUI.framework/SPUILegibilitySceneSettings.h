/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/

#import <UIKitCore/UIApplicationSceneSettings.h>
#import <libobjc.A.dylib/SPUILegibilitySceneSettings.h>
@class _UILegibilitySettings;


@protocol SPUILegibilitySceneSettings <NSObject>
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@required
-(_UILegibilitySettings *)legibilitySettings;

@end


@class _UILegibilitySettings, NSString;

@interface SPUILegibilitySceneSettings : UIApplicationSceneSettings <SPUILegibilitySceneSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
-(id)keyDescriptionForSetting:(long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3 ;
-(_UILegibilitySettings *)legibilitySettings;
@end

