/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/


@class NSPersistentStore, NSPersistentStoreCoordinator, NSMutableDictionary;

@interface RCDatabaseMetadata : NSObject {

	NSPersistentStore* _store;
	NSPersistentStoreCoordinator* _coordinator;
	NSMutableDictionary* _metadata;
	BOOL _dirty;

}

@property (readonly) BOOL dirty;              //@synthesize dirty=_dirty - In the implementation block
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)save;
-(id)initWithPersistentStore:(id)arg1 ;
-(BOOL)dirty;
@end

