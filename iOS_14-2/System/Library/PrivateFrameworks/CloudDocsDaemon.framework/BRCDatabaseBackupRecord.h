/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)fileID;
-(NSNumber *)docID;
-(void)setIsDirectory:(BOOL)arg1 ;
-(NSString *)relativePath;
-(id)description;
-(BOOL)isDirectory;
-(void)setRelativePath:(NSString *)arg1 ;
-(void)setFileID:(NSNumber *)arg1 ;
-(id)initWithRelativePath:(id)arg1 fileID:(id)arg2 docID:(id)arg3 genCount:(unsigned)arg4 isDirectory:(BOOL)arg5 ;
-(unsigned)genCount;
-(id)initWithPQLResultSet:(id)arg1 ;
-(void)setDocID:(NSNumber *)arg1 ;
-(void)setGenCount:(unsigned)arg1 ;
@end

