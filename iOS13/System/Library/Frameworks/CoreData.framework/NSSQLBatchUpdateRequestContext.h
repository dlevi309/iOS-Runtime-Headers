/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSBatchUpdateRequest *)request;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)isWritingRequest;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(void)executePrologue;
-(id)tempTableName;
-(id)createObjectIDCaptureStatements;
-(id)dropObjectIDCaptureStatements;
-(id)fetchRequestDescribingObjectsToUpdate;
-(void)_createUpdateStatement;
-(NSSQLiteStatement *)updateStatement;
-(id)createFetchRequestContextForObjectsToUpdate;
@end

