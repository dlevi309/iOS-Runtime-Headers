/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


#import <VoiceServices/VoiceServices-Structs.h>
@class NSString, NSMutableData;

@interface VSMappedData : NSObject {

	BOOL _shouldCleanFile;
	NSString* _filePath;
	unsigned long long _totalLength;
	void* _mmappedData;
	unsigned long long _mappedLength;
	NSMutableData* _fallbackInMemoryData;

}

@property (nonatomic,retain) NSString * filePath;                               //@synthesize filePath=_filePath - In the implementation block
@property (assign,nonatomic) unsigned long long totalLength;                    //@synthesize totalLength=_totalLength - In the implementation block
@property (assign,nonatomic) void* mmappedData;                                 //@synthesize mmappedData=_mmappedData - In the implementation block
@property (assign,nonatomic) unsigned long long mappedLength;                   //@synthesize mappedLength=_mappedLength - In the implementation block
@property (nonatomic,retain) NSMutableData * fallbackInMemoryData;              //@synthesize fallbackInMemoryData=_fallbackInMemoryData - In the implementation block
@property (assign,nonatomic) BOOL shouldCleanFile;                              //@synthesize shouldCleanFile=_shouldCleanFile - In the implementation block
-(NSString *)filePath;
-(void)_convertToFallbackMemory;
-(void)_appendToFallbackMemory:(id)arg1 ;
-(void)_appendToMappedMemory:(id)arg1 ;
-(void*)bytesAtOffset:(unsigned long long)arg1 ;
-(void)setTotalLength:(unsigned long long)arg1 ;
-(void*)mmappedData;
-(void)setMmappedData:(void*)arg1 ;
-(unsigned long long)mappedLength;
-(void)setMappedLength:(unsigned long long)arg1 ;
-(NSMutableData *)fallbackInMemoryData;
-(void)setFallbackInMemoryData:(NSMutableData *)arg1 ;
-(BOOL)shouldCleanFile;
-(void)setShouldCleanFile:(BOOL)arg1 ;
-(id)init;
-(unsigned long long)totalLength;
-(NSRange)appendData:(id)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(id)initWithFilePath:(id)arg1 initialSize:(unsigned long long)arg2 ;
-(void)dealloc;
@end

