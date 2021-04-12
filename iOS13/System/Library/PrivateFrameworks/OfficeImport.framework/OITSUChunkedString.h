/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <Foundation/NSMutableString.h>

@interface OITSUChunkedString : NSMutableString {

	unsigned long long _length;
	vector<std::__1::shared_ptr<TSUStringChunk>, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > >* _chunks;
	unsigned long long _chunkLength;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)appendString:(id)arg1 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)compact;
-(id)initWithChunkLength:(unsigned long long)arg1 ;
-(void)p_appendRange:(NSRange)arg1 fromString:(id)arg2 ;
-(void)p_insertCharactersInRange:(NSRange)arg1 fromString:(id)arg2 atIndex:(unsigned long long)arg3 chunkIndex:(unsigned long long)arg4 ;
-(void)p_deleteCharactersInRange:(NSRange)arg1 chunkIndex:(unsigned long long)arg2 ;
-(void)p_compactChunksInRange:(NSRange)arg1 ;
@end

