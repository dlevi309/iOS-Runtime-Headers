/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <SpotlightUI/SPUILegibilitySceneSettings.h>
#import <libobjc.A.dylib/SPUISearchBarSceneSettings.h>

@protocol SPUISearchBarSceneSettings <NSObject>
@property (nonatomic,readonly) double scrollProgress; 
@property (nonatomic,readonly) BOOL animated; 
@required
-(BOOL)animated;
-(double)scrollProgress;

@end


@class NSString;

@interface SPUISearchBarSceneSettings : SPUILegibilitySceneSettings <SPUISearchBarSceneSettings>

@property (nonatomic,readonly) double scrollProgress; 
@property (nonatomic,readonly) BOOL animated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)animated;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)scrollProgress;
@end

