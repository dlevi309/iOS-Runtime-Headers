/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class NSMutableSet, BRCAccountSession, BRCSyncUpOperation, BRCUserDefaults;

@interface BRCSyncUpOperationBuilder : NSObject {

	NSMutableSet* _fullyChainedParentIDWhitelist;
	NSMutableSet* _halfChainedParentIDWhitelist;
	BRCAccountSession* _session;
	BRCSyncUpOperation* _op;
	BRCUserDefaults* _defaults;

}

@property (nonatomic,retain) BRCSyncUpOperation * op;                  //@synthesize op=_op - In the implementation block
@property (nonatomic,retain) BRCAccountSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) BRCUserDefaults * defaults;               //@synthesize defaults=_defaults - In the implementation block
-(id)init;
-(BRCUserDefaults *)defaults;
-(void)setDefaults:(BRCUserDefaults *)arg1 ;
-(BRCAccountSession *)session;
-(void)setSession:(BRCAccountSession *)arg1 ;
-(float)addItem:(id)arg1 ;
-(void)setOp:(BRCSyncUpOperation *)arg1 ;
-(BRCSyncUpOperation *)op;
-(float)fakeSyncForItem:(id)arg1 serverItem:(id)arg2 inZone:(id)arg3 ;
-(float)addDeletionOfRecordID:(id)arg1 ckInfo:(id)arg2 ;
-(float)addEditOfDocument:(id)arg1 ;
-(unsigned char)shouldPCSChainStatusForItem:(id)arg1 ;
-(void)handleEditOfSharedItem:(id)arg1 ;
-(void)handleDeletionOfSharedItem:(id)arg1 ;
-(float)addDeletionOfItem:(id)arg1 ;
-(void)prepareAppLibraryRootSyncUpForItem:(id)arg1 ;
-(BOOL)checkIfSyncAllowedInSharedZoneForItem:(id)arg1 ;
-(float)addDeletionOfSharedTopLevelItem:(id)arg1 ;
-(float)addDeletionOfFinderBookmark:(id)arg1 ;
-(float)addDeletionOfDocument:(id)arg1 ;
-(float)addDeletionOfDirectory:(id)arg1 ;
-(float)addEditOfSharedTopLevelItem:(id)arg1 ;
-(float)addEditOfFinderBookmark:(id)arg1 ;
-(float)addEditOfSymlink:(id)arg1 ;
-(float)addEditOfDirectory:(id)arg1 ;
@end

