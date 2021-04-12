/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@class wspHeader;

@interface wspQueryStatusOut : NSObject {

	unsigned _qStatus;
	wspHeader* _whdr;

}

@property (retain) wspHeader * whdr;              //@synthesize whdr=_whdr - In the implementation block
@property (assign) unsigned qStatus;              //@synthesize qStatus=_qStatus - In the implementation block
-(id)init;
-(int)decodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesDecoded:(unsigned*)arg3 ;
-(wspHeader *)whdr;
-(void)setWhdr:(wspHeader *)arg1 ;
-(void)setQStatus:(unsigned)arg1 ;
-(unsigned)qStatus;
@end

