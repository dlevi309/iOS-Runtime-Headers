/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol NSDeserializerStream
@required
-(int)readInt;
-(id)initFromMemoryNoCopy:(const void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
-(void)readData:(void*)arg1 length:(unsigned long long)arg2;
-(unsigned long long)readAlignedDataSize;

@end

