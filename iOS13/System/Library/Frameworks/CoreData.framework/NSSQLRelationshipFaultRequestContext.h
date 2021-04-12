/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSRelationshipDescription, NSManagedObjectID, NSSQLModel;

@interface NSSQLRelationshipFaultRequestContext : NSSQLStoreRequestContext {

	NSRelationshipDescription* _relationship;
	NSManagedObjectID* _objectID;

}

@property (nonatomic,readonly) NSRelationshipDescription * relationship;              //@synthesize relationship=_relationship - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                          //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) NSSQLModel * sqlModel; 
-(void)dealloc;
-(NSManagedObjectID *)objectID;
-(NSRelationshipDescription *)relationship;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(id)initWithObjectID:(id)arg1 relationship:(id)arg2 context:(id)arg3 sqlCore:(id)arg4 ;
-(NSSQLModel *)sqlModel;
@end

