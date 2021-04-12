/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_storeIdentifiers;
-(id)init;
-(id)description;
-(void)unblockIdentifiers:(id)arg1 ;
-(BOOL)containsIdentifier:(id)arg1 ;
-(void)clearList;
-(void)updateBlockedListFromStore:(id)arg1 ;
-(void)blockIdentifier:(id)arg1 ;
-(BOOL)containsAnyIdentifiersInArray:(id)arg1 ;
-(void)_loadIdentifiers;
@end

