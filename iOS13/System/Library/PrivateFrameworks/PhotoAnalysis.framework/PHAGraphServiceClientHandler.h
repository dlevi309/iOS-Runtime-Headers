/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <libobjc.A.dylib/PHAGraphRegistration.h>
#import <libobjc.A.dylib/PHAServiceOperationHandling.h>

@class PHAServiceClientHandler, PGManager, PFDispatchQueue, NSString;

@interface PHAGraphServiceClientHandler : NSObject <PHAGraphRegistration, PHAServiceOperationHandling> {

	PHAServiceClientHandler* _serviceClientHandler;
	PGManager* _pgGraphManager;
	PFDispatchQueue* _requestQueue;
	unsigned long long _requestCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operationDidFinish:(id)arg1 ;
-(void)requestGraphSearchMetadataWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestZeroKeywordsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(BOOL)arg3 withOptions:(id)arg4 context:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)generateSuggestionsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSynonymsDictionariesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)runCurationWithItems:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)operationWillStart:(id)arg1 ;
-(void)handleOperation:(id)arg1 ;
-(BOOL)wantsLiveGraphUpdates;
-(BOOL)wantsGraphUpdateNotifications;
-(void)graphUpdateMadeProgress:(double)arg1 ;
-(void)graphUpdateIsConsistent;
-(void)graphUpdateDidStop;
-(id)currentlyUnavailableError;
-(id)libraryTemporarilyUnavailableError;
-(id)initWithServiceClientHandler:(id)arg1 ;
-(id)phaGraphManager;
-(void)_beginGraphOperation:(id)arg1 ;
-(void)_endGraphOperation;
@end

