/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@class NSString;

@interface VSMemoryMap : NSObject {

	int _fd;
	NSString* _filePath;
	unsigned long long _fileSize;
	void* _mappedData;

}

@property (nonatomic,readonly) NSString * filePath;                      //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) unsigned long long fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) void* mappedData;                         //@synthesize mappedData=_mappedData - In the implementation block
@property (nonatomic,readonly) int fd;                                   //@synthesize fd=_fd - In the implementation block
-(void)dealloc;
-(unsigned long long)fileSize;
-(int)fd;
-(id)initWithFilePath:(id)arg1 ;
-(NSString *)filePath;
-(void*)mappedData;
-(BOOL)mmap;
-(void)madvise;
@end

