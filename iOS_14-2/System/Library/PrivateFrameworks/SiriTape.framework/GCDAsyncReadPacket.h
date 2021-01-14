/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
*/


@class NSMutableData, NSData;

@interface GCDAsyncReadPacket : NSObject {

	NSMutableData* buffer;
	unsigned long long startOffset;
	unsigned long long bytesDone;
	unsigned long long maxLength;
	double timeout;
	unsigned long long readLength;
	NSData* term;
	BOOL bufferOwner;
	unsigned long long originalBufferLength;
	long long tag;

}
-(id)initWithData:(id)arg1 startOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 timeout:(double)arg4 readLength:(unsigned long long)arg5 terminator:(id)arg6 tag:(long long)arg7 ;
-(void)ensureCapacityForAdditionalDataOfLength:(unsigned long long)arg1 ;
-(unsigned long long)optimalReadLengthWithDefault:(unsigned long long)arg1 shouldPreBuffer:(BOOL*)arg2 ;
-(unsigned long long)readLengthForNonTermWithHint:(unsigned long long)arg1 ;
-(unsigned long long)readLengthForTermWithHint:(unsigned long long)arg1 shouldPreBuffer:(BOOL*)arg2 ;
-(unsigned long long)readLengthForTermWithPreBuffer:(id)arg1 found:(BOOL*)arg2 ;
-(long long)searchForTermAfterPreBuffering:(long long)arg1 ;
@end

