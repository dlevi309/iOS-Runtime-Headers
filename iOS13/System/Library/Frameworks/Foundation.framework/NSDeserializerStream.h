/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol NSDeserializerStream
@required
-(id)initFromMemoryNoCopy:(const void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
-(int)readInt;
-(unsigned long long)readAlignedDataSize;
-(void)readData:(void*)arg1 length:(unsigned long long)arg2;

@end

