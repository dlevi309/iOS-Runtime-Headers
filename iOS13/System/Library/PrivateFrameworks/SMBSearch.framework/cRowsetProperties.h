/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@interface cRowsetProperties : NSObject {

	unsigned _booleanOptions;
	unsigned _maxOpenRows;
	unsigned _memoryUsage;
	unsigned _maxResult;
	unsigned _cmdTimeout;

}

@property (assign) unsigned booleanOptions;              //@synthesize booleanOptions=_booleanOptions - In the implementation block
@property (assign) unsigned maxOpenRows;                 //@synthesize maxOpenRows=_maxOpenRows - In the implementation block
@property (assign) unsigned memoryUsage;                 //@synthesize memoryUsage=_memoryUsage - In the implementation block
@property (assign) unsigned maxResult;                   //@synthesize maxResult=_maxResult - In the implementation block
@property (assign) unsigned cmdTimeout;                  //@synthesize cmdTimeout=_cmdTimeout - In the implementation block
-(id)init;
-(unsigned)memoryUsage;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(void)setBooleanOptions:(unsigned)arg1 ;
-(unsigned)booleanOptions;
-(unsigned)maxOpenRows;
-(void)setMaxOpenRows:(unsigned)arg1 ;
-(void)setMemoryUsage:(unsigned)arg1 ;
-(unsigned)maxResult;
-(void)setMaxResult:(unsigned)arg1 ;
-(unsigned)cmdTimeout;
-(void)setCmdTimeout:(unsigned)arg1 ;
@end

