/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)contents;
-(void)merge:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setIsDirectory:(BOOL)arg1 ;
-(NSString *)path;
-(id)fileName;
-(id)description;
-(void)setContents:(NSData *)arg1 ;
-(id)initWithContents:(id)arg1 path:(id)arg2 ;
-(BOOL)isDirectory;
-(BOOL)isDeflated;
-(long long)uncompressedSize;
-(void)setUncompressedSize:(long long)arg1 ;
-(void)setIsDeflated:(BOOL)arg1 ;
-(void)setCompressedRange:(NSRange)arg1 ;
-(NSRange)compressedRange;
-(id)initWithDirectoryPath:(id)arg1 ;
-(long long)compressedSize;
@end

