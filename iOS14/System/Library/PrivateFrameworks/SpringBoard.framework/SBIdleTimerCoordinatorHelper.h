/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_updateProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3 ;
-(void)removeProvider:(id)arg1 ;
-(id)_updateProviderInfo:(id)arg1 behavior:(id)arg2 reason:(id)arg3 ;
-(id)proposeProvider:(id)arg1 byCoordinator:(id)arg2 reason:(id)arg3 ;
-(id<SBIdleTimerCoordinating>)targetCoordinator;
-(void)setSourceProvider:(id<SBIdleTimerProviding>)arg1 ;
-(void)setTargetCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(BOOL)hasProvider:(id)arg1 ;
-(id)updateProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3 ;
-(id)idleTimerProxyForProvider:(id)arg1 ;
-(id)initWithSourceProvider:(id)arg1 ;
-(id<SBIdleTimerProviding>)sourceProvider;
-(NSMapTable *)idleTimerCache;
-(void)bindProvider:(id)arg1 toSourceTimer:(id)arg2 behavior:(id)arg3 forReason:(id)arg4 ;
-(id)proposeIdleTimerBehavior:(id)arg1 fromProvider:(id)arg2 reason:(id)arg3 ;
@end

