/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSUbiquitousKeyValueStore, NSDate;

@interface MSPSharedTripBlacklist : NSObject {

	NSMutableSet* _blockIDs;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSUbiquitousKeyValueStore* _kvStore;
	NSDate* _lastUpdateDate;

}
-(id)init;
-(id)description;
-(BOOL)containsIdentifier:(id)arg1 ;
-(void)_storeIdentifiers;
-(void)blockIdentifier:(id)arg1 ;
-(void)_loadIdentifiers;
-(void)updateBlockedListFromStore:(id)arg1 ;
-(BOOL)containsAnyIdentifiersInArray:(id)arg1 ;
-(void)unblockIdentifiers:(id)arg1 ;
-(void)clearList;
@end

