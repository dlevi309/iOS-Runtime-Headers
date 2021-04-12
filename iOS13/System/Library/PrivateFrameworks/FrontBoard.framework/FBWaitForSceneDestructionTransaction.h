/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FBTransaction.h>
#import <libobjc.A.dylib/FBSceneManagerObserver.h>

@class FBSceneManager, FBScene, NSString;

@interface FBWaitForSceneDestructionTransaction : FBTransaction <FBSceneManagerObserver> {

	FBSceneManager* _sceneManager;
	FBScene* _sceneToWaitForDeath;

}

@property (nonatomic,readonly) FBScene * scene;                     //@synthesize sceneToWaitForDeath=_sceneToWaitForDeath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)_didComplete;
-(FBScene *)scene;
-(id)initWithScene:(id)arg1 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
@end

