/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@protocol VNSerializingInternal
@property (nonatomic,readonly) unsigned long long serializedLength; 
@required
-(id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
-(unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
-(unsigned long long)serializedLength;

@end

