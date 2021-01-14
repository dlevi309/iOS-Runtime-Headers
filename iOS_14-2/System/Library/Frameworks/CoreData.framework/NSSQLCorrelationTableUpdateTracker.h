/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)enumerateInsertsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasInserts;
-(NSSQLManyToMany *)relationship;
-(void)enumerateMasterReordersOIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateInsertsOIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateDeletesOIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateReordersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateMasterReordersPart2UsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasDeletes;
-(void)trackReorders:(id)arg1 forObjectWithID:(id)arg2 ;
-(void)enumerateMasterReordersUsingBlock:(/*^block*/id)arg1 ;
-(void)trackInserts:(id)arg1 deletes:(id)arg2 reorders:(id)arg3 forObjectWithID:(id)arg4 ;
-(void)enumerateReordersOIDsUsingBlock:(/*^block*/id)arg1 ;
-(id)_organizeValues:(id)arg1 ;
-(BOOL)hasMasterReorders;
-(id)initForRelationship:(id)arg1 ;
-(void)enumerateDeletesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasReorders;
-(void)dealloc;
@end

