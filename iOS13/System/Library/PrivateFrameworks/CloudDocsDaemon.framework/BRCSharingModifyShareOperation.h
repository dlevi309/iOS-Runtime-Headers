/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCServerZone, CKShare, BRCItemID, CKRecord, NSString;

@interface BRCSharingModifyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	BRCServerZone* _serverZone;
	CKShare* _share;
	BRCItemID* _itemID;
	CKRecord* _sharingIdentityPreparedRecord;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)invalidate;
-(void)main;
-(id)createActivity;
-(void)_performAfterCopyingPublicSharingKeyWithRecordID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAfterGettingPublicSharingKeyForRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAfterFetchingiWorkRoutingTokenIfNecessary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAfterFetchingiWorkSharingIdentityOnItem:(id)arg1 wantRoutingKey:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performAfterFetchingSharingIdentityOnDocumentItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAfterFetchingSharingIdentityOnDirectoryItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAfterPreparingSharingIdentityIfNecessaryWhenWantRoutingKey:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 zone:(id)arg2 share:(id)arg3 ;
-(void)_updateDBAndSyncDownIfNeededWithShare:(id)arg1 recordsToLearnCKInfo:(id)arg2 ;
-(void)performAfterPreparingSharingIdentityIfNecessary:(/*^block*/id)arg1 ;
@end

