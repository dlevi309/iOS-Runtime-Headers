/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@interface DBMigrationResult : NSObject {

	long long _errorCode;
	long long _dbVersion;

}

@property (assign,nonatomic) long long errorCode;              //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) long long dbVersion;              //@synthesize dbVersion=_dbVersion - In the implementation block
-(long long)errorCode;
-(long long)dbVersion;
-(id)initWithErrorCode:(long long)arg1 andDBVersion:(long long)arg2 ;
-(void)setDbVersion:(long long)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
@end

