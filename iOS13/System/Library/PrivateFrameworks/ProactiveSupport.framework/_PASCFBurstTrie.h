/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASCFBurstTrie : NSObject {

	CFBurstTrieRef _trie;

}
-(id)init;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(unsigned)payloadForString:(id)arg1 ;
-(unsigned)payloadForString:(id)arg1 range:(NSRange)arg2 ;
-(unsigned)payloadForUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)runBlockWithTrie:(/*^block*/id)arg1 ;
@end

