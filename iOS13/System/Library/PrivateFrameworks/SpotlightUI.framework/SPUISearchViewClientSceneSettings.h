/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKitCore/UIApplicationSceneClientSettings.h>
#import <libobjc.A.dylib/SPUISearchViewClientSceneSettings.h>

@protocol SPUISearchViewClientSceneSettings <NSObject>
@property (readonly) double distanceToTopOfIcons; 
@required
-(double)distanceToTopOfIcons;

@end


@class NSString;

@interface SPUISearchViewClientSceneSettings : UIApplicationSceneClientSettings <SPUISearchViewClientSceneSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double distanceToTopOfIcons; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3 ;
-(double)distanceToTopOfIcons;
@end

