/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSOutputStream;

@interface _NSJSONWriter : NSObject {

	NSOutputStream* outputStream;
	int kind;
	char* dataBuffer;
	unsigned long long dataBufferLen;
	unsigned long long dataLen;
	BOOL freeDataBuffer;
	char* tempBuffer;
	unsigned long long tempBufferLen;
	long long totalDataWritten;

}
-(id)init;
-(void)dealloc;
-(void)resizeTemporaryBuffer:(unsigned long long)arg1 ;
-(id)dataWithRootObject:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(long long)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)appendString:(id)arg1 range:(NSRange)arg2 error:(id*)arg3 ;
@end

