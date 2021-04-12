/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@interface _OSLogChunkStore : NSObject {

	const void* _ptr;
	unsigned long long _sz;

}
-(id)initWithBytes:(const void*)arg1 size:(unsigned long long)arg2 ;
-(void)enumerateChunksInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateChunksUsingBlock:(/*^block*/id)arg1 ;
@end

