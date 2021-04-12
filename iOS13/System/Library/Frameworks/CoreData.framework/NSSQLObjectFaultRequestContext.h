/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSManagedObjectID *)objectID;
-(id)fetchRequest;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(id)initWithObjectID:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)forConflictAnalysis;
-(id)createFetchRequestContext;
-(void)setForConflictAnalysis:(BOOL)arg1 ;
@end

