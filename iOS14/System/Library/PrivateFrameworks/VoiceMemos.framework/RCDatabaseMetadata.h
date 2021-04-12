/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)dirty;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)save;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithPersistentStore:(id)arg1 ;
-(void)migrate:(id)arg1 ;
@end

