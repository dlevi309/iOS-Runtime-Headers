/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


#import <Message/Message-Structs.h>
@class NSData, NSMutableData;

@interface MFFileArchive : NSObject {

	NSData* _inputData;
	NSMutableData* _outputData;
	/*^block*/id _readerBlock;
	/*^block*/id _writerBlock;
	NSRange _inputRange;

}

@property (nonatomic,retain) NSData * inputData;                      //@synthesize inputData=_inputData - In the implementation block
@property (assign,nonatomic) NSRange inputRange;                      //@synthesize inputRange=_inputRange - In the implementation block
@property (nonatomic,retain) NSMutableData * outputData;              //@synthesize outputData=_outputData - In the implementation block
@property (nonatomic,copy) id readerBlock;                            //@synthesize readerBlock=_readerBlock - In the implementation block
@property (nonatomic,copy) id writerBlock;                            //@synthesize writerBlock=_writerBlock - In the implementation block
+(id)archive;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSMutableData *)outputData;
-(NSRange)inputRange;
-(void)setInputRange:(NSRange)arg1 ;
-(NSData *)inputData;
-(void)compressContents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unregisterBlocks;
-(id)readerBlock;
-(id)writerBlock;
-(archiveRef)_compressionArchive;
-(int)_compressContents:(id)arg1 withArchive:(archiveRef)arg2 error:(id*)arg3 ;
-(id)_errorForArchiveStatus:(long long)arg1 ;
-(id)_compressContents:(id)arg1 error:(id*)arg2 ;
-(int)_archiveDirectoryName:(id)arg1 withArchive:(archiveRef)arg2 error:(id*)arg3 ;
-(int)_compressContents:(id)arg1 fileName:(id)arg2 withArchive:(archiveRef)arg3 error:(id*)arg4 ;
-(int)_compressionCompleteForArchive:(archiveRef)arg1 error:(id*)arg2 ;
-(archive_entryRef)_compressionArchiveEntryWithName:(id)arg1 length:(unsigned long long)arg2 isDirectory:(BOOL)arg3 ;
-(archiveRef)_decompressionArchive;
-(BOOL)_decompressArchive:(archiveRef)arg1 intoArchiveDirectory:(id)arg2 error:(id*)arg3 ;
-(int)_decompressionCompleteForArchive:(archiveRef)arg1 error:(id*)arg2 ;
-(BOOL)_decompressContents:(id)arg1 inMemoryWithError:(id*)arg2 mainEntry:(BOOL)arg3 ;
-(void)registerBlocks:(/*^block*/id)arg1 writer:(/*^block*/id)arg2 ;
-(id)compressFolder:(id)arg1 error:(id*)arg2 ;
-(int)_compressWithArchive:(archiveRef)arg1 error:(id*)arg2 ;
-(void)decompressContents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInputData:(NSData *)arg1 ;
-(void)setOutputData:(NSMutableData *)arg1 ;
-(void)setReaderBlock:(id)arg1 ;
-(void)setWriterBlock:(id)arg1 ;
@end

