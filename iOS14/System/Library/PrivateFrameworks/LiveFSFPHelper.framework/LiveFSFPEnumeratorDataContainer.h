/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/

#import <libobjc.A.dylib/NSFileProviderLiveItemClientUpdate.h>

@protocol OS_dispatch_queue;
@class LiveFSFPExtensionHelper, NSString, NSPointerArray, NSObject, LiveFSFPItemHelper, LiveFSRBTree;

@interface LiveFSFPEnumeratorDataContainer : NSObject <NSFileProviderLiveItemClientUpdate> {

	LiveFSFPExtensionHelper* ext;
	NSString* _containerID;
	BOOL _hasPersistentIDs;
	BOOL historyReset;
	BOOL isActive;
	NSPointerArray* ourEnumerators;
	NSObject*<OS_dispatch_queue> updateQueue;
	BOOL _isDir;
	BOOL _addedToExtension;
	BOOL _addParent;
	BOOL _isVolumeWide;
	int _state;
	LiveFSFPItemHelper* _enumeratedItem;
	NSString* _enumeratedItemID;
	LiveFSRBTree* _contentsSortedByDate;
	LiveFSRBTree* _contentsSortedByName;

}

@property (readonly) BOOL hasPersistentIDs;                                   //@synthesize hasPersistentIDs=_hasPersistentIDs - In the implementation block
@property (readonly) BOOL isDir;                                              //@synthesize isDir=_isDir - In the implementation block
@property (assign) BOOL addedToExtension;                                     //@synthesize addedToExtension=_addedToExtension - In the implementation block
@property (assign) BOOL addParent;                                            //@synthesize addParent=_addParent - In the implementation block
@property (assign) int state;                                                 //@synthesize state=_state - In the implementation block
@property (readonly) BOOL isVolumeWide;                                       //@synthesize isVolumeWide=_isVolumeWide - In the implementation block
@property (retain,readonly) NSString * containerID;                           //@synthesize containerID=_containerID - In the implementation block
@property (readonly) LiveFSFPItemHelper * enumeratedItem;                     //@synthesize enumeratedItem=_enumeratedItem - In the implementation block
@property (retain) NSString * enumeratedItemID;                               //@synthesize enumeratedItemID=_enumeratedItemID - In the implementation block
@property (retain,readonly) LiveFSRBTree * contentsSortedByDate;              //@synthesize contentsSortedByDate=_contentsSortedByDate - In the implementation block
@property (retain,readonly) LiveFSRBTree * contentsSortedByName;              //@synthesize contentsSortedByName=_contentsSortedByName - In the implementation block
-(NSString *)containerID;
-(BOOL)isDir;
-(NSString *)enumeratedItemID;
-(id)loadContents;
-(void)setEnumeratedItemID:(NSString *)arg1 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)invalidate;
-(void)dealloc;
-(void)LIUpdateUpdatedItem:(id)arg1 name:(id)arg2 interestedItem:(id)arg3 ;
-(void)LIUpdateUpdatedName:(id)arg1 interestedItem:(id)arg2 ;
-(void)LIUpdateDeletedItem:(id)arg1 name:(id)arg2 how:(int)arg3 interestedItem:(id)arg4 ;
-(void)LIUpdateDeletedName:(id)arg1 item:(id)arg2 how:(int)arg3 interestedItem:(id)arg4 ;
-(void)LIUpdateRenameFrom:(id)arg1 fromName:(id)arg2 fromID:(id)arg3 intoItem:(id)arg4 toName:(id)arg5 overID:(id)arg6 ;
-(void)LIUpdateVolumeWideUpdatedName:(id)arg1 interestedItem:(id)arg2 ;
-(void)LIUpdateVolumeWideDeletedName:(id)arg1 interestedItem:(id)arg2 ;
-(void)LIUpdateHistoryResetItem:(id)arg1 interestedItem:(id)arg2 ;
-(void)LIUpdateHistoryResetName:(id)arg1 interestedItem:(id)arg2 ;
-(void)LIUpdateDone:(id)arg1 ;
-(id)initForExtension:(id)arg1 item:(id)arg2 ;
-(LiveFSFPItemHelper *)enumeratedItem;
-(id)ensureConnectedForUpdates;
-(void)dropInterestForEnumeratedItem:(id)arg1 ;
-(void)doShutdown;
-(id)readDirBuffersForBufferBlock:(/*^block*/id)arg1 andEntryBlock:(/*^block*/id)arg2 ;
-(void)setAddParent:(BOOL)arg1 ;
-(void)applyDeleteAcrossEnumerators:(id)arg1 newTombstone:(id)arg2 toSelf:(BOOL)arg3 ;
-(void)doProcessItemDeleted:(id)arg1 ;
-(void)handleEnumeratedItemChanged;
-(void)makeAllEnumeratorsDead;
-(void)resetAllEnumerators;
-(void)doShutdownOnEnumeratorHelperQueue;
-(void)applyAddAcrossEnumerators:(id)arg1 newName:(id)arg2 forSelf:(BOOL)arg3 ;
-(id)initWithEnumeratedItem:(id)arg1 fileHandle:(id)arg2 extension:(id)arg3 ;
-(void)addEnumerator:(id)arg1 ;
-(void)dropEnumerator:(id)arg1 ;
-(void)dispatchOntoUpdateQueue:(/*^block*/id)arg1 ;
-(void)doProcessItemUpdated:(id)arg1 ;
-(void)applyParentUpdateAcrossEnumerators;
-(BOOL)hasPersistentIDs;
-(BOOL)addedToExtension;
-(void)setAddedToExtension:(BOOL)arg1 ;
-(BOOL)addParent;
-(BOOL)isVolumeWide;
-(LiveFSRBTree *)contentsSortedByDate;
-(LiveFSRBTree *)contentsSortedByName;
@end
