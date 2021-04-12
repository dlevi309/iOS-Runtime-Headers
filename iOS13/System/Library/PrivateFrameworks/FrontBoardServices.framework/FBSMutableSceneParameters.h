/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(void)setDisplay:(id)arg1 ;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)_setSpecification:(id)arg1 ;
@end

