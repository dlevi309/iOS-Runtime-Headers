/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@class wspHeader;

@interface wspFreeCursorOut : NSObject {

	unsigned _cursorsRemaining;
	wspHeader* _whdr;

}

@property (retain) wspHeader * whdr;                       //@synthesize whdr=_whdr - In the implementation block
@property (assign) unsigned cursorsRemaining;              //@synthesize cursorsRemaining=_cursorsRemaining - In the implementation block
-(id)init;
-(int)decodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesDecoded:(unsigned*)arg3 ;
-(wspHeader *)whdr;
-(void)setWhdr:(wspHeader *)arg1 ;
-(void)setCursorsRemaining:(unsigned)arg1 ;
-(unsigned)cursorsRemaining;
@end

