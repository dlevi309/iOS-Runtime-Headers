/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)addItem:(id)arg1 ;
-(void)setDefaults:(BRCUserDefaults *)arg1 ;
-(BRCSyncUpOperation *)op;
-(BRCUserDefaults *)defaults;
-(id)init;
-(void)setOp:(BRCSyncUpOperation *)arg1 ;
-(BRCAccountSession *)session;
-(void)setSession:(BRCAccountSession *)arg1 ;
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

