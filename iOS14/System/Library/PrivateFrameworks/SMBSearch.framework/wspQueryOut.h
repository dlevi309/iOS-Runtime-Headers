/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@class wspHeader;

@interface wspQueryOut : NSObject {

	unsigned _trueSequential;
	unsigned _workID;
	unsigned _cursor;
	wspHeader* _whdr;

}

@property (retain) wspHeader * whdr;                     //@synthesize whdr=_whdr - In the implementation block
@property (assign) unsigned trueSequential;              //@synthesize trueSequential=_trueSequential - In the implementation block
@property (assign) unsigned workID;                      //@synthesize workID=_workID - In the implementation block
@property (assign) unsigned cursor;                      //@synthesize cursor=_cursor - In the implementation block
-(id)init;
-(wspHeader *)whdr;
-(unsigned)workID;
-(unsigned)cursor;
-(void)setCursor:(unsigned)arg1 ;
-(int)decodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesDecoded:(unsigned*)arg3 ;
-(void)setWhdr:(wspHeader *)arg1 ;
-(unsigned)trueSequential;
-(void)setTrueSequential:(unsigned)arg1 ;
-(void)setWorkID:(unsigned)arg1 ;
@end

