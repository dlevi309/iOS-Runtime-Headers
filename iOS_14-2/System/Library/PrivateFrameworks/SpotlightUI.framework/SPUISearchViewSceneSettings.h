/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <SpotlightUI/SPUILegibilitySceneSettings.h>
#import <libobjc.A.dylib/SPUISearchViewSceneSettings.h>

@protocol SPUISearchViewSceneSettings <NSObject>
@property (nonatomic,readonly) double revealProgress; 
@property (nonatomic,readonly) unsigned long long presentationSource; 
@property (nonatomic,readonly) unsigned long long presentationIntent; 
@required
-(unsigned long long)presentationSource;
-(double)revealProgress;
-(unsigned long long)presentationIntent;

@end


@class NSString;

@interface SPUISearchViewSceneSettings : SPUILegibilitySceneSettings <SPUISearchViewSceneSettings>

@property (nonatomic,readonly) double revealProgress; 
@property (nonatomic,readonly) unsigned long long presentationSource; 
@property (nonatomic,readonly) unsigned long long presentationIntent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)presentationSource;
-(double)revealProgress;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)presentationIntent;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
@end

