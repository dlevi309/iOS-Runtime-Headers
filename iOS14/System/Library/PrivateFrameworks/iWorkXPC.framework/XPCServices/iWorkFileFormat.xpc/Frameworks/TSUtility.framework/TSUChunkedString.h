/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <Foundation/NSMutableString.h>

@interface TSUChunkedString : NSMutableString {

	unsigned long long _length;
	vector<std::__1::shared_ptr<TSUStringChunk>, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > >* _chunks;
	unsigned long long _chunkLength;

}
-(void)appendString:(id)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)init;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)compact;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)dealloc;
-(id)initWithChunkLength:(unsigned long long)arg1 ;
-(void)p_appendRange:(NSRange)arg1 fromString:(id)arg2 ;
-(void)p_insertCharactersInRange:(NSRange)arg1 fromString:(id)arg2 atIndex:(unsigned long long)arg3 chunkIndex:(unsigned long long)arg4 ;
-(void)p_deleteCharactersInRange:(NSRange)arg1 chunkIndex:(unsigned long long)arg2 ;
-(void)p_compactChunksInRange:(NSRange)arg1 ;
@end

