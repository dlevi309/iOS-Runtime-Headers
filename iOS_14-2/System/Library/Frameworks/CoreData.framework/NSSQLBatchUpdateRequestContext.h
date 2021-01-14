/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSSQLiteStatement, NSFetchRequest, NSBatchUpdateRequest;

@interface NSSQLBatchUpdateRequestContext : NSSQLStoreRequestContext {

	NSSQLiteStatement* _updateStatement;
	NSFetchRequest* _fetchRequest;

}

@property (nonatomic,readonly) NSBatchUpdateRequest * request; 
@property (nonatomic,readonly) NSSQLiteStatement * updateStatement; 
-(id)fetchRequestDescribingObjectsToUpdate;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)isWritingRequest;
-(id)createObjectIDCaptureStatements;
-(NSBatchUpdateRequest *)request;
-(id)dropObjectIDCaptureStatements;
-(void)executePrologue;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(void)_createUpdateStatement;
-(NSSQLiteStatement *)updateStatement;
-(id)createFetchRequestContextForObjectsToUpdate;
-(id)tempTableName;
-(void)dealloc;
@end

