/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKFaceCollectionObserver.h>
#import <libobjc.A.dylib/RERelevanceEngineObserver.h>

@class NSLock, RERelevanceEngine, NTKFaceCollection, NSString;

@interface NTKRelevanceEngineCache : NSObject <NTKFaceCollectionObserver, RERelevanceEngineObserver> {

	NSLock* _coordinatorLock;
	RERelevanceEngine* _coordinator;
	RERelevanceEngine* _staticCoordinator;
	NTKFaceCollection* _libraryCollection;
	BOOL _isEditing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
+(id)_dataSourceLoaderForRelevanceEngineDataSourcesForKey:(id)arg1 ;
+(id)sampleConfiguration;
+(id)_globallyCachedCanonicalRelevanceEngine;
+(id)_modelFileLocation;
-(void)prewarm;
-(id)init;
-(void)dealloc;
-(void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3 ;
-(void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3 ;
-(void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3 ;
-(void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4 ;
-(BOOL)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2 ;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(BOOL)_needsLiveElementCoordinator;
-(void)_loadCoordinatorIfNeeded;
-(void)_unloadCoordinatorIfNeeded;
-(void)_refreshLiveCoordinator;
-(BOOL)_faceCollectionNeedsLiveElementCoordinator:(id)arg1 ;
-(BOOL)_faceNeedsElementCoordinator:(id)arg1 ;
-(BOOL)_faceCollectionContainsSiriFace:(id)arg1 ;
-(void)_beginLoadingDataForEngine:(id)arg1 ;
-(void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollection:(id)arg1 didSelectFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollectionDidReorderFaces:(id)arg1 ;
-(void)faceCollectionDidReset:(id)arg1 ;
-(void)setLibraryCollection:(id)arg1 ;
-(id)sharedRelevanceEngine;
-(id)canonicalRelevanceEngine;
-(id)canonicalRelevanceEngineIgnoringAppInstallations;
-(void)_clockViewControllerDidBeginEditing;
-(void)_clockViewControllerDidEnterAddable;
-(void)_clockViewControllerDidEndEditing;
@end

