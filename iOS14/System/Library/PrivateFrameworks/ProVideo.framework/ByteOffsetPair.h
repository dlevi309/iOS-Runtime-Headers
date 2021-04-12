/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@interface ByteOffsetPair : NSObject {

	unsigned long long _lineByteOffset;
	unsigned long long _nextLineByteOffset;

}

@property (assign,nonatomic) unsigned long long lineByteOffset;                  //@synthesize lineByteOffset=_lineByteOffset - In the implementation block
@property (assign,nonatomic) unsigned long long nextLineByteOffset;              //@synthesize nextLineByteOffset=_nextLineByteOffset - In the implementation block
-(unsigned long long)lineByteOffset;
-(void)setLineByteOffset:(unsigned long long)arg1 ;
-(unsigned long long)nextLineByteOffset;
-(void)setNextLineByteOffset:(unsigned long long)arg1 ;
@end

