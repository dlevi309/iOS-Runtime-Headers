/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <CoreFoundation/NSInputStream.h>

@class NSFileHandle, NSNumber;

@interface UAFileChunkInputStream : NSInputStream {

	NSFileHandle* _file;
	NSNumber* _chunkOffset;
	long long _chunkSize;
	NSNumber* _currentOffset;
	long long _readSize;
	unsigned long long _status;

}

@property (retain) NSFileHandle * file;                    //@synthesize file=_file - In the implementation block
@property (retain) NSNumber * chunkOffset;                 //@synthesize chunkOffset=_chunkOffset - In the implementation block
@property (assign) long long chunkSize;                    //@synthesize chunkSize=_chunkSize - In the implementation block
@property (retain) NSNumber * currentOffset;               //@synthesize currentOffset=_currentOffset - In the implementation block
@property (assign) long long readSize;                     //@synthesize readSize=_readSize - In the implementation block
@property (assign) unsigned long long status;              //@synthesize status=_status - In the implementation block
-(unsigned long long)streamStatus;
-(id)streamError;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(NSFileHandle *)file;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(void)open;
-(void)setFile:(NSFileHandle *)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)close;
-(BOOL)hasBytesAvailable;
-(id)propertyForKey:(id)arg1 ;
-(long long)readSize;
-(void)setChunkSize:(long long)arg1 ;
-(id)initWithFileHandle:(id)arg1 offsetInFile:(id)arg2 size:(long long)arg3 ;
-(NSNumber *)currentOffset;
-(NSNumber *)chunkOffset;
-(void)setChunkOffset:(NSNumber *)arg1 ;
-(void)setCurrentOffset:(NSNumber *)arg1 ;
-(void)setReadSize:(long long)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(long long)chunkSize;
-(unsigned long long)status;
@end

