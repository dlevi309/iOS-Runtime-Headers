/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

