/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
*/


#import <BiomeStorage/BiomeStorage-Structs.h>
@class NSString, NSData;

@interface BMFrame : NSObject {

	void* _framePtr;
	NSString* _storePath;
	NSData* _data;
	unsigned long long _offset;
	unsigned long long _nextOffset;
	SCD_Struct_BM8 _frameHeader;

}

@property (nonatomic,readonly) void* framePtr;                             //@synthesize framePtr=_framePtr - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BM9 frameHeader;                 //@synthesize frameHeader=_frameHeader - In the implementation block
@property (nonatomic,readonly) NSString * storePath;                       //@synthesize storePath=_storePath - In the implementation block
@property (nonatomic,readonly) unsigned dataVersion; 
@property (nonatomic,readonly) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                  //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long nextOffset;              //@synthesize nextOffset=_nextOffset - In the implementation block
@property (nonatomic,readonly) double creationTimestamp; 
@property (nonatomic,readonly) double modifiedTimestamp; 
-(unsigned)dataVersion;
-(NSString *)storePath;
-(double)modifiedTimestamp;
-(SCD_Struct_BM9)frameHeader;
-(double)creationTimestamp;
-(void*)framePtr;
-(unsigned long long)offset;
-(NSData *)data;
-(unsigned long long)nextOffset;
-(id)initWithHeader:(SCD_Struct_BM9)arg1 storePath:(id)arg2 data:(id)arg3 framePtr:(void*)arg4 offset:(unsigned long long)arg5 nextOffset:(unsigned long long)arg6 ;
-(void)dealloc;
@end

