/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


#import <Message/Message-Structs.h>
@class NSString, NSData;

@interface MFFileArchiveEntry : NSObject {

	BOOL _isDeflated;
	BOOL _isDirectory;
	NSString* _path;
	long long _uncompressedSize;
	NSData* _contents;
	NSRange _compressedRange;

}

@property (retain) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (assign) long long uncompressedSize;              //@synthesize uncompressedSize=_uncompressedSize - In the implementation block
@property (assign) NSRange compressedRange;                 //@synthesize compressedRange=_compressedRange - In the implementation block
@property (assign) BOOL isDeflated;                         //@synthesize isDeflated=_isDeflated - In the implementation block
@property (assign) BOOL isDirectory;                        //@synthesize isDirectory=_isDirectory - In the implementation block
@property (retain) NSData * contents;                       //@synthesize contents=_contents - In the implementation block
+(id)archiveEntryWithCentralHeader:(CentralHeader*)arg1 archiveData:(id)arg2 ;
+(id)archiveEntry;
-(id)description;
-(NSData *)contents;
-(NSString *)path;
-(BOOL)isDirectory;
-(void)setPath:(NSString *)arg1 ;
-(void)merge:(id)arg1 ;
-(void)setContents:(NSData *)arg1 ;
-(long long)uncompressedSize;
-(long long)compressedSize;
-(void)setUncompressedSize:(long long)arg1 ;
-(id)fileName;
-(void)setIsDirectory:(BOOL)arg1 ;
-(id)initWithContents:(id)arg1 path:(id)arg2 ;
-(id)initWithDirectoryPath:(id)arg1 ;
-(void)setIsDeflated:(BOOL)arg1 ;
-(void)setCompressedRange:(NSRange)arg1 ;
-(NSRange)compressedRange;
-(BOOL)isDeflated;
@end

