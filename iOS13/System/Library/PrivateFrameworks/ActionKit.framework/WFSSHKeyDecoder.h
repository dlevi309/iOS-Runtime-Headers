/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSData;

@interface WFSSHKeyDecoder : NSObject {

	NSData* _data;
	unsigned long long _offset;
	unsigned long long _length;

}

@property (nonatomic,readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long length;              //@synthesize length=_length - In the implementation block
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(void)advanceBy:(unsigned long long)arg1 ;
-(const char*)currentPointer;
-(unsigned)decodeInteger;
-(id)decodeStringWithLength:(unsigned long long)arg1 ;
-(id)decodeStringWithPrecedingLength;
-(id)decodeDataWithLength:(unsigned long long)arg1 ;
-(id)decodeDataWithPrecedingLength;
@end

