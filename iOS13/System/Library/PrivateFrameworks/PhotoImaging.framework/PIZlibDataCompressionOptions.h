/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@interface PIZlibDataCompressionOptions : NSObject {

	int _compressionLevel;
	int _strategy;
	int _windowBits;
	int _memoryLevel;
	unsigned long long _chunkSize;

}

@property (assign,nonatomic) int compressionLevel;                      //@synthesize compressionLevel=_compressionLevel - In the implementation block
@property (assign,nonatomic) int strategy;                              //@synthesize strategy=_strategy - In the implementation block
@property (assign,nonatomic) int windowBits;                            //@synthesize windowBits=_windowBits - In the implementation block
@property (assign,nonatomic) int memoryLevel;                           //@synthesize memoryLevel=_memoryLevel - In the implementation block
@property (assign,nonatomic) unsigned long long chunkSize;              //@synthesize chunkSize=_chunkSize - In the implementation block
+(id)defaultOptions;
-(void)setCompressionLevel:(int)arg1 ;
-(void)setCompressionStrategy:(int)arg1 ;
-(int)compressionLevel;
-(int)strategy;
-(void)setStrategy:(int)arg1 ;
-(int)windowBits;
-(void)setWindowBits:(int)arg1 ;
-(int)memoryLevel;
-(void)setMemoryLevel:(int)arg1 ;
-(unsigned long long)chunkSize;
-(void)setChunkSize:(unsigned long long)arg1 ;
@end

