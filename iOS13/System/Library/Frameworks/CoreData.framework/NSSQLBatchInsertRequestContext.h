/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSBatchInsertRequest;

@interface NSSQLBatchInsertRequestContext : NSSQLStoreRequestContext

@property (nonatomic,readonly) NSBatchInsertRequest * request; 
-(NSBatchInsertRequest *)request;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)isWritingRequest;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(id)tempTableName;
-(id)createObjectIDCaptureStatements;
-(id)dropObjectIDCaptureStatements;
@end

