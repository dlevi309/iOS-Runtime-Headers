/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@class NSData;

@interface utf16leData : NSObject {

	unsigned _charCount;
	unsigned _byteCount;
	NSData* _datab;

}

@property (retain) NSData * datab;                  //@synthesize datab=_datab - In the implementation block
@property (assign) unsigned charCount;              //@synthesize charCount=_charCount - In the implementation block
@property (assign) unsigned byteCount;              //@synthesize byteCount=_byteCount - In the implementation block
-(NSData *)datab;
-(unsigned)byteCount;
-(void)setByteCount:(unsigned)arg1 ;
-(id)initWithStr:(id)arg1 ;
-(void)setCharCount:(unsigned)arg1 ;
-(unsigned)charCount;
-(void)setDatab:(NSData *)arg1 ;
@end

