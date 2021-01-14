/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdLibraryInternalServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, NSString;

@interface PLAssetsdLibraryInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryInternalServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFetchFilterWithAssets:(id)arg1 forApplication:(id)arg2 withAuditToken:(SCD_Struct_PL32)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)invalidateReverseLocationDataOnAllAssetsWithReply:(/*^block*/id)arg1 ;
-(void)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)updateAssetLocationDataWithUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getSearchIndexProgressWithReply:(/*^block*/id)arg1 ;
-(void)applyGraphUpdates:(id)arg1 supportingData:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getAssetCountsWithReply:(/*^block*/id)arg1 ;
-(void)deleteiTunesSyncedContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setWidgetTimelineGeneratedForDisplaySize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getBackgroundJobServiceBundlesInQueueDictionaryWithReply:(/*^block*/id)arg1 ;
-(void)waitForSearchIndexExistenceWithReply:(/*^block*/id)arg1 ;
-(void)getBackgroundJobServiceStateWithReply:(/*^block*/id)arg1 ;
-(void)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet;
-(void)resetLimitedLibraryAccessForApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reloadMomentGenerationOptions;
-(void)getLibrarySizesFromDB:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)setAssetKeywords:(id)arg1 forAssetUUID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)repairMemoriesWithUUIDs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)markPersonAsNeedingKeyFaceWithPersonUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2 ;
-(void)applySearchIndexUpdates:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getSizeOfResourcesToUploadByCPLWithReply:(/*^block*/id)arg1 ;
-(void)invalidateBehavioralScoreOnAllAssetsWithReply:(/*^block*/id)arg1 ;
@end

