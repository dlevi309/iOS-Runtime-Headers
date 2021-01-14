/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_saveStoreSoon;
-(id)_initWithBackingStoreURL:(id)arg1 ;
-(id)_initWithDefaultBackingStore;
-(void)_saveStoreNow;
-(void)_loadStoreIfNecessary;
-(void)_addPersistentIdentifier:(id)arg1 withLastWarningDate:(id)arg2 ;
-(void)getContainsPersistentIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addPersistentIdentifier:(id)arg1 ;
-(void)synchronousyClearIdentifiersAddedAfterDate:(id)arg1 ;
-(void)saveStoreSynchronously;
-(void)clearStoreSynchronously;
@end

