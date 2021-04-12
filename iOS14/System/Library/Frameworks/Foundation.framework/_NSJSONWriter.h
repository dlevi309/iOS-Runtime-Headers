/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSOutputStream, NSError;

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
	NSError* _failure;

}

@property (retain) NSError * failure;              //@synthesize failure=_failure - In the implementation block
-(id)dataWithRootObject:(id)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(void)setFailure:(NSError *)arg1 ;
-(BOOL)appendString:(id)arg1 range:(NSRange)arg2 ;
-(NSError *)failure;
-(void)dealloc;
-(long long)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 ;
@end

