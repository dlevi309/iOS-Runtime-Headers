/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKitCore/UIApplicationSceneClientSettings.h>
#import <libobjc.A.dylib/SPUISearchViewClientSceneSettings.h>

@protocol SPUISearchViewClientSceneSettings <NSObject>
@property (readonly) double distanceToTopOfIcons; 
@property (readonly) unsigned long long searchHeaderLayerRenderID; 
@property (readonly) unsigned searchHeaderContextID; 
@required
-(double)distanceToTopOfIcons;
-(unsigned long long)searchHeaderLayerRenderID;
-(unsigned)searchHeaderContextID;

@end


@class NSString;

@interface SPUISearchViewClientSceneSettings : UIApplicationSceneClientSettings <SPUISearchViewClientSceneSettings>

@property (readonly) double distanceToTopOfIcons; 
@property (readonly) unsigned long long searchHeaderLayerRenderID; 
@property (readonly) unsigned searchHeaderContextID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)distanceToTopOfIcons;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)searchHeaderLayerRenderID;
-(unsigned)searchHeaderContextID;
-(id)keyDescriptionForSetting:(long long)arg1 ;
@end

