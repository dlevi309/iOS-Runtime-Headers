/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBSceneDisconnectionManager : NSObject {

	BOOL _isExecuting;
	unsigned long long _numberOfRecentScenesExcludedFromDisconnection;

}

@property (assign,nonatomic) unsigned long long numberOfRecentScenesExcludedFromDisconnection;              //@synthesize numberOfRecentScenesExcludedFromDisconnection=_numberOfRecentScenesExcludedFromDisconnection - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                                                              //@synthesize isExecuting=_isExecuting - In the implementation block
+(id)sharedManager;
-(id)init;
-(BOOL)isExecuting;
-(void)setIsExecuting:(BOOL)arg1 ;
-(id)sceneManager;
-(void)_beginSceneCleanupWithBackgroundedSceneEntities:(id)arg1 ;
-(id)liveScenesForApplication:(id)arg1 ;
-(BOOL)shouldDisconnectScene:(id)arg1 inSwitcher:(id)arg2 ;
-(void)disconnectScenes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)positionOf:(id)arg1 inSwitcher:(id)arg2 ;
-(unsigned long long)numberOfRecentScenesExcludedFromDisconnection;
-(void)setNumberOfRecentScenesExcludedFromDisconnection:(unsigned long long)arg1 ;
@end

