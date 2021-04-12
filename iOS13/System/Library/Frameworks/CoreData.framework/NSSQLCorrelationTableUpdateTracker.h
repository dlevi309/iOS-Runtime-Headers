/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLManyToMany;

@interface NSSQLCorrelationTableUpdateTracker : NSObject {

	NSSQLManyToMany* _relationship;
	id _inserts;
	id _deletes;
	id _masterUpdates;
	id _otherUpdates;

}

@property (nonatomic,readonly) NSSQLManyToMany * relationship;              //@synthesize relationship=_relationship - In the implementation block
-(void)dealloc;
-(NSSQLManyToMany *)relationship;
-(BOOL)hasInserts;
-(void)enumerateInsertsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasDeletes;
-(void)enumerateDeletesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasMasterReorders;
-(void)enumerateMasterReordersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateMasterReordersPart2UsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasReorders;
-(void)enumerateReordersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateInsertsOIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateReordersOIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateMasterReordersOIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDeletesOIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)_organizeValues:(id)arg1 ;
-(id)initForRelationship:(id)arg1 ;
-(void)trackInserts:(id)arg1 deletes:(id)arg2 reorders:(id)arg3 forObjectWithID:(id)arg4 ;
-(void)trackReorders:(id)arg1 forObjectWithID:(id)arg2 ;
@end

