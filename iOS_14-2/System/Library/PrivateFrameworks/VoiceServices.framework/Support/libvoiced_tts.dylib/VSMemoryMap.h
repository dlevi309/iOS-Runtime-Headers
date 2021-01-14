/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)filePath;
-(BOOL)mmap;
-(unsigned long long)fileSize;
-(int)fd;
-(id)initWithFilePath:(id)arg1 ;
-(void)madvise;
-(void)dealloc;
-(void*)mappedData;
@end

