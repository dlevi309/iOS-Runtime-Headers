/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setSuperdata:(id)arg1 ;
@end

