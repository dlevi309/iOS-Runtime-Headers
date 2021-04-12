/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSFileHandle;

@interface HDDatabaseJournalFile : NSObject {

	NSString* _fileName;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,copy) NSString * fileName;                      //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
-(NSFileHandle *)fileHandle;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
@end

