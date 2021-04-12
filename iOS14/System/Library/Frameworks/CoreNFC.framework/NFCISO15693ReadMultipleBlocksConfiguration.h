/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <CoreNFC/CoreNFC-Structs.h>
#import <CoreNFC/NFCTagCommandConfiguration.h>

@interface NFCISO15693ReadMultipleBlocksConfiguration : NFCTagCommandConfiguration {

	unsigned char _flags;
	unsigned long long _chunkSize;
	NSRange _range;

}

@property (assign,nonatomic) unsigned char flags;                       //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) NSRange range;                             //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned long long chunkSize;              //@synthesize chunkSize=_chunkSize - In the implementation block
-(void)setRange:(NSRange)arg1 ;
-(NSRange)range;
-(unsigned char)flags;
-(void)setFlags:(unsigned char)arg1 ;
-(void)setChunkSize:(unsigned long long)arg1 ;
-(unsigned long long)chunkSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRange:(NSRange)arg1 chunkSize:(unsigned long long)arg2 maximumRetries:(unsigned long long)arg3 retryInterval:(double)arg4 ;
-(id)initWithRange:(NSRange)arg1 chunkSize:(unsigned long long)arg2 ;
-(id)asNSDataArrayWithUID:(id)arg1 error:(id*)arg2 ;
@end

