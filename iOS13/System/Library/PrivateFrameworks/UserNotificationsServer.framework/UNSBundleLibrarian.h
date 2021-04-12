/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject;

@interface UNSBundleLibrarian : NSObject {

	NSString* _bundleLibraryPath;
	NSMutableDictionary* _bundleToUUIDMap;
	NSMutableDictionary* _uuidToBundleMap;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithDirectory:(id)arg1 ;
-(void)_queue_loadBundleLibraryIfNeeded;
-(BOOL)_queue_saveDictionary:(id)arg1 atPath:(id)arg2 ;
-(id)_queue_bundleIdentifierForUniqueIdentifier:(id)arg1 ;
-(id)_queue_uniqueIdentifierForBundleIdentifier:(id)arg1 ;
-(void)_queue_removeEntryForBundleIdentifier:(id)arg1 ;
-(void)_queue_addEntryForBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(void)_queue_loadBundleLibrary;
-(id)_queue_dictionaryAtPath:(id)arg1 ;
-(id)_queue_dataAtPath:(id)arg1 ;
-(void)bootstrapLibraryForBundleIdentifiers:(id)arg1 ;
-(id)bundleIdentifierForUniqueIdentifier:(id)arg1 ;
-(id)uniqueIdentifierForBundleIdentifier:(id)arg1 ;
-(void)removeMappingForBundleIdentifier:(id)arg1 ;
-(void)migrateRepositoriesInDirectory:(id)arg1 ;
-(void)_removeBundleLibrary;
@end

