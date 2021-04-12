/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@protocol MSASPlatform <NSObject>
@optional
-(BOOL)shouldEnableNewFeatures;
-(void)setSuppressCellular:(BOOL)arg1;
-(int)MMCSConcurrentConnectionsCount;
-(BOOL)shouldDownloadEarliestPhotosFirst;
-(BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
-(BOOL)personIDEnabledForAlbumSharing:(id)arg1;
-(id)metadataSocketOptionsForPersonID:(id)arg1;
-(id)MMCSDownloadSocketOptionsForPersonID:(id)arg1;
-(id)MMCSUploadSocketOptionsForPersonID:(id)arg1;
-(id)sharedStreamsProtocolVersionString;

@required
-(id)pushTokenForPersonID:(id)arg1;
-(BOOL)shouldLogAtLevel:(int)arg1;
-(Class)pluginClass;
-(BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
-(void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
-(id)albumSharingDaemon;
-(id)pathAlbumSharingDir;
-(id)baseSharingURLForPersonID:(id)arg1;
-(id)personIDsEnabledForAlbumSharing;
-(BOOL)MSASIsAllowedToTransferMetadata;
-(BOOL)MSASIsAllowedToUploadAssets;
-(BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;

@end

