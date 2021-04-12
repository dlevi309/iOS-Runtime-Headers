/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneParameters.h>

@class FBSDisplayConfiguration, FBSSceneSpecification, FBSSceneSettings, FBSSceneClientSettings;

@interface FBSMutableSceneParameters : FBSSceneParameters {

	FBSDisplayConfiguration* _displayConfiguration;

}

@property (setter=_setSpecification:,nonatomic,copy) FBSSceneSpecification * specification; 
@property (nonatomic,copy) FBSSceneSettings * settings; 
@property (nonatomic,copy) FBSSceneClientSettings * clientSettings; 
-(void)setDisplay:(id)arg1 ;
-(void)_setSpecification:(id)arg1 ;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(void)applyParameters:(id)arg1 ;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

