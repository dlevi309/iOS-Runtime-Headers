/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
#import <SafariShared/SafariShared-Structs.h>
@class NSObject, NSURL, NSMutableDictionary;

@interface WBSPasswordWarningStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >* _suddenTerminationDisabler;
	BOOL _hasPendingChanges;
	NSURL* _backingStoreURL;
	NSMutableDictionary* _lastWarningDatesByPersistentIdentifier;

}
+(id)sharedStore;
-(id)_initWithBackingStoreURL:(id)arg1 ;
-(id)_initWithDefaultBackingStore;
-(void)_saveStoreSoon;
-(void)_saveStoreNow;
-(void)_loadStoreIfNecessary;
-(void)_addPersistentIdentifier:(id)arg1 withLastWarningDate:(id)arg2 ;
-(void)saveStoreSynchronously;
-(void)getContainsPersistentIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addPersistentIdentifier:(id)arg1 ;
-(void)clearStoreSynchronously;
-(void)synchronousyClearIdentifiersAddedAfterDate:(id)arg1 ;
@end

