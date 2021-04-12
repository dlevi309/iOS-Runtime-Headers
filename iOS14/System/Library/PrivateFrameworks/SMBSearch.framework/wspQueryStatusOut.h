/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(wspHeader *)whdr;
-(unsigned)qStatus;
-(int)decodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesDecoded:(unsigned*)arg3 ;
-(void)setWhdr:(wspHeader *)arg1 ;
-(void)setQStatus:(unsigned)arg1 ;
@end

