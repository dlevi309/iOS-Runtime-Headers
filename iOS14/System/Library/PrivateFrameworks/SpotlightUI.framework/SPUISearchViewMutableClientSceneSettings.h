/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneClientSettings.h>
#import <libobjc.A.dylib/SPUISearchViewClientSceneSettings.h>

@class NSString;

@interface SPUISearchViewMutableClientSceneSettings : UIMutableApplicationSceneClientSettings <SPUISearchViewClientSceneSettings>

@property (assign,nonatomic) double distanceToTopOfIcons; 
@property (assign,nonatomic) unsigned long long searchHeaderLayerRenderID; 
@property (assign,nonatomic) unsigned searchHeaderContextID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)distanceToTopOfIcons;
-(void)setSearchHeaderLayerRenderID:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3 ;
-(unsigned long long)searchHeaderLayerRenderID;
-(unsigned)searchHeaderContextID;
-(id)keyDescriptionForSetting:(long long)arg1 ;
-(void)setDistanceToTopOfIcons:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSearchHeaderContextID:(unsigned)arg1 ;
@end

