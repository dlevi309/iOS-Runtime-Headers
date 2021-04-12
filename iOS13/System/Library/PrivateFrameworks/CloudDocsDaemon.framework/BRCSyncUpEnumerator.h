/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CoreFoundation/NSEnumerator.h>

@protocol PQLEnumeration;
@class BRCClientZone, NSMutableSet, NSMutableDictionary, NSMutableIndexSet, PQLResultSet, NSMutableArray, BRCLocalItem;

@interface BRCSyncUpEnumerator : NSEnumerator {

	unsigned _batchSize;
	unsigned _maxDepth;
	unsigned _should2PhasePCSChain;
	BRCClientZone* _clientZone;
	NSMutableSet* _whitelist;
	NSMutableSet* _itemIDsLostOrThrottled;
	NSMutableSet* _itemIDsNeedingOSUpgrade;
	NSMutableDictionary* _tombstonesEmbargo;
	NSMutableIndexSet* _returned;
	PQLResultSet*<PQLEnumeration> _enumerator;
	NSMutableArray* _stack;
	int _stage;
	unsigned long long _retryAfter;
	BRCLocalItem* _itemNeedingPCSChaining;
	NSMutableSet* _chainedParentIDWhitelist;
	NSMutableArray* _itemsNeedingUnshare;

}

@property (nonatomic,readonly) unsigned batchSize;                                   //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,readonly) unsigned long long retryAfter;                        //@synthesize retryAfter=_retryAfter - In the implementation block
@property (nonatomic,readonly) BRCLocalItem * itemNeedingPCSChaining;                //@synthesize itemNeedingPCSChaining=_itemNeedingPCSChaining - In the implementation block
@property (nonatomic,readonly) NSMutableSet * chainedParentIDWhitelist;              //@synthesize chainedParentIDWhitelist=_chainedParentIDWhitelist - In the implementation block
@property (nonatomic,readonly) NSMutableArray * itemsNeedingUnshare;                 //@synthesize itemsNeedingUnshare=_itemsNeedingUnshare - In the implementation block
-(void)invalidate;
-(id)nextObject;
-(unsigned)batchSize;
-(BOOL)isBlackListed:(id)arg1 ;
-(unsigned long long)retryAfter;
-(id)initWithClientZone:(id)arg1 ;
-(BRCLocalItem *)itemNeedingPCSChaining;
-(NSMutableArray *)itemsNeedingUnshare;
-(void)_blackListDescendantStack:(id)arg1 parentItem:(id)arg2 andAddToSet:(id)arg3 descendantBlock:(/*^block*/id)arg4 ;
-(void)_blackListDescendantStack:(id)arg1 parentItem:(id)arg2 andAddToSet:(id)arg3 ;
-(BOOL)_blackListDescendantStackAndItemIfThrottledOrNeedsOSUpgrade:(id)arg1 now:(unsigned long long)arg2 ;
-(BOOL)_handleSharedItemWhichMovedToNewShare:(id)arg1 rootItem:(id)arg2 ;
-(BOOL)handleItemForOSUpgrade:(id)arg1 parentItemID:(id)arg2 ;
-(id)_nextLiveItem;
-(id)_nextTombstone;
-(id)_documentsOrAliasesNeedingSyncUpEnumerator;
-(id)_liveDirectoriesNeedingSyncUpEnumerator;
-(id)_tombstoneLeavesNeedingSyncUpEnumerator;
-(NSMutableSet *)chainedParentIDWhitelist;
@end

