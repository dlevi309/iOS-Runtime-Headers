/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKOperation.h>

@class CKDatabase;

@interface CKDatabaseOperation : CKOperation {

	CKDatabase* _database;

}

@property (nonatomic,retain) CKDatabase * database;              //@synthesize database=_database - In the implementation block
-(void)setDatabase:(CKDatabase *)arg1 ;
-(CKDatabase *)database;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(id)flowControlKey;
@end

