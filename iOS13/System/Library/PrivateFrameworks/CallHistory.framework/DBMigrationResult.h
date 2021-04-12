/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@interface DBMigrationResult : NSObject {

	long long _errorCode;
	long long _dbVersion;

}

@property (assign,nonatomic) long long errorCode;              //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) long long dbVersion;              //@synthesize dbVersion=_dbVersion - In the implementation block
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(id)initWithErrorCode:(long long)arg1 andDBVersion:(long long)arg2 ;
-(long long)dbVersion;
-(void)setDbVersion:(long long)arg1 ;
@end

