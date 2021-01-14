/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <libobjc.A.dylib/MSVSQLDatabaseTransactionSavepoint.h>

@class NSString, MSVSQLDatabaseTransaction;

@interface _MSVSQLDatabaseTransactionSavepoint : NSObject <MSVSQLDatabaseTransactionSavepoint> {

	NSString* _name;
	MSVSQLDatabaseTransaction* _transaction;

}

@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)commit;
-(NSString *)name;
-(NSString *)description;
-(void)dealloc;
@end

