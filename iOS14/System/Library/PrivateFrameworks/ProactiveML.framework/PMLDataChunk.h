/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PMLDataChunk : NSObject <NSCopying> {

	NSData* _backingData;
	NSData* _superdata;

}
+(unsigned)dataChunkType;
+(id)chunkOfType:(unsigned)arg1 data:(id)arg2 superdata:(id)arg3 ;
+(id)chunksFromFileAtPath:(id)arg1 ;
+(id)chunksFromData:(id)arg1 ;
+(id)serializeChunks:(id)arg1 ;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSuperdata:(id)arg1 ;
@end

