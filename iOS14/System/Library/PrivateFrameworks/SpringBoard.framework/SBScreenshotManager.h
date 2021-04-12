/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBScreenshotManagerDataSource;
@class SBSceneManagerCoordinator, _SBScreenshotPersistenceCoordinator;

@interface SBScreenshotManager : NSObject {

	SBSceneManagerCoordinator* _sceneManagerCoordinator;
	_SBScreenshotPersistenceCoordinator* _persistenceCoordinator;
	id<SBScreenshotManagerDataSource> _dataSource;

}

@property (setter=_setSceneManagerCoordinator:,getter=_sceneManagerCoordinator,nonatomic,retain) SBSceneManagerCoordinator * sceneManagerCoordinator;                     //@synthesize sceneManagerCoordinator=_sceneManagerCoordinator - In the implementation block
@property (setter=_setPersistenceCoordinator:,getter=_persistenceCoordinator,nonatomic,retain) _SBScreenshotPersistenceCoordinator * persistenceCoordinator;              //@synthesize persistenceCoordinator=_persistenceCoordinator - In the implementation block
@property (nonatomic,readonly) id<SBScreenshotManagerDataSource> dataSource;                                                                                              //@synthesize dataSource=_dataSource - In the implementation block
-(id)initWithDataSource:(id)arg1 ;
-(id<SBScreenshotManagerDataSource>)dataSource;
-(void)saveScreenshots;
-(id)_initWithDataSource:(id)arg1 persistenceCoordinator:(id)arg2 sceneManagerCoordinator:(id)arg3 ;
-(void)saveScreenshotsWithCompletion:(/*^block*/id)arg1 ;
-(id)_fetchEligibleScreenshotProvidersForSnapshotting;
-(id)_providerForScreen:(id)arg1 ;
-(id)_sceneManagerCoordinator;
-(void)_setSceneManagerCoordinator:(id)arg1 ;
-(id)_persistenceCoordinator;
-(void)_setPersistenceCoordinator:(id)arg1 ;
@end

