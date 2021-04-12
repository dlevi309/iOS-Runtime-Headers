/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@class NSURL;

@interface CallDBMetaInfo : NSObject {

	NSURL* _dbInfoPrefFile;

}

@property (retain) NSURL * dbInfoPrefFile;              //@synthesize dbInfoPrefFile=_dbInfoPrefFile - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)setDbInfoPrefFile:(NSURL *)arg1 ;
-(void)writeDatabaseVersion:(long long)arg1 isTemp:(BOOL)arg2 ;
-(NSURL *)dbInfoPrefFile;
-(BOOL)validateInfo:(BOOL)arg1 ;
-(long long)readDatabaseVersion:(BOOL)arg1 ;
@end

