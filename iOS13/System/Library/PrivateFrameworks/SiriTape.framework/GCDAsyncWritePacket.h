/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
*/


@class NSData;

@interface GCDAsyncWritePacket : NSObject {

	NSData* buffer;
	unsigned long long bytesDone;
	long long tag;
	double timeout;

}
-(id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long long)arg3 ;
@end

