/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue;
@class PXSearchQueryResult, PXSearchIndexManager, NSObject, NSDictionary, NSArray, NSString;

@interface PXSearchQueryResultsProcessor : NSObject <PHPhotoLibraryChangeObserver> {

	/*^block*/id _processingHandler;
	PXSearchQueryResult* _currentSearchQueryResult;
	PXSearchIndexManager* _searchIndexManager;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSDictionary* _personSearchResultsMap;
	NSArray* _curatedAssetsSearchResults;
	NSArray* _removedObjects;
	NSArray* _hiddenObjects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXSearchQueryResult * currentSearchQueryResult;              //@synthesize currentSearchQueryResult=_currentSearchQueryResult - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                    //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,copy) NSDictionary * personSearchResultsMap;                         //@synthesize personSearchResultsMap=_personSearchResultsMap - In the implementation block
@property (nonatomic,copy) NSArray * curatedAssetsSearchResults;                          //@synthesize curatedAssetsSearchResults=_curatedAssetsSearchResults - In the implementation block
@property (nonatomic,copy) NSArray * removedObjects;                                      //@synthesize removedObjects=_removedObjects - In the implementation block
@property (nonatomic,copy) NSArray * hiddenObjects;                                       //@synthesize hiddenObjects=_hiddenObjects - In the implementation block
@property (nonatomic,copy,readonly) id processingHandler;                                 //@synthesize processingHandler=_processingHandler - In the implementation block
@property (nonatomic,readonly) PXSearchIndexManager * searchIndexManager;                 //@synthesize searchIndexManager=_searchIndexManager - In the implementation block
+(id)_fetchPersonsForPersonSearchResults:(id)arg1 photoLibrary:(id)arg2 ;
+(BOOL)_verifyExpectedWorkQueue;
+(BOOL)_isBootstrapNameChange:(id)arg1 ;
+(id)_reloadItemIdentifiersForChangedObjects:(id)arg1 inAssetSearchResults:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSArray *)removedObjects;
-(PXSearchIndexManager *)searchIndexManager;
-(void)photoLibraryDidChange:(id)arg1 ;
-(BOOL)_shouldRecurateForChangeDetails:(id)arg1 ;
-(id)initForUnitTesting;
-(id)initWithSearchIndexManager:(id)arg1 dispatchQueue:(id)arg2 resultsProcessingHandler:(/*^block*/id)arg3 ;
-(PXSearchQueryResult *)currentSearchQueryResult;
-(void)setCurrentSearchQueryResult:(PXSearchQueryResult *)arg1 ;
-(void)processSearchResults:(id)arg1 assetSearchResults:(id)arg2 personSearchResults:(id)arg3 searchSuggestions:(id)arg4 sceneIdentifiers:(id)arg5 forSearchQuery:(id)arg6 ;
-(id)_generateUpdatedPersonSearchResultsFromPersonSearchResults:(id)arg1 persons:(id)arg2 ;
-(id)processingHandler;
-(void)setRemovedObjects:(NSArray *)arg1 ;
-(void)_executeResultsHandlerForUpdatedSearchQueryResult:(id)arg1 curatedAssetsSearchResults:(id)arg2 ;
-(NSDictionary *)personSearchResultsMap;
-(void)setPersonSearchResultsMap:(NSDictionary *)arg1 ;
-(NSArray *)curatedAssetsSearchResults;
-(void)setCuratedAssetsSearchResults:(NSArray *)arg1 ;
-(NSArray *)hiddenObjects;
-(void)setHiddenObjects:(NSArray *)arg1 ;
-(void)_processPeopleChangesFromNotification:(id)arg1 ;
-(void)_processPersonNameChangeFromBootstrapContext:(id)arg1 searchQueryResult:(id)arg2 ;
-(void)_processPersonMergeFromNotification:(id)arg1 searchQueryResult:(id)arg2 ;
-(void)_updatePersonSearchResultsForSearchQueryResult:(id)arg1 withMergeTargetPerson:(id)arg2 sourcePerson:(id)arg3 tombstonedCandidatesLocalIdentifiers:(id)arg4 ;
-(void)_updateSearchQueryResult:(id)arg1 updatedPersonSearchResultsMap:(id)arg2 ;
-(id)_localIdentifierForPersonUUID:(id)arg1 ;
-(void)_performCurationAndUpdateChangedObjects:(id)arg1 ;
-(void)addObserverForCuratedAssetsLibraryChanges;
-(void)addObserverForPeopleChangeHandlingNotifications;
-(void)dealloc;
@end

