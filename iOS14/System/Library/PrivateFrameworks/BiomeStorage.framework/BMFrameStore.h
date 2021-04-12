/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
*/


#import <BiomeStorage/BiomeStorage-Structs.h>
@class BMMemoryMapping, NSString, NSFileHandle;

@interface BMFrameStore : NSObject {

	unsigned _datastoreVersion;
	BMMemoryMapping* _frames;
	BMMemoryMapping* _header;
	unsigned long long _permission;
	double _lastAbsoluteTimestamp;
	unsigned _usedBytes;
	NSString* _segmentName;
	NSFileHandle* _backingFile;

}

@property (readonly) unsigned usedBytes; 
@property (nonatomic,copy) NSString * segmentName;                    //@synthesize segmentName=_segmentName - In the implementation block
@property (nonatomic,retain) NSFileHandle * backingFile;              //@synthesize backingFile=_backingFile - In the implementation block
+(SCD_Struct_BM0)segmentHeaderFromFile:(id)arg1 withVersion:(unsigned)arg2 ;
-(void)sync;
-(NSString *)segmentName;
-(unsigned char)writeFrameForBytes:(const void*)arg1 length:(unsigned long long)arg2 dataVersion:(unsigned)arg3 timestamp:(double)arg4 ;
-(id)init;
-(id)initWithFileHandle:(id)arg1 maxSize:(unsigned long long)arg2 permission:(unsigned long long)arg3 datastoreVersion:(unsigned long long)arg4 ;
-(void)setBackingFile:(NSFileHandle *)arg1 ;
-(unsigned char)appendFrameHeader:(SCD_Struct_BM3*)arg1 offset:(unsigned long long*)arg2 ;
-(void)updateHeader;
-(void)setSegmentName:(NSString *)arg1 ;
-(void)enumerateFromOffset:(unsigned long long)arg1 withCallback:(/*^block*/id)arg2 ;
-(BOOL)resizeBackingFileTo:(unsigned long long)arg1 ;
-(NSFileHandle *)backingFile;
-(void)markFrameAsRemoved:(id)arg1 ;
-(unsigned)usedBytes;
-(void)dealloc;
@end

