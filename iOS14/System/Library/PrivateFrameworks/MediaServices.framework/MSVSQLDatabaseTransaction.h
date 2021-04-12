/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/MSVSQLExecutable.h>

@class NSString, MSVSQLDatabase;

@interface MSVSQLDatabaseTransaction : NSObject <MSVSQLExecutable> {

	BOOL _invalid;
	NSString* _name;
	MSVSQLDatabase* _database;
	sqlite3Ref _databaseHandle;

}

@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)commit;
-(id)createSavepoint;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)rollbackToSavepoint:(id)arg1 ;
-(BOOL)_releaseSavepoint:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(id)statementWithString:(id)arg1 error:(id*)arg2 ;
-(id)resultsForStatement:(id)arg1 ;
-(BOOL)rollback;
-(void)dealloc;
@end

