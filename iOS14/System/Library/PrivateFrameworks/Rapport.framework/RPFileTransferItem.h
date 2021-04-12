/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)estimatedSize;
-(void)setCompletionHandler:(id)arg1 ;
-(unsigned long long)fileID;
-(BOOL)completed;
-(NSString *)filename;
-(void)setItemURL:(NSURL *)arg1 ;
-(long long)fileSize;
-(id)completionHandler;
-(void)setError:(NSError *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSError *)error;
-(NSURL *)itemURL;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)description;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setFilename:(NSString *)arg1 ;
-(NSData *)fileData;
-(void)setFileSize:(long long)arg1 ;
-(NSDictionary *)metadata;
-(void)setFileData:(NSData *)arg1 ;
-(void)setFileID:(unsigned long long)arg1 ;
-(unsigned long long)metadataSize;
-(void)setMetadataSize:(unsigned long long)arg1 ;
-(void)setEstimatedSize:(unsigned long long)arg1 ;
-(void)setSha256HashData:(NSData *)arg1 ;
-(NSData *)sha256HashData;
@end

