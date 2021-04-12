/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@interface safeArrayBound : NSObject {

	unsigned _cElements;
	unsigned _lowBound;

}

@property (assign) unsigned cElements;              //@synthesize cElements=_cElements - In the implementation block
@property (assign) unsigned lowBound;               //@synthesize lowBound=_lowBound - In the implementation block
-(id)initWithElements:(unsigned)arg1 LowBound:(unsigned)arg2 ;
-(unsigned)cElements;
-(void)setCElements:(unsigned)arg1 ;
-(unsigned)lowBound;
-(void)setLowBound:(unsigned)arg1 ;
@end

