/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdCloudInternalClient : PLAssetsdBaseClient
-(id)personInfoDictionaryForPersonID:(id)arg1 error:(id*)arg2 ;
-(void)queryParticipantsWithEmails:(id)arg1 phoneNumbers:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCloudPhotoLibraryEnabledStateSync:(BOOL)arg1 ;
-(void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2 ;
-(void)setCloudPhotoLibraryEnabledState:(BOOL)arg1 ;
-(void)setCloudPhotoLibraryPauseState:(BOOL)arg1 reason:(short)arg2 ;
-(void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)getCurrentTransferProgress:(/*^block*/id)arg1 ;
-(void)getNotUploadedCount:(/*^block*/id)arg1 ;
-(void)getSystemBudgetsWithReply:(/*^block*/id)arg1 ;
-(void)overrideSystemBudgetsForSyncSession:(BOOL)arg1 systemBudgets:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)syncCloudPhotoLibrary;
-(void)fetchShareFromShareURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)publishShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldAutoEnableiCPLOnOSXWithError:(id*)arg1 ;
-(void)synchronouslySetCloudPhotoLibraryPauseState:(BOOL)arg1 reason:(short)arg2 ;
-(unsigned long long)getResetSyncStatusWithError:(id*)arg1 ;
-(void)createPhotostreamAlbumWithStreamID:(id)arg1 ;
-(BOOL)isReadyForCloudPhotoLibrary;
-(void)updateSharedAlbumsCachedServerConfigurationLimits;
-(id)emailAddressForKey:(long long)arg1 error:(id*)arg2 ;
-(long long)keyForEmailAddress:(id)arg1 error:(id*)arg2 ;
-(void)enablePhotostreamsWithStreamID:(id)arg1 ;
-(unsigned long long)cloudSharingSpaceManagementRequestWithType:(unsigned long long)arg1 optionalBytesToPurge:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)forceSyncMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

