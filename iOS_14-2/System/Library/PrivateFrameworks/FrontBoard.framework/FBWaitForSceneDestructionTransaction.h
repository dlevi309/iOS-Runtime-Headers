/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FBScene *)scene;
-(BOOL)_canBeInterrupted;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)_begin;
-(void)_didComplete;
-(id)initWithScene:(id)arg1 ;
-(id)_customizedDescriptionProperties;
-(void)dealloc;
@end

