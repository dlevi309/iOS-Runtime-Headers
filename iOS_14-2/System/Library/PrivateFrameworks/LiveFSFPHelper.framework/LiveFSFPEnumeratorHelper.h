/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/

#import <LiveFSFPHelper/LiveFSFPHelper-Structs.h>
#import <libobjc.A.dylib/NSFileProviderEnumerator.h>

@class LiveFSFPExtensionHelper, NSMutableSet, LiveFSFPItemHelper, LiveFSFPEnumeratorDataContainer, NSString;

@interface LiveFSFPEnumeratorHelper : NSObject <NSFileProviderEnumerator> {

	LiveFSFPExtensionHelper* ext;
	BOOL historyReset;
	BOOL isActive;
	BOOL _sortedByDate;
	NSMutableSet* deletedItems;
	NSMutableSet* updatedItems;
	unsigned postedSelfUpdate : 1;
	unsigned postedSelfDelete : 1;
	BOOL _hasPersistentIDs;
	BOOL _addParent;
	BOOL _isDir;
	BOOL _isVolumeWide;
	int _state;
	LiveFSFPItemHelper* _enumeratedItem;
	LiveFSFPEnumeratorDataContainer* _dc;

}

@property (readonly) BOOL hasPersistentIDs;                                      //@synthesize hasPersistentIDs=_hasPersistentIDs - In the implementation block
@property (assign) BOOL addParent;                                               //@synthesize addParent=_addParent - In the implementation block
@property (readonly) BOOL isDir;                                                 //@synthesize isDir=_isDir - In the implementation block
@property (assign) int state;                                                    //@synthesize state=_state - In the implementation block
@property (readonly) BOOL isVolumeWide;                                          //@synthesize isVolumeWide=_isVolumeWide - In the implementation block
@property (nonatomic,readonly) LiveFSFPItemHelper * enumeratedItem;              //@synthesize enumeratedItem=_enumeratedItem - In the implementation block
@property (retain,readonly) LiveFSFPEnumeratorDataContainer * dc;                //@synthesize dc=_dc - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithEnumeratedItem:(id)arg1 extension:(id)arg2 error:(id*)arg3 ;
+(void)applyParentUpdateAcrossEnumerators:(id)arg1 ;
-(LiveFSFPEnumeratorDataContainer *)dc;
-(BOOL)isDir;
-(void)currentSyncAnchorWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2 ;
-(void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)invalidate;
-(void)resetHistory;
-(id)initForExtension:(id)arg1 item:(id)arg2 ;
-(LiveFSFPItemHelper *)enumeratedItem;
-(void)signalEnumeratedItemChanged;
-(id)ensureConnectedForUpdates;
-(void)doShutdown;
-(void)addInterestedItem:(id)arg1 newName:(id)arg2 forSelf:(BOOL)arg3 ;
-(void)applyDelete:(id)arg1 newTombstone:(id)arg2 toSelf:(BOOL)arg3 ;
-(void)setAddParent:(BOOL)arg1 ;
-(BOOL)hasPersistentIDs;
-(BOOL)addParent;
-(BOOL)isVolumeWide;
-(id)initWithEnumeratedItem:(id)arg1 container:(id)arg2 extension:(id)arg3 ;
-(void)enumerateFileItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(id)getDirContents;
-(id)getItemsFromTree:(id)arg1 inRange:(NSRange)arg2 error:(id*)arg3 ;
-(void)reallyEnumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(void)synchronizedEnumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2 ;
@end

