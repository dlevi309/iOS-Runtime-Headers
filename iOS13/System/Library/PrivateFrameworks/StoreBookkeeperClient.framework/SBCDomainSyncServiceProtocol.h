/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
*/


@protocol SBCDomainSyncServiceProtocol <NSObject>
@required
-(oneway void)beginAccessingPlaybackPositionEntities;
-(oneway void)endAccessingPlaybackPositionEntities;
-(oneway void)persistPlaybackPositionEntity:(id)arg1 isCheckpoint:(BOOL)arg2 completionBlock:(/*^block*/id)arg3;
-(oneway void)pullLocalPlaybackPositionForEntityIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(oneway void)deletePlaybackPositionEntity:(id)arg1;
-(oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1;
-(oneway void)deletePlaybackPositionEntities;

@end

