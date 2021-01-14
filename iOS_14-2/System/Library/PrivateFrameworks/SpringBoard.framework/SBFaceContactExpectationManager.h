/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBSceneManager, SBProximitySensorManager;

@interface SBFaceContactExpectationManager : NSObject {

	SBSceneManager* _sceneManager;
	SBProximitySensorManager* _proximitySensorManager;
	BOOL _faceExpected;

}
-(id)initWithSceneManager:(id)arg1 ;
-(id)_proximitySensorClientID;
-(id)_frontmostScenesExpectingFaceContact;
-(id)description;
-(void)updateFaceContactExpectation;
-(id)initWithSceneManager:(id)arg1 proximitySensorManager:(id)arg2 ;
@end

