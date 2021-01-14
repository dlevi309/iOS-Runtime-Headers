/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASCFBurstTrie : NSObject {

	CFBurstTrieRef _trie;

}
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(unsigned)payloadForUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
-(unsigned)payloadForString:(id)arg1 ;
-(unsigned)payloadForString:(id)arg1 range:(NSRange)arg2 ;
-(void)runBlockWithTrie:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

