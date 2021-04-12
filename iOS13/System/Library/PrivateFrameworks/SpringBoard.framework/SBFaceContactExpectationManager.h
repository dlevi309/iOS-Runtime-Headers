/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBSceneManager, SBProximitySensorManager;

@interface SBFaceContactExpectationManager : NSObject {

	SBSceneManager* _sceneManager;
	SBProximitySensorManager* _proximitySensorManager;
	BOOL _faceExpected;

}
-(id)description;
-(id)initWithSceneManager:(id)arg1 ;
-(void)updateFaceContactExpectation;
-(id)initWithSceneManager:(id)arg1 proximitySensorManager:(id)arg2 ;
-(id)_frontmostScenesExpectingFaceContact;
-(id)_proximitySensorClientID;
@end

