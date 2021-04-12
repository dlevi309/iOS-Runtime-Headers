/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@class CKDatabase, CKDatabaseOperationInfo;

@interface CKDatabaseOperation : CKOperation {

	CKDatabase* _database;

}

@property (nonatomic,readonly) CKDatabaseOperationInfo * operationInfo; 
@property (nonatomic,retain) CKDatabase * database;                                  //@synthesize database=_database - In the implementation block
-(void)fillFromOperationInfo:(id)arg1 ;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(long long)databaseScope;
-(CKDatabase *)database;
-(id)flowControlKey;
@end

