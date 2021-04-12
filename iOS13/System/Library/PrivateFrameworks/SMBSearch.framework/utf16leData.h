/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned)byteCount;
-(void)setByteCount:(unsigned)arg1 ;
-(unsigned)charCount;
-(void)setCharCount:(unsigned)arg1 ;
-(id)initWithStr:(id)arg1 ;
-(NSData *)datab;
-(void)setDatab:(NSData *)arg1 ;
@end

