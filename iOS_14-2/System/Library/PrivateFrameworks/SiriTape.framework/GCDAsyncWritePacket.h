/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

