/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <Foundation/NSOperation.h>

@class NSString, NSError;

@interface ML3DatabaseRecoveryOperation : NSOperation {

	NSString* _path;
	NSError* _error;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSString *)path;
-(NSError *)error;
-(void)main;
-(void)_recreateDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDatabaseFilePath:(id)arg1 ;
-(id)_createSQLiteErrorWithCode:(int)arg1 description:(id)arg2 ;
-(id)_lastCorruptionRestoreAttemptDate;
-(void)_updateLastCorruptionRestoreAttemptDate;
@end

