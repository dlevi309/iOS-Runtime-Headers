/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@protocol VNSerializingInternal
@property (nonatomic,readonly) unsigned long long serializedLength; 
@required
-(id)initWithState:(id)arg1 byteOffset:(unsigned long long*)arg2 error:(id*)arg3;
-(unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
-(unsigned long long)serializedLength;

@end

