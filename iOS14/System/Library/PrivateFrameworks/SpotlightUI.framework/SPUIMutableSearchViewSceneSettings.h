/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <SpotlightUI/SPUIMutableLegibilitySceneSettings.h>
#import <libobjc.A.dylib/SPUISearchViewSceneSettings.h>

@class NSString;

@interface SPUIMutableSearchViewSceneSettings : SPUIMutableLegibilitySceneSettings <SPUISearchViewSceneSettings>

@property (assign,nonatomic) double revealProgress; 
@property (assign,nonatomic) unsigned long long presentationSource; 
@property (assign,nonatomic) unsigned long long presentationIntent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)presentationSource;
-(double)revealProgress;
-(void)setRevealProgress:(double)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(unsigned long long)presentationIntent;
-(void)setPresentationIntent:(unsigned long long)arg1 ;
-(void)setPresentationSource:(unsigned long long)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

