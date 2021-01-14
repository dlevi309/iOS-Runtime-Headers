/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSXPCConnection *)clientConnection;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)_createPlaceholderManagedAssetFromSourceManagedAsset:(id)arg1 inPhotoLibrary:(id)arg2 error:(id*)arg3 ;
-(void)changeFailedOnDaemonWithLibrary:(id)arg1 error:(id)arg2 ;
-(void)_setDestinationAssetAvailabilityHandler:(/*^block*/id)arg1 ;
-(void)_updateManagedAssetAfterResourceDownload:(id)arg1 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(id)initForNewObjectWithUUID:(id)arg1 ;
-(void)changeFailedOnClientWithLibrary:(id)arg1 error:(id)arg2 ;
-(id)_fetchOptionsForDuplicateAssetPhotoLibraryType:(id)arg1 ;
@end

