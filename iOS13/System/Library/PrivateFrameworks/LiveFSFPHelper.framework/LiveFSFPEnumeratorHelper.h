/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BOOL _isDir;
	BOOL _isVolumeWide;
	int _state;
	LiveFSFPItemHelper* _enumeratedItem;
	LiveFSFPEnumeratorDataContainer* _dc;

}

@property (readonly) BOOL hasPersistentIDs;                                      //@synthesize hasPersistentIDs=_hasPersistentIDs - In the implementation block
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
-(void)invalidate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)currentSyncAnchorWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2 ;
-(void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(void)resetHistory;
-(id)initForExtension:(id)arg1 item:(id)arg2 ;
-(LiveFSFPItemHelper *)enumeratedItem;
-(void)doShutdown;
-(void)addInterestedItem:(id)arg1 newName:(id)arg2 forSelf:(BOOL)arg3 ;
-(void)applyDelete:(id)arg1 newTombstone:(id)arg2 toSelf:(BOOL)arg3 ;
-(BOOL)hasPersistentIDs;
-(BOOL)isDir;
-(BOOL)isVolumeWide;
-(id)initWithEnumeratedItem:(id)arg1 container:(id)arg2 extension:(id)arg3 ;
-(void)enumerateFileItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(id)getDirContents;
-(id)getItemsFromTree:(id)arg1 inRange:(NSRange)arg2 error:(id*)arg3 ;
-(void)reallyEnumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(void)synchronizedEnumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2 ;
-(LiveFSFPEnumeratorDataContainer *)dc;
@end

