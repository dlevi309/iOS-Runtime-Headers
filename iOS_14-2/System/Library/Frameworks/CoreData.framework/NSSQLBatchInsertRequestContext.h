/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSBatchInsertRequest;

@interface NSSQLBatchInsertRequestContext : NSSQLStoreRequestContext

@property (nonatomic,readonly) NSBatchInsertRequest * request; 
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)isWritingRequest;
-(id)createObjectIDCaptureStatements;
-(NSBatchInsertRequest *)request;
-(id)dropObjectIDCaptureStatements;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(id)tempTableName;
@end

