/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol OS_dispatch_queue;
@class TSPObjectContext, NSObject, NSMutableDictionary, NSMutableSet, TSPPersistedObjectUUIDMap;

@interface TSPObjectUUIDMap : NSObject {

	Ai _assertOnReadCount;
	TSPObjectContext* _context;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _inMemoryUUIDDictionary;
	NSMutableSet* _UUIDsWithSuppressedAssertions;
	TSPPersistedObjectUUIDMap* _persistedUUIDMap;

}
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(void)object:(id)arg1 didChangeUUIDToValue:(id)arg2 fromValue:(id)arg3 ;
-(void)beginAssertOnRead;
-(void)endAssertOnRead;
-(BOOL)hasObjectUUID:(id)arg1 ;
-(id)objectWithUUID:(id)arg1 onlyIfLoaded:(BOOL)arg2 validateNewObjects:(BOOL)arg3 identifier:(long long*)arg4 ;
-(BOOL)objectUUIDIsInDocument:(id)arg1 ;
-(BOOL)shouldSuppressAssertionForObjectUUID:(id)arg1 ;
-(void)setPersistedUUIDMap:(id)arg1 ;
-(void)objectWasAddedToDocument:(id)arg1 options:(unsigned long long)arg2 ;
-(void)objectWillBeRemovedFromDocument:(id)arg1 ;
@end

