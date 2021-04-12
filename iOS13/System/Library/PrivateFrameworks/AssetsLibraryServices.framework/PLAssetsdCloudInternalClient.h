/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdCloudInternalClient : PLAssetsdBaseClient
-(BOOL)isReadyForCloudPhotoLibrary;
-(void)setCloudPhotoLibraryEnabledState:(BOOL)arg1 ;
-(void)enablePhotostreamsWithStreamID:(id)arg1 ;
-(void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)publishMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)syncCloudPhotoLibrary;
-(void)createPhotostreamAlbumWithStreamID:(id)arg1 ;
-(void)updateSharedAlbumsCachedServerConfigurationLimits;
-(void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2 ;
-(void)setCloudPhotoLibraryPauseState:(BOOL)arg1 reason:(short)arg2 ;
-(void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)getCurrentTransferProgress:(/*^block*/id)arg1 ;
-(void)getNotUploadedCount:(/*^block*/id)arg1 ;
-(void)getSystemBudgetsWithReply:(/*^block*/id)arg1 ;
-(void)overrideSystemBudgetsForSyncSession:(BOOL)arg1 systemBudgets:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(id)personInfoDictionaryForPersonID:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)cloudSharingSpaceManagementRequestWithType:(unsigned long long)arg1 optionalBytesToPurge:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)emailAddressForKey:(long long)arg1 error:(id*)arg2 ;
-(long long)keyForEmailAddress:(id)arg1 error:(id*)arg2 ;
-(void)queryParticipantsWithEmails:(id)arg1 phoneNumbers:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)forceSyncMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldAutoEnableiCPLOnOSXWithError:(id*)arg1 ;
-(void)synchronouslySetCloudPhotoLibraryPauseState:(BOOL)arg1 reason:(short)arg2 ;
-(unsigned long long)getResetSyncStatusWithError:(id*)arg1 ;
@end

