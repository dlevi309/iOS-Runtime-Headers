/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <libobjc.A.dylib/PHAServiceOperationHandling.h>

@class PHAMonitoring, PHAExecutive, PHAAssetResourceDataLoader, PHAGraphManager, NSURL, PHPhotoLibrary, PHAJobCoordinator, CPAnalytics, NSMutableDictionary;

@interface PHAManager : NSObject <PHAServiceOperationHandling> {

	PHAMonitoring* _monitoring;
	PHAExecutive* _executive;
	PHAAssetResourceDataLoader* _dataLoader;
	unsigned long long _processedAssetCount;
	PHAGraphManager* _graphManager;
	NSURL* _libraryURL;
	PHPhotoLibrary* _photoLibrary;
	PHAJobCoordinator* _jobCoordinator;
	CPAnalytics* _analytics;
	NSMutableDictionary* _photoAnalysisWorkersByType;

}

@property (retain) NSURL * libraryURL;                                            //@synthesize libraryURL=_libraryURL - In the implementation block
@property (retain) PHPhotoLibrary * photoLibrary;                                 //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (retain) NSMutableDictionary * photoAnalysisWorkersByType;              //@synthesize photoAnalysisWorkersByType=_photoAnalysisWorkersByType - In the implementation block
@property (readonly) PHAExecutive * executive;                                    //@synthesize executive=_executive - In the implementation block
@property (readonly) PHAJobCoordinator * jobCoordinator;                          //@synthesize jobCoordinator=_jobCoordinator - In the implementation block
@property (getter=isQuiescent,readonly) BOOL quiescent; 
@property (readonly) PHAGraphManager * graphManager;                              //@synthesize graphManager=_graphManager - In the implementation block
@property (readonly) CPAnalytics * analytics;                                     //@synthesize analytics=_analytics - In the implementation block
+(void)enumerateWorkerClassesUsingBlock:(/*^block*/id)arg1 ;
+(id)allWorkerClasses;
-(CPAnalytics *)analytics;
-(NSURL *)libraryURL;
-(void)shutdown;
-(void)requestLocalizedSceneAncestryInformationWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(PHAJobCoordinator *)jobCoordinator;
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(void)checkForQuiescence;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(id)graphServiceWorker;
-(void)enumerateWorkersUsingBlock:(/*^block*/id)arg1 ;
-(void)setPhotoAnalysisWorkersByType:(NSMutableDictionary *)arg1 ;
-(void)graphManagerDidUnloadGraph:(id)arg1 ;
-(void)stopBackgroundActivity;
-(void)graphManagerWillLoadGraph:(id)arg1 ;
-(id)description;
-(id)faceProcessingServiceWorker;
-(void)enableTurboMode;
-(id)presentationWorker;
-(PHAExecutive *)executive;
-(void)startTurboProcessing;
-(id)statusAsDictionary;
-(BOOL)isReadyForAnalysis;
-(void)backgroundActivityDidBegin;
-(void)stopAllBackgroundActivities;
-(void)reportTurboEnabledWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)photosIsConnected;
-(void)setLibraryURL:(NSURL *)arg1 ;
-(id)monitoring;
-(void)handleOperation:(id)arg1 ;
-(PHAGraphManager *)graphManager;
-(void)disableTurboMode;
-(BOOL)isQuiescent;
-(void)dumpAnalysisStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)photoAnalysisWorkersByType;
-(id)faceClassificationServiceWorker;
-(void)triggerBackgroundActivity;
-(void)turboConstraintsWereRemoved;
-(id)initWithPhotoLibraryURL:(id)arg1 executive:(id)arg2 ;
-(BOOL)turboIsEnabled;
@end

