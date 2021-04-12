/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <libobjc.A.dylib/PHAServiceOperationHandling.h>

@class PHAMonitoring, PHAExecutive, PHAAssetResourceDataLoader, PHAGraphManager, NSURL, PHPhotoLibrary, PHAJobCoordinator, NSMutableDictionary;

@interface PHAManager : NSObject <PHAServiceOperationHandling> {

	PHAMonitoring* _monitoring;
	PHAExecutive* _executive;
	PHAAssetResourceDataLoader* _dataLoader;
	unsigned long long _processedAssetCount;
	PHAGraphManager* _graphManager;
	NSURL* _libraryURL;
	PHPhotoLibrary* _photoLibrary;
	PHAJobCoordinator* _jobCoordinator;
	NSMutableDictionary* _photoAnalysisWorkersByType;

}

@property (retain) NSURL * libraryURL;                                            //@synthesize libraryURL=_libraryURL - In the implementation block
@property (retain) PHPhotoLibrary * photoLibrary;                                 //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (retain) NSMutableDictionary * photoAnalysisWorkersByType;              //@synthesize photoAnalysisWorkersByType=_photoAnalysisWorkersByType - In the implementation block
@property (readonly) PHAExecutive * executive;                                    //@synthesize executive=_executive - In the implementation block
@property (readonly) PHAJobCoordinator * jobCoordinator;                          //@synthesize jobCoordinator=_jobCoordinator - In the implementation block
@property (getter=isQuiescent,readonly) BOOL quiescent; 
@property (readonly) PHAGraphManager * graphManager;                              //@synthesize graphManager=_graphManager - In the implementation block
+(void)enumerateWorkerClassesUsingBlock:(/*^block*/id)arg1 ;
+(id)allWorkerClasses;
-(id)init;
-(id)description;
-(void)shutdown;
-(PHPhotoLibrary *)photoLibrary;
-(NSURL *)libraryURL;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(PHAGraphManager *)graphManager;
-(void)dumpAnalysisStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestLocalizedSceneAncestryInformationWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)reportTurboEnabledWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)turboIsEnabled;
-(void)setLibraryURL:(NSURL *)arg1 ;
-(id)monitoring;
-(void)handleOperation:(id)arg1 ;
-(id)statusAsDictionary;
-(PHAExecutive *)executive;
-(void)graphManagerWillLoadGraph:(id)arg1 ;
-(void)graphManagerDidUnloadGraph:(id)arg1 ;
-(BOOL)isQuiescent;
-(void)triggerBackgroundActivity;
-(void)stopAllBackgroundActivities;
-(id)initWithPhotoLibraryURL:(id)arg1 executive:(id)arg2 ;
-(void)startTurboProcessing;
-(void)enableTurboMode;
-(void)disableTurboMode;
-(void)turboConstraintsWereRemoved;
-(BOOL)photosIsConnected;
-(BOOL)isInitialSyncActive;
-(void)checkForQuiescence;
-(void)stopBackgroundActivity;
-(void)backgroundActivityDidBegin;
-(id)graphServiceWorker;
-(id)faceClassificationServiceWorker;
-(id)faceProcessingServiceWorker;
-(void)enumerateWorkersUsingBlock:(/*^block*/id)arg1 ;
-(PHAJobCoordinator *)jobCoordinator;
-(NSMutableDictionary *)photoAnalysisWorkersByType;
-(void)setPhotoAnalysisWorkersByType:(NSMutableDictionary *)arg1 ;
@end

