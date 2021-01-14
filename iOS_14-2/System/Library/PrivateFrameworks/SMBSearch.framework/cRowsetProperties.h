/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

