/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@interface _OSLogChunkBuffer : NSObject {

	BOOL _allocated;
	const char* _data;
	unsigned long long _sz;

}

@property (nonatomic,readonly) const char* data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long size;              //@synthesize sz=_sz - In the implementation block
-(unsigned long long)size;
-(const char*)data;
-(id)initWithChunk:(tracev3_chunk_s*)arg1 subchunk:(catalog_subchunk_s*)arg2 ;
-(void)dealloc;
@end

