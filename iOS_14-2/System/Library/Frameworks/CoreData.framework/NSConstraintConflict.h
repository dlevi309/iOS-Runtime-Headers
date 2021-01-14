/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSManagedObject, NSDictionary;

@interface NSConstraintConflict : NSObject <NSSecureCoding> {

	NSArray* _constraint;
	NSManagedObject* _databaseObject;
	NSDictionary* _databaseSnapshot;
	NSDictionary* _conflictedValues;
	NSArray* _conflictingObjects;
	NSArray* _conflictingSnapshots;

}

@property (copy,readonly) NSArray * constraint;                            //@synthesize constraint=_constraint - In the implementation block
@property (copy,readonly) NSDictionary * constraintValues;                 //@synthesize conflictedValues=_conflictedValues - In the implementation block
@property (retain,readonly) NSManagedObject * databaseObject;              //@synthesize databaseObject=_databaseObject - In the implementation block
@property (retain,readonly) NSDictionary * databaseSnapshot;               //@synthesize databaseSnapshot=_databaseSnapshot - In the implementation block
@property (copy,readonly) NSArray * conflictingObjects;                    //@synthesize conflictingObjects=_conflictingObjects - In the implementation block
@property (copy,readonly) NSArray * conflictingSnapshots;                  //@synthesize conflictingSnapshots=_conflictingSnapshots - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)constraint;
-(BOOL)_isDBConflict;
-(void)_doCleanupForXPCStore:(id)arg1 context:(id)arg2 ;
-(NSManagedObject *)databaseObject;
-(NSArray *)conflictingSnapshots;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithConstraint:(id)arg1 databaseObject:(id)arg2 databaseSnapshot:(id)arg3 conflictingObjects:(id)arg4 conflictingSnapshots:(id)arg5 ;
-(NSArray *)conflictingObjects;
-(id)description;
-(NSDictionary *)constraintValues;
-(NSDictionary *)databaseSnapshot;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

