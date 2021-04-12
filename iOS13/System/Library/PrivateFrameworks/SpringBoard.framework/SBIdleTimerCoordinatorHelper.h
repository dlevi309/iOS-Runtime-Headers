/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBIdleTimerProviding, SBIdleTimerCoordinating;
@class NSMapTable;

@interface SBIdleTimerCoordinatorHelper : NSObject {

	id<SBIdleTimerProviding> _sourceProvider;
	id<SBIdleTimerCoordinating> _targetCoordinator;
	NSMapTable* _idleTimerCache;

}

@property (assign,nonatomic,__weak) id<SBIdleTimerProviding> sourceProvider;                    //@synthesize sourceProvider=_sourceProvider - In the implementation block
@property (nonatomic,readonly) NSMapTable * idleTimerCache;                                     //@synthesize idleTimerCache=_idleTimerCache - In the implementation block
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> targetCoordinator;              //@synthesize targetCoordinator=_targetCoordinator - In the implementation block
-(id)init;
-(void)removeProvider:(id)arg1 ;
-(id<SBIdleTimerProviding>)sourceProvider;
-(void)setSourceProvider:(id<SBIdleTimerProviding>)arg1 ;
-(id)initWithSourceProvider:(id)arg1 ;
-(id<SBIdleTimerCoordinating>)targetCoordinator;
-(void)setTargetCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id)proposeIdleTimerBehavior:(id)arg1 fromProvider:(id)arg2 reason:(id)arg3 ;
-(id)updateProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3 ;
-(NSMapTable *)idleTimerCache;
-(id)_updateProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3 ;
-(id)_updateProviderInfo:(id)arg1 behavior:(id)arg2 reason:(id)arg3 ;
-(BOOL)hasProvider:(id)arg1 ;
-(id)proposeProvider:(id)arg1 byCoordinator:(id)arg2 reason:(id)arg3 ;
-(void)bindProvider:(id)arg1 toSourceTimer:(id)arg2 behavior:(id)arg3 forReason:(id)arg4 ;
-(id)idleTimerProxyForProvider:(id)arg1 ;
@end

