/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3 ;
-(id)keyDescriptionForSetting:(long long)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
@end

