/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSManagedObjectID, NSFetchRequest;

@interface NSSQLObjectFaultRequestContext : NSSQLStoreRequestContext {

	NSManagedObjectID* _objectID;
	NSFetchRequest* _fetchRequest;
	BOOL _forConflictAnalysis;

}

@property (nonatomic,readonly) NSManagedObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) BOOL forConflictAnalysis;                    //@synthesize forConflictAnalysis=_forConflictAnalysis - In the implementation block
-(id)fetchRequest;
-(void)setForConflictAnalysis:(BOOL)arg1 ;
-(id)createFetchRequestContext;
-(BOOL)forConflictAnalysis;
-(NSManagedObjectID *)objectID;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(id)initWithObjectID:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(void)dealloc;
@end

