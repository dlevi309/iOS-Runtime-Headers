/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@class NSURL;

@interface CallDBMetaInfo : NSObject {

	NSURL* _dbInfoPrefFile;

}

@property (retain) NSURL * dbInfoPrefFile;              //@synthesize dbInfoPrefFile=_dbInfoPrefFile - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(long long)readDatabaseVersion:(BOOL)arg1 ;
-(BOOL)validateInfo:(BOOL)arg1 ;
-(NSURL *)dbInfoPrefFile;
-(void)writeDatabaseVersion:(long long)arg1 isTemp:(BOOL)arg2 ;
-(void)setDbInfoPrefFile:(NSURL *)arg1 ;
@end

