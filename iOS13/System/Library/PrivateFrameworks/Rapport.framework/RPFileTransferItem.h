/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@class NSString, NSURL, NSDictionary, NSData, NSError;

@interface RPFileTransferItem : NSObject {

	BOOL _completed;
	long long _fileSize;
	/*^block*/id _completionHandler;
	NSString* _filename;
	NSURL* _itemURL;
	NSDictionary* _metadata;
	NSData* _sha256HashData;
	NSError* _error;
	unsigned long long _estimatedSize;
	NSData* _fileData;
	unsigned long long _fileID;
	unsigned long long _metadataSize;

}

@property (assign,nonatomic) BOOL completed;                                //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long estimatedSize;              //@synthesize estimatedSize=_estimatedSize - In the implementation block
@property (nonatomic,retain) NSData * fileData;                             //@synthesize fileData=_fileData - In the implementation block
@property (assign,nonatomic) unsigned long long fileID;                     //@synthesize fileID=_fileID - In the implementation block
@property (assign,nonatomic) long long fileSize;                            //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) unsigned long long metadataSize;               //@synthesize metadataSize=_metadataSize - In the implementation block
@property (nonatomic,copy) NSData * sha256HashData;                         //@synthesize sha256HashData=_sha256HashData - In the implementation block
@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * filename;                             //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy) NSURL * itemURL;                                 //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                         //@synthesize metadata=_metadata - In the implementation block
-(id)init;
-(id)description;
-(NSError *)error;
-(long long)fileSize;
-(void)setError:(NSError *)arg1 ;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(BOOL)completed;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setFileSize:(long long)arg1 ;
-(unsigned long long)fileID;
-(void)setFileID:(unsigned long long)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(NSData *)fileData;
-(void)setFileData:(NSData *)arg1 ;
-(NSURL *)itemURL;
-(void)setItemURL:(NSURL *)arg1 ;
-(unsigned long long)metadataSize;
-(void)setMetadataSize:(unsigned long long)arg1 ;
-(void)setEstimatedSize:(unsigned long long)arg1 ;
-(unsigned long long)estimatedSize;
-(void)setSha256HashData:(NSData *)arg1 ;
-(NSData *)sha256HashData;
@end

