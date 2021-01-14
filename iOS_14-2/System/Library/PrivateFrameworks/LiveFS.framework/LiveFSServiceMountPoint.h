/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/

#import <libobjc.A.dylib/NSFileProviderLiveItemConnectionCoordination.h>

@class NSMapTable;

@interface LiveFSServiceMountPoint : NSObject <NSFileProviderLiveItemConnectionCoordination> {

	unsigned long long validConnections;
	int connectionCount;
	NSMapTable* _currentConnections;
	BOOL _renameChangesFileID;
	BOOL _hasPersistentFileIDs;
	unsigned long long _workingSetInterest;

}

@property (assign) unsigned long long workingSetInterest;              //@synthesize workingSetInterest=_workingSetInterest - In the implementation block
@property (readonly) BOOL renameChangesFileID;                         //@synthesize renameChangesFileID=_renameChangesFileID - In the implementation block
@property (readonly) BOOL hasPersistentFileIDs;                        //@synthesize hasPersistentFileIDs=_hasPersistentFileIDs - In the implementation block
-(id)init;
-(unsigned long long)LICCnewConnectionIDOrError:(id*)arg1 ;
-(void)LICCinvalidateFileNodesForConnection:(unsigned long long)arg1 ;
-(void)LICCreleaseConnectionAllocation:(unsigned long long)arg1 ;
-(void)rememberConnection:(id)arg1 forID:(unsigned long long)arg2 ;
-(unsigned long long)workingSetInterest;
-(BOOL)hasPersistentFileIDs;
-(void)LISMPUpdateUpdatedItem:(id)arg1 name:(id)arg2 interestedItem:(id)arg3 interestedClients:(unsigned long long)arg4 ;
-(void)LISMPUpdateUpdatedName:(id)arg1 interestedItem:(id)arg2 interestedClients:(unsigned long long)arg3 ;
-(void)LISMPUpdateVolumeWideUpdatedName:(id)arg1 interestedItem:(id)arg2 interestedClients:(unsigned long long)arg3 ;
-(void)LISMPUpdateDeletedName:(id)arg1 item:(id)arg2 interestedItem:(id)arg3 how:(int)arg4 interestedClients:(unsigned long long)arg5 ;
-(void)LISMPUpdateDeletedItem:(id)arg1 name:(id)arg2 interestedItem:(id)arg3 how:(int)arg4 interestedClients:(unsigned long long)arg5 ;
-(void)LISMPUpdateVolumeWideDeletedName:(id)arg1 interestedItem:(id)arg2 interestedClients:(unsigned long long)arg3 ;
-(void)LISMPUpdateRenameFrom:(id)arg1 fromName:(id)arg2 fromID:(id)arg3 intoItem:(id)arg4 toName:(id)arg5 overID:(id)arg6 interestedClients:(unsigned long long)arg7 ;
-(void)setWorkingSetInterest:(unsigned long long)arg1 ;
-(void)LISMPUpdateDone:(id)arg1 interestedClients:(unsigned long long)arg2 ;
-(void)LISMPUpdateItem:(id)arg1 nameOrPath:(id)arg2 interestedItem:(id)arg3 interestedClients:(unsigned long long)arg4 op:(int)arg5 ;
-(void)LISMPinvalidateAllConnections;
-(void)LISMPUpdateHistoryResetItem:(id)arg1 interestedItem:(id)arg2 interestedClients:(unsigned long long)arg3 ;
-(void)LISMPUpdateHistoryResetName:(id)arg1 interestedItem:(id)arg2 interestedClients:(unsigned long long)arg3 ;
-(BOOL)renameChangesFileID;
@end

