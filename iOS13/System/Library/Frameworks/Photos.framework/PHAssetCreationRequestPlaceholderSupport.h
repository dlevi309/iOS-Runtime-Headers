/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetCreationRequest.h>

@class PLClientServerTransaction, NSXPCConnection;

@interface PHAssetCreationRequestPlaceholderSupport : PHAssetCreationRequest {

	PLClientServerTransaction* _serverTransaction;
	long long _placeholderCreationMode;
	NSXPCConnection* _clientConnection;

}

@property (nonatomic,__weak,readonly) NSXPCConnection * clientConnection;              //@synthesize clientConnection=_clientConnection - In the implementation block
+(BOOL)_shouldCopySpatialOverCaptureResourcesMetadataCopyOptions:(id)arg1 ;
+(BOOL)_shouldCopyTitleDescriptionAndKeywordsForMetadataCopyOptions:(id)arg1 ;
+(BOOL)_shouldBakeInAdjustmentsAndFlattenLivePhoto:(BOOL*)arg1 forSourceAsset:(id)arg2 adjustmentBakeInOptions:(id)arg3 ;
-(NSXPCConnection *)clientConnection;
-(void)changeFailedOnClientWithLibrary:(id)arg1 error:(id)arg2 ;
-(void)changeFailedOnDaemonWithLibrary:(id)arg1 error:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(id)initForNewObjectWithUUID:(id)arg1 ;
-(void)_setDestinationAssetAvailabilityHandler:(/*^block*/id)arg1 ;
-(id)_createPlaceholderManagedAssetFromSourceManagedAsset:(id)arg1 inPhotoLibrary:(id)arg2 error:(id*)arg3 ;
-(void)_updateManagedAssetAfterResourceDownload:(id)arg1 ;
-(id)_fetchOptionsForDuplicateAssetPhotoLibraryType:(id)arg1 ;
@end

