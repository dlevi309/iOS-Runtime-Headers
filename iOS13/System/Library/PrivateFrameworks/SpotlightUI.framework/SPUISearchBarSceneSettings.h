/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double scrollProgress; 
@property (nonatomic,readonly) BOOL animated; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)animated;
-(double)scrollProgress;
@end

