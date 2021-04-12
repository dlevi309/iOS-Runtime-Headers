/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSFetchRequest, NSArray, NSSQLFetchRequestContext, NSString, NSBatchDeleteRequest;

@interface NSSQLBatchDeleteRequestContext : NSSQLStoreRequestContext {

	NSFetchRequest* _fetchRequestForObjectsToDelete;
	NSArray* _deleteStatements;
	NSArray* _deletedObjectIDs;
	NSSQLFetchRequestContext* _fetchContext;
	NSArray* _externalDataReferenceTriggerStatements;
	NSString* _tempTableName;
	NSArray* _externalDataReferencesToDelete;
	NSArray* _fileBackedFuturesToDelete;

}

@property (nonatomic,readonly) NSBatchDeleteRequest * request; 
@property (nonatomic,retain,readonly) NSFetchRequest * fetchRequestForObjectsToDelete; 
@property (nonatomic,retain,readonly) NSArray * deleteStatements;                                   //@synthesize deleteStatements=_deleteStatements - In the implementation block
@property (nonatomic,retain,readonly) NSSQLFetchRequestContext * fetchContext; 
@property (nonatomic,retain) NSArray * affectedObjectIDs;                                           //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,retain) NSArray * exernalDataReferenceStatements;                              //@synthesize externalDataReferenceTriggerStatements=_externalDataReferenceTriggerStatements - In the implementation block
@property (nonatomic,retain) NSString * tempTableName;                                              //@synthesize tempTableName=_tempTableName - In the implementation block
@property (nonatomic,retain) NSArray * externalDataReferencesToDelete;                              //@synthesize externalDataReferencesToDelete=_externalDataReferencesToDelete - In the implementation block
@property (nonatomic,retain) NSArray * fileBackedFuturesToDelete;                                   //@synthesize fileBackedFuturesToDelete=_fileBackedFuturesToDelete - In the implementation block
-(NSArray *)deleteStatements;
-(BOOL)isWritingRequest;
-(NSFetchRequest *)fetchRequestForObjectsToDelete;
-(NSSQLFetchRequestContext *)fetchContext;
-(NSBatchDeleteRequest *)request;
-(void)executePrologue;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(void)setExternalDataReferencesToDelete:(NSArray *)arg1 ;
-(void)setAffectedObjectIDs:(NSArray *)arg1 ;
-(void)setExernalDataReferenceStatements:(NSArray *)arg1 ;
-(void)setTempTableName:(NSString *)arg1 ;
-(NSArray *)exernalDataReferenceStatements;
-(NSArray *)fileBackedFuturesToDelete;
-(NSArray *)affectedObjectIDs;
-(id)_createFetchRequestContextForObjectsToDelete;
-(NSArray *)externalDataReferencesToDelete;
-(NSString *)tempTableName;
-(void)dealloc;
-(void)_createDeleteStatements;
-(void)setFileBackedFuturesToDelete:(NSArray *)arg1 ;
@end

