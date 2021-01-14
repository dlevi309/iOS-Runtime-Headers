/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSXPCStore, NSSaveChangesRequest, NSDictionary, NSManagedObjectContext, NSMutableDictionary, NSSet;

@interface NSXPCSaveRequestContext : NSObject {

	NSXPCStore* _store;
	NSSaveChangesRequest* _request;
	NSDictionary* _metadata;
	NSManagedObjectContext* _context;
	NSMutableDictionary* _changeCache;
	unsigned long long _interrupts;
	BOOL _forceUpdates;

}

@property (nonatomic,readonly) BOOL forceUpdates;                        //@synthesize forceUpdates=_forceUpdates - In the implementation block
@property (assign,nonatomic) unsigned long long interrupts;              //@synthesize interrupts=_interrupts - In the implementation block
@property (nonatomic,readonly) NSDictionary * changeCache; 
@property (nonatomic,readonly) NSSet * rowsToDelete; 
-(id)managedObjectContext;
-(id)rowForID:(id)arg1 ;
-(id)_encodeObjectValues:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_updateRollbackCacheForObjectWithID:(id)arg1 relationship:(id)arg2 withValuesFrom:(id)arg3 ;
-(BOOL)forceUpdates;
-(id)initForStore:(id)arg1 request:(id)arg2 metadata:(id)arg3 forceInsertsToUpdates:(BOOL)arg4 context:(id)arg5 ;
-(id)_encodeObjectsForSave:(id)arg1 forDelete:(BOOL)arg2 ;
-(NSDictionary *)changeCache;
-(id)request;
-(NSSet *)rowsToDelete;
-(unsigned long long)interrupts;
-(void)setInterrupts:(unsigned long long)arg1 ;
-(id)newEncodedSaveRequest;
-(id)_cacheNodePropertiesFromObject:(id)arg1 ;
-(void)_addRowForInsertOrUpdate:(id)arg1 ;
-(void)dealloc;
@end

