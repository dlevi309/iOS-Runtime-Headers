/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBSceneDisconnectionManager : NSObject {

	BOOL _isExecuting;
	unsigned long long _numberOfRecentScenesExcludedFromDisconnection;

}

@property (assign,nonatomic) unsigned long long numberOfRecentScenesExcludedFromDisconnection;              //@synthesize numberOfRecentScenesExcludedFromDisconnection=_numberOfRecentScenesExcludedFromDisconnection - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                                                              //@synthesize isExecuting=_isExecuting - In the implementation block
+(id)sharedManager;
-(id)sceneManager;
-(unsigned long long)numberOfRecentScenesExcludedFromDisconnection;
-(id)init;
-(void)disconnectScenes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldDisconnectScene:(id)arg1 inSwitcher:(id)arg2 ;
-(unsigned long long)positionOf:(id)arg1 inSwitcher:(id)arg2 ;
-(void)setNumberOfRecentScenesExcludedFromDisconnection:(unsigned long long)arg1 ;
-(BOOL)isExecuting;
-(void)_beginSceneCleanupWithBackgroundedSceneEntities:(id)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(id)liveScenesForApplication:(id)arg1 ;
@end

