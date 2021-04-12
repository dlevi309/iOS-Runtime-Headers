/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(const char*)data;
-(unsigned long long)size;
-(id)initWithChunk:(tracev3_chunk_s*)arg1 subchunk:(catalog_subchunk_s*)arg2 ;
@end

