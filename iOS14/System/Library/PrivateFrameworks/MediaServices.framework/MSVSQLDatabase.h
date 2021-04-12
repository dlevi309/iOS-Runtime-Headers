/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/MSVSQLExecutable.h>

@class NSString;

@interface MSVSQLDatabase : NSObject <MSVSQLExecutable> {

	sqlite3Ref _databaseHandle;
	NSString* _databasePath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 ;
-(id)executeSQL:(id)arg1 ;
-(id)transactionWithName:(id)arg1 ;
-(NSString *)description;
-(id)statementWithString:(id)arg1 error:(id*)arg2 ;
-(id)resultsForStatement:(id)arg1 ;
-(id)initWithMemory;
-(void)dealloc;
@end

