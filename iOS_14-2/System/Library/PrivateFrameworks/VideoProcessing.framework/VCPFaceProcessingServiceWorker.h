/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class PHPhotoLibrary, PVContext, PVClusterer, VCPPhotosPersistenceDelegate, NSURL;

@interface VCPFaceProcessingServiceWorker : NSObject {

	PHPhotoLibrary* _photoLibrary;
	PVContext* _context;
	PVClusterer* _clusterer;
	VCPPhotosPersistenceDelegate* _persistenceDelegate;
	NSURL* _suggestionLoggingDirectory;
	BOOL _suggestionLoggingSessionOpen;
	BOOL _suggestionsLoggingEnabled;

}
+(id)newAllFacesFetchOptionsWithPhotoLibrary:(id)arg1 ;
+(id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1 ;
+(id)workerWithPhotoLibrary:(id)arg1 andContext:(id)arg2 ;
-(void)_logFaceToSuggestionsLog:(id)arg1 ;
-(void)validateClusterCacheWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestSuggestedMePersonIdentifierWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)resetFaceClusteringStateWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_closeSuggestionsLoggingSession;
-(id)initWithPhotoLibrary:(id)arg1 andContext:(id)arg2 ;
-(void)_finalizeSuggestionsLog;
-(void)_openSuggestionsLoggingSession;
-(void)_appendToSuggestionsLog:(id)arg1 ;
-(BOOL)_deleteAllVerifiedPersonsWithError:(id*)arg1 ;
-(void)_copyImageAtURLToSuggestionsLoggingSession:(id)arg1 ;
-(void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_startAndSyncClusterCacheWithLibrary:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(id)_suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 cancel:(/*^block*/id)arg4 context:(id)arg5 error:(id*)arg6 ;
-(id)_suggestionsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 cancel:(/*^block*/id)arg4 error:(id*)arg5 ;
-(void)resetPersonsModelWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)reclusterFacesWithContext:(id)arg1 reply:(/*^block*/id)arg2 extendTimeout:(/*^block*/id)arg3 cancel:(/*^block*/id)arg4 ;
-(void)suggestPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 cancel:(/*^block*/id)arg6 ;
-(void)rebuildPersonsWithContext:(id)arg1 reply:(/*^block*/id)arg2 extendTimeout:(/*^block*/id)arg3 cancel:(/*^block*/id)arg4 ;
-(void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)personPromoterStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

