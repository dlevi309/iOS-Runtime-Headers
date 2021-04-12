/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class NSString, NSNumber;

@interface BRCDatabaseBackupRecord : NSObject {

	BOOL _isDirectory;
	unsigned _genCount;
	NSString* _relativePath;
	NSNumber* _fileID;
	NSNumber* _docID;

}

@property (nonatomic,retain) NSString * relativePath;              //@synthesize relativePath=_relativePath - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                    //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * docID;                     //@synthesize docID=_docID - In the implementation block
@property (assign,nonatomic) unsigned genCount;                    //@synthesize genCount=_genCount - In the implementation block
@property (assign,nonatomic) BOOL isDirectory;                     //@synthesize isDirectory=_isDirectory - In the implementation block
-(id)description;
-(BOOL)isDirectory;
-(NSString *)relativePath;
-(NSNumber *)fileID;
-(void)setFileID:(NSNumber *)arg1 ;
-(void)setIsDirectory:(BOOL)arg1 ;
-(void)setRelativePath:(NSString *)arg1 ;
-(id)initWithRelativePath:(id)arg1 fileID:(id)arg2 docID:(id)arg3 genCount:(unsigned)arg4 isDirectory:(BOOL)arg5 ;
-(NSNumber *)docID;
-(unsigned)genCount;
-(id)initWithPQLResultSet:(id)arg1 ;
-(void)setDocID:(NSNumber *)arg1 ;
-(void)setGenCount:(unsigned)arg1 ;
@end

