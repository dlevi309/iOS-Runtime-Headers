/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalableOperation.h>

@class NSDictionary, NSArray;

@interface HDInsertDeleteAndAssociateObjectsOperation : HDJournalableOperation {

	NSDictionary* _objectsToInsertByDataProvenance;
	NSArray* _objectsToDelete;
	NSDictionary* _associations;

}

@property (nonatomic,copy,readonly) NSDictionary * objectsToInsertByDataProvenance;              //@synthesize objectsToInsertByDataProvenance=_objectsToInsertByDataProvenance - In the implementation block
@property (nonatomic,copy,readonly) NSArray * objectsToDelete;                                   //@synthesize objectsToDelete=_objectsToDelete - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * associations;                                 //@synthesize associations=_associations - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)associations;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithObjectsToInsertByDataProvenance:(id)arg1 objectsToDelete:(id)arg2 associations:(id)arg3 ;
-(NSDictionary *)objectsToInsertByDataProvenance;
-(NSArray *)objectsToDelete;
@end

