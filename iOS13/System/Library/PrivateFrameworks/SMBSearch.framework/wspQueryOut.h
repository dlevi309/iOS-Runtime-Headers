/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned)cursor;
-(void)setCursor:(unsigned)arg1 ;
-(int)decodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesDecoded:(unsigned*)arg3 ;
-(wspHeader *)whdr;
-(void)setWhdr:(wspHeader *)arg1 ;
-(unsigned)trueSequential;
-(unsigned)workID;
-(void)setTrueSequential:(unsigned)arg1 ;
-(void)setWorkID:(unsigned)arg1 ;
@end

