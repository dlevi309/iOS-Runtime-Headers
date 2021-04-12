/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double revealProgress; 
@property (nonatomic,readonly) unsigned long long presentationSource; 
@property (nonatomic,readonly) unsigned long long presentationIntent; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(unsigned long long)presentationSource;
-(double)revealProgress;
-(unsigned long long)presentationIntent;
@end

