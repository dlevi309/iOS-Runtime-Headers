/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/


#import <ExposureNotification/ExposureNotification-Structs.h>
@class ENArchive, NSMutableDictionary, NSMutableData, ENProtobufCoder, NSDictionary, NSData;

@interface ENFile : NSObject {

	ENArchive* _archive;
	_sFILE* _fileHandle;
	unsigned long long _keyIndex;
	BOOL _reading;
	unsigned _metadataFlags;
	NSMutableDictionary* _mutableMetadata;
	NSMutableData* _outputData;
	ENProtobufCoder* _protobufCoder;
	ENProtobufCoder* _tekProtobufCoder;
	NSDictionary* _metadata;
	NSData* _sha256Data;

}

@property (nonatomic,copy) NSDictionary * metadata;                   //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSData * sha256Data;              //@synthesize sha256Data=_sha256Data - In the implementation block
-(BOOL)closeAndReturnError:(id*)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)dealloc;
-(BOOL)_readPrepareAndReturnError:(id*)arg1 ;
-(BOOL)_writePrepareAndReturnError:(id*)arg1 ;
-(BOOL)openWithFD:(int)arg1 reading:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_readHeaderFromArchive:(id)arg1 error:(id*)arg2 ;
-(BOOL)_readHashFromArchive:(id)arg1 error:(id*)arg2 ;
-(BOOL)_readMetadataFromArchive:(id)arg1 error:(id*)arg2 ;
-(BOOL)_readHeaderFromFile:(_sFILE*)arg1 error:(id*)arg2 ;
-(BOOL)_readHashFromFile:(_sFILE*)arg1 error:(id*)arg2 ;
-(BOOL)_readMetadataFromFileHandle:(_sFILE*)arg1 error:(id*)arg2 ;
-(BOOL)_readMetadataFromCoder:(id)arg1 error:(id*)arg2 ;
-(BOOL)_writeMetadataAndReturnError:(id*)arg1 ;
-(id)readTEKWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(id)_readKeyWithPtr:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeTEK:(id)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)openWithArchive:(id)arg1 error:(id*)arg2 ;
-(BOOL)openWithFileSystemRepresentation:(const char*)arg1 reading:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)openForWritingToData:(id)arg1 error:(id*)arg2 ;
-(id)readTEKAndReturnError:(id*)arg1 ;
-(BOOL)writeTEK:(id)arg1 error:(id*)arg2 ;
-(NSData *)sha256Data;
@end

