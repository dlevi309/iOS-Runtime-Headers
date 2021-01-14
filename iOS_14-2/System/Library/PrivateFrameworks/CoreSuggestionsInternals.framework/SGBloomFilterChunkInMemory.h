/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/SGBloomFilterChunk.h>

@class NSString;

@interface SGBloomFilterChunkInMemory : NSObject <SGBloomFilterChunk> {

	unsigned _count;
	unsigned char _buf[49200];

}

@property (nonatomic,readonly) unsigned count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned)count;
-(BOOL)exists:(/*function pointer*/void*)arg1 ;
-(void)add:(/*function pointer*/void*)arg1 ;
@end

