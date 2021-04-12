/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSInputStream;

@interface TSWPObfuscatedFontDataProvider : NSObject {

	NSInputStream* _stream;
	unsigned char _xorMask[20];

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 groupUID:(id)arg2 ;
-(long long)p_currentOffset;
-(unsigned long long)readBytes:(char*)arg1 count:(unsigned long long)arg2 ;
-(long long)skipForwardBy:(long long)arg1 ;
-(void)rewind;
@end

